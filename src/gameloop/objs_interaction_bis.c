/*
** EPITECH PROJECT, 2019
** defender
** File description:
** objs interactions
*/

#include "defender.h"

void objs_movement(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons, game_sound_t *sounds)
{
    sfTime time = sfClock_getElapsedTime(stats->clock_enemy);
    float seconds = time.microseconds / 1000000.0;
    sfTime time2 = sfClock_getElapsedTime(stats->clock_arrow);
    float seconds2 = time2.microseconds / 1000000.0;

    objs_movement_bis(objs, stats);
    if (stats->current >= wave1 && stats->current <= wave4) {
        move_trap(objs, buttons);
        activate_trap(objs, stats);
        if (seconds > 0.1) {
            move_enemies(objs, stats);
            enemy_animation(objs, stats);
            sfClock_restart(stats->clock_enemy);
        }
        if (seconds2 > 0.05) {
            move_arrows(objs, stats, buttons, sounds);
            sfClock_restart(stats->clock_arrow);
        }
    }
}

void objs_movement_bis(game_object_t *objs, game_stat_t *stats)
{
    if (stats->current == option)
        sfSprite_setPosition(objs[cursor_z].sprite, stats->cursorpos);
    if (stats->current == menu)
        sfSprite_setPosition(objs[cursor_o].sprite, stats->cursorpos);
    if (stats->current >= wave0 && stats->current <= wave4)
        sfSprite_setPosition(objs[cursor].sprite, stats->cursorpos);
}