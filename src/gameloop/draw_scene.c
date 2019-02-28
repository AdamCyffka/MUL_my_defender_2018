/*
** EPITECH PROJECT, 2019
** defender
** File description:
** draw the current scene
*/

#include "defender.h"

void draw_scene(game_scene_t scene, sfRenderWindow *window)
{
    for (int tmp = 0; &scene.objs[tmp] != NULL; tmp++)
        sfRenderWindow_drawSprite(window, scene.objs[tmp].sprite, NULL);
    for (int tmp = 0; &scene.texts[tmp] != NULL; tmp++)
        sfRenderWindow_drawText(window, scene.texts[tmp].text, NULL);
    for (int tmp = 0; &scene.buttons[tmp] != NULL; tmp++)
        sfRenderWindow_drawRectangleShape(window,
        scene.buttons[tmp].shape, NULL);
}