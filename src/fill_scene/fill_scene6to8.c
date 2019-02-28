/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_defeat(game_scene_t defeat)
{
    defeat.objs[1] = new_object("defeat.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    defeat.sounds[1] = new_sound("defeat.ogg", sfFalse, 100);
    defeat.buttons[0] = new_button("backtomenu.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    defeat.buttons[1] = new_button("exit.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_victory(game_scene_t victory)
{
    victory.objs[1] = new_object("victory.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    victory.sounds[1] = new_sound("victory.ogg", sfFalse, 100);
    victory.buttons[0] = new_button("backtomenu.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    victory.buttons[1] = new_button("exit.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_option(game_scene_t option)
{
    option.objs[1] = new_object("option.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.buttons[0] = new_button("close.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[1] = new_button("plus.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[2] = new_button("minus.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[3] = new_button("sound.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[4] = new_button("mute.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}