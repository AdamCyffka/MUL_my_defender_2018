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
    sfTime time = sfClock_getElapsedTime(stats->clock_damage);
    float seconds = time.microseconds / 1000000.0;

    for (int tmp = enemy1; tmp < enemy1 + 5 * (stats->current - 1); tmp++) {
        for (int tmp2 = arrow1; tmp2 <= arrow5; tmp2++) {
            if (objs[tmp2].position.x + 20>= objs[tmp].position.x + 5 &&
            objs[tmp2].position.x + 20 <= objs[tmp].position.x  + 23 &&
            objs[tmp2].position.y + 10 >= objs[tmp].position.y + 5 &&
            objs[tmp2].position.y + 10 <= objs[tmp].position.y + 18) {
                if (seconds > 0.3) {
                    objs[tmp].hp--;
                    sfClock_restart(stats->clock_damage);
                }
            }
        }
        if (objs[tmp].hp == 0)
            objs[tmp].state == dead;
    }
}