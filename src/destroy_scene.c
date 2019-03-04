/*
** EPITECH PROJECT, 2019
** defender
** File description:
** free the memory
*/

#include "defender.h"

void destroy_texts(game_text_t *texts, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfFont_destroy(texts[tmp].font);
        sfText_destroy(texts[tmp].text);
    }
}

void destroy_buttons(game_button_t *buttons, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfRectangleShape_destroy(buttons[tmp].shape);
        sfTexture_destroy(buttons[tmp].texture);
    }
}

void destroy_sounds(game_sound_t *sounds, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfMusic_destroy(sounds[tmp].music);
    }
}

void destroy_objs(game_object_t *objs, int nbr)
{
    for (int tmp = 0; tmp < nbr; tmp++) {
        sfSprite_destroy(objs[tmp].sprite);
        sfTexture_destroy(objs[tmp].texture);
    }
}

void destroy_all(game_scene_t *scene)
{
    for (int tmp = 0; tmp < 9; tmp++) {
        destroy_objs(scene[tmp].objs, scene[tmp].how_many[0]);
        destroy_sounds(scene[tmp].sounds, scene[tmp].how_many[1]);
        destroy_buttons(scene[tmp].buttons, scene[tmp].how_many[2]);
        destroy_texts(scene[tmp].texts, scene[tmp].how_many[3]);
        free(scene[tmp].objs);
        free(scene[tmp].sounds);
        free(scene[tmp].buttons);
        free(scene[tmp].texts);
        free(scene[tmp].how_many);
    }
    free(scene);
}