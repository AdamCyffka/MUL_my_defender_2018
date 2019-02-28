/*
** EPITECH PROJECT, 2019
** scene selection
** File description:
** defender
*/

#include "defender.h"

void scene_selection(game_stat_t *stat)
{
    if (stat->_finish == true)
        stat->current = (stat->current < 7) ? stat->current + 1 : 0;
}