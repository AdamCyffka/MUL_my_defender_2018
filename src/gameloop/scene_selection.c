/*
** EPITECH PROJECT, 2019
** defender
** File description:
** scene selection
*/

#include "defender.h"

void scene_selection(game_stat_t *stat, game_object_t *objs)
{
    if (stat->current >= wave1 && stat->current <= wave4) {
        for (int tmp = 0; tmp < enemy1 + (5 * (stat->current - 1)); tmp++) {
            if (objs[tmp].state == alive)
                break;
            if (tmp == enemy1 + 5 * (stat->current - 1) - 1)
                stat->_finish = true;
        }
    }
    if (stat->_finish == true) {
        stat->current += (stat->current < wave4) ? 1 : 0;
        stat->_finish = false;
    }
    if (stat->lifes == 0)
        stat->current = defeat;
}