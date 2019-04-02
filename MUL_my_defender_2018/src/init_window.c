/*
** EPITECH PROJECT, 2019
** defender
** File description:
** init functions
*/

#include "defender.h"

void init_params(window_t *params)
{
    sfVideoMode mode = {1920, 1080, 32};
    params->window = sfRenderWindow_create
    (mode, "Kingdom Defense", sfClose | sfResize, NULL);
}

void init_window(window_t *params, game_scene_t *scene)
{
    sfRenderWindow_setFramerateLimit(params->window, 60);
    sfRenderWindow_setMouseCursorVisible(params->window, sfFalse);
    sfMusic_setLoop(scene[wave1].sounds[bg_s].music, sfTrue);
    sfMusic_play(scene[wave1].sounds[bg_s].music);
}
