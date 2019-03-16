/*
** EPITECH PROJECT, 2019
** defender
** File description:
** do damage to enemies
*/

#include "defender.h"

void enemies_get_damaged(game_button_t *buttons,
game_object_t *objs, game_stat_t *stats)
{
    sfTime time = sfClock_getElapsedTime(stats->clock_damage1);
    float seconds = time.microseconds / 1000000.0;
    sfTime time2 = sfClock_getElapsedTime(stats->clock_damage2);
    float seconds2 = time2.microseconds / 1000000.0;

    for (int tmp = enemy1; tmp < enemy1 + 5 * (stats->current - 1); tmp++) {
        for (int tmp2 = arrow1; tmp2 <= arrow5; tmp2++) {
            if (objs[tmp].position.x < objs[tmp2].position.x + 20 &&
            objs[tmp].position.x + 23 > objs[tmp2].position.x &&
            objs[tmp].position.y < objs[tmp2].position.y + 20 &&
            objs[tmp].position.y + 23 > objs[tmp2].position.y &&
            objs[tmp].state == alive) {
                if (seconds > 0.3) {
                    objs[tmp].hp--;
                    printf("Enemy %i, hit by tower %i, hp = %i\n", tmp-15, tmp2-5, objs[tmp].hp);
                    sfClock_restart(stats->clock_damage1);
                }
            }
        }
        for (int tmp2 = trap1; tmp2 <= trap5; tmp2++) {
            if (objs[tmp].position.x < objs[tmp2].position.x + 70 &&
            objs[tmp].position.x + 23 > objs[tmp2].position.x &&
            objs[tmp].position.y < objs[tmp2].position.y + 70 &&
            objs[tmp].position.y + 23 > objs[tmp2].position.y &&
            objs[tmp].state == alive && objs[tmp2].rect.left == 70) {
                if (seconds2 > 2) {
                    objs[tmp].hp--;
                    printf("Enemy %i, hit by trap %i, hp = %i\n", tmp-15, tmp2-10, objs[tmp].hp);
                    sfClock_restart(stats->clock_damage2);
                }
            }
        }        
        if (objs[tmp].hp <= 0) {
            objs[tmp].state = dead;
            sfSprite_setPosition(objs[tmp].sprite, (sfVector2f) {-100, -100});
        }
    }
}