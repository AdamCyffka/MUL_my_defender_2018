/*
** EPITECH PROJECT, 2019
** defender
** File description:
** draw the current scene
*/

#include "defender.h"

void draw_scene(game_scene_t scene, sfRenderWindow *window, int current)
{
    for (int tmp = 0; tmp < scene.how_many[0]; tmp++)
<<<<<<< HEAD
        sfRenderWindow_drawSprite(window, scene.objs[tmp].sprite, NULL);
=======
            sfRenderWindow_drawSprite(window, scene.objs[tmp].sprite, NULL);
>>>>>>> 0000a52c41d3bc56e13121cf26b69d82a0f15b2a
    for (int tmp = 0; tmp < scene.how_many[1]; tmp++)
        if (scene.sounds[tmp]._activated == true)
            sfMusic_play(scene.sounds[tmp].music);
    for (int tmp = 0; tmp < scene.how_many[2]; tmp++)
        sfRenderWindow_drawRectangleShape(window,
        scene.buttons[tmp].shape, NULL);
    for (int tmp = 0; tmp < scene.how_many[3]; tmp++)
        sfRenderWindow_drawText(window, scene.texts[tmp].text, NULL);
    if (current >= wave0 && current <= wave4)
        sfRenderWindow_drawSprite(window, scene.objs[cursor].sprite, NULL);
    if (current == menu)
        sfRenderWindow_drawSprite(window, scene.objs[cursor_o].sprite, NULL);
}