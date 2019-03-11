/*
** EPITECH PROJECT, 2019
** defender
** File description:
** objs interactions
*/

#include "defender.h"

void objs_animation(game_object_t *objs)
{

}

void move_arrows(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons)
{
    if (buttons[flag1].action == shooting)
        objs[arrow1].position.x += (objs[arrow1].position.x < 970)? 10 : 0;
    if (buttons[flag2].action == shooting)
        objs[arrow2].position.x += (objs[arrow2].position.x < 970)? 10 : 0;
    if (buttons[flag3].action == shooting)
        objs[arrow3].position.x += (objs[arrow3].position.x < 650)? 10 : 0;
    if (buttons[flag4].action == shooting)
        objs[arrow4].position.y += (objs[arrow4].position.y < 850)? 10 : 0;
    if (buttons[flag5].action == shooting)
        objs[arrow5].position.y += (objs[arrow5].position.y < 850)? 10 : 0;
    for (int tmp = arrow1; tmp <= arrow3; tmp++)
        sfSprite_setRotation(objs[tmp].sprite, 180);
    for (int tmp = arrow4; tmp <= arrow5; tmp++)
        sfSprite_setRotation(objs[tmp].sprite, 270);
    for (int tmp = arrow1; tmp <= arrow5; tmp++) {
        sfSprite_setPosition(objs[tmp].sprite, objs[tmp].position);
        buttons[tmp].action = waiting;
    }
}

void move_enemies(game_object_t *objs, game_stat_t *stats)
{
    for (int tmp = enemy1; tmp < enemy1 + (5 * (stats->current - 1)); tmp++) {
        objs[tmp].position.y += (objs[tmp].position.y < 480 &&
        objs[tmp].position.x == 950) ? 5 : 0;
        objs[tmp].position.y += (objs[tmp].position.y < 530 &&
        objs[tmp].position.x == 800) ? 5 : 0;
        objs[tmp].position.y += (objs[tmp].position.y < 830 &&
        objs[tmp].position.x == 630) ? 5 : 0;
        objs[tmp].position.y -= (objs[tmp].position.y > 742.5 &&
        objs[tmp].position.x == 1400) ? 2.5 : 0;
        objs[tmp].position.y -= (objs[tmp].position.y > 650 &&
        objs[tmp].position.x == 1470) ? 5 : 0;
        objs[tmp].position.x -= (objs[tmp].position.x > 800 &&
        objs[tmp].position.y == 480) ? 5 : 0;
        objs[tmp].position.x -= (objs[tmp].position.x > 630 &&
        objs[tmp].position.y == 530) ? 5 : 0;
        objs[tmp].position.x += (objs[tmp].position.x < 1400 &&
        objs[tmp].position.y == 830) ? 5 : 0;
        objs[tmp].position.x += (objs[tmp].position.x < 1470 &&
        objs[tmp].position.y == 742.5) ? 5 : 0;
        sfSprite_setPosition(objs[tmp].sprite, objs[tmp].position);
    }
}

void objs_movement(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons)
{
    sfTime time = sfClock_getElapsedTime(stats->clock_enemy);
    float seconds = time.microseconds / 1000000.0;
    sfTime time2 = sfClock_getElapsedTime(stats->clock_arrow);
    float seconds2 = time2.microseconds / 1000000.0;

    if (stats->current >= wave0 && stats->current <= wave4)
        sfSprite_setPosition(objs[cursor].sprite, stats->cursorpos);
    if (stats->current >= wave1 && stats->current <= wave4) {
        if (seconds > 0.1) {
            move_enemies(objs, stats);
            sfClock_restart(stats->clock_enemy);
        }
        if (seconds2 > 0.05) {
            move_arrows(objs, stats, buttons);
            sfClock_restart(stats->clock_arrow);
        }
    }
}