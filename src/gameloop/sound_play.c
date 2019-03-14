/*
** EPITECH PROJECT, 2019
** defender
** File description:
** sound play
*/

#include "defender.h"

void play_arrow_sound(game_sound_t *sounds, game_stat_t *stats)
{
    sfTime time = sfClock_getElapsedTime(stats->clock_sounds);
    float seconds = time.microseconds / 1000000.0;

    if (seconds > 0.7) {
        sfMusic_play(sounds[arrow_s].music);
        sfClock_restart(stats->clock_sounds);
    }
}