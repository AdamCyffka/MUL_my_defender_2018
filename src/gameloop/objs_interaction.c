/*
** EPITECH PROJECT, 2019
** defender
** File description:
** objs interactions
*/

#include "defender.h"

void enemy_animation(game_object_t *objs, game_stat_t *stats)
{
    for (int tmp = enemy1; tmp < enemy1 + (5 * (stats->current - 1)); tmp++) {
        objs[tmp].rect.left += (objs[tmp].rect.left == 69) ? -69 : 23;
        sfSprite_setTextureRect(objs[tmp].sprite, objs[tmp].rect);
    }
}

void activate_trap(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons)
{
    sfTime time = sfClock_getElapsedTime(stats->clock_trap);
    float seconds = time.microseconds / 1000000.0;

    if (seconds > 1.5) {
        for (int tmp = trap1; tmp <= trap5; tmp++) {
            if (objs[tmp].state == onscreen)
                objs[tmp].rect.left = (objs[tmp].rect.left == 0) ? 70 : 0;
            sfSprite_setTextureRect(objs[tmp].sprite, objs[tmp].rect);
        }
        sfClock_restart(stats->clock_trap);
    }

}

void move_trap(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons)
{
    for (int tmp = flag1; tmp <= flag3; tmp++) {
        if (buttons[tmp].content == tower2 || buttons[tmp].content == tower3) {
            objs[tmp + 11].position = (sfVector2f) {buttons[tmp].position.x +
            180, buttons[tmp].position.y};
            objs[tmp + 11].state = onscreen;
        }
        sfSprite_setPosition(objs[tmp + 11].sprite, objs[tmp + 11].position);
    }
    for (int tmp = flag4; tmp <= flag5; tmp++) {
        if (buttons[tmp].content == tower2 || buttons[tmp].content == tower3) {
            objs[tmp + 11].position = (sfVector2f) {buttons[tmp].position.x +
            10, buttons[tmp].position.y + 170};
            objs[tmp + 11].state = onscreen;
        }
        sfSprite_setPosition(objs[tmp + 11].sprite, objs[tmp + 11].position);
    }
}

void move_arrows(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons, game_sound_t *sounds)
{
    if (buttons[flag1].action == shooting || buttons[flag1].action == both)
        objs[arrow1].position.x += (objs[arrow1].position.x < 970)? 10 : -170;
    if (buttons[flag2].action == shooting || buttons[flag2].action == both)
        objs[arrow2].position.x += (objs[arrow2].position.x < 970)? 10 : -170;
    if (buttons[flag3].action == shooting || buttons[flag3].action == both)
        objs[arrow3].position.x += (objs[arrow3].position.x < 650)? 10 : -190;
    if (buttons[flag4].action == shooting || buttons[flag4].action == both)
        objs[arrow4].position.y += (objs[arrow4].position.y < 850)? 10 : -150;
    if (buttons[flag5].action == shooting || buttons[flag5].action == both)
        objs[arrow5].position.y += (objs[arrow5].position.y < 850)? 10 : -150;
    for (int tmp = flag1; tmp <= flag5; tmp++)
        if (buttons[tmp].action == shooting || buttons[tmp].action == both)
            play_arrow_sound(sounds, stats);
    for (int tmp = arrow1; tmp <= arrow3; tmp++)
        sfSprite_setRotation(objs[tmp].sprite, 180);
    for (int tmp = arrow4; tmp <= arrow5; tmp++)
        sfSprite_setRotation(objs[tmp].sprite, 270);
    for (int tmp = arrow1; tmp <= arrow5; tmp++) {
        sfSprite_setPosition(objs[tmp].sprite, objs[tmp].position);
    }
}

void move_enemies(game_object_t *objs, game_stat_t *stats)
{
    for (int tmp = enemy1; tmp < enemy1 + (5 * (stats->current - 1)); tmp++) {
        if (objs[tmp].state == alive) {
            objs[tmp].position.y += (objs[tmp].position.y < 480 &&
            objs[tmp].position.x == 950) ? 5 : 0;
            objs[tmp].position.y += (objs[tmp].position.y < 530 &&
            objs[tmp].position.x == 800) ? 5 : 0;
            objs[tmp].position.y += (objs[tmp].position.y < 830 &&
            objs[tmp].position.x == 630) ? 5 : 0;
            objs[tmp].position.y -= (objs[tmp].position.y > 742.5 &&
            objs[tmp].position.x == 1400) ? 2.5 : 0;
            objs[tmp].position.y -= (objs[tmp].position.y > 650 &&
            objs[tmp].position.x == 1470) ? 2.5 : 0;
            objs[tmp].position.x -= (objs[tmp].position.x > 800 &&
            objs[tmp].position.y == 480) ? 5 : 0;
            objs[tmp].position.x -= (objs[tmp].position.x > 630 &&
            objs[tmp].position.y == 530) ? 5 : 0;
            objs[tmp].position.x += (objs[tmp].position.x < 1400 &&
            objs[tmp].position.y == 830) ? 5 : 0;
            objs[tmp].position.x += (objs[tmp].position.x < 1470 &&
            objs[tmp].position.y == 742.5) ? 5 : 0;
            sfSprite_setPosition(objs[tmp].sprite, objs[tmp].position);
        } if (objs[tmp].position.x == 1470 && objs[tmp].position.y == 650
        && objs[tmp].state == alive)
            objs[tmp].state = atend;
    }

}