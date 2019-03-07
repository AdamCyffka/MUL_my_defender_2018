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

void objs_movement(game_object_t *objs, game_stat_t *stats)
{
    if (stats->current >= wave0 && stats->current <= wave4)
        sfSprite_setPosition(objs[cursor].sprite, stats->cursorpos);
}