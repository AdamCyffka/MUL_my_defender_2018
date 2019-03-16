/*
** EPITECH PROJECT, 2019
** defender
** File description:
** scene selection
*/

#include "defender.h"

void scene_selection(game_stat_t *stats, game_scene_t *scene)
{
    if (stats->current >= wave1 && stats->current <= wave4) {
        for (int tmp = enemy1; tmp < enemy1 + (5 * (stats->current - 1));
        tmp++) {
            if (scene[stats->current].objs[tmp].state == alive)
                break;
            if (tmp == enemy1 + (5 * (stats->current - 1) - 1))
                stats->_finish = true;
        }
    }
    if (stats->_finish == true) {
        stats->current += (stats->current < wave4) ? 1 : 0;
        stats->enemycount = enemy1;
        stats->_finish = false;
    }
    if (stats->lifes == 0)
        stats->current = defeat;
}