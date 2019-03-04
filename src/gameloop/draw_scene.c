/*
** EPITECH PROJECT, 2019
** defender
** File description:
** draw the current scene
*/

#include "defender.h"

void draw_scene(game_scene_t scene, sfRenderWindow *window)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
        sfRenderWindow_drawSprite(window, scene.objs[tmp].sprite, NULL);
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++)
        sfRenderWindow_drawRectangleShape(window,
        scene.buttons[tmp].shape, NULL);
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        sfRenderWindow_drawText(window, scene.texts[tmp].text, NULL);
}