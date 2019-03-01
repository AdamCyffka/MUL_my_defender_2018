/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_defeat(game_scene_t defeat)
{
    defeat.objs[defeat_o] = new_object("defeat.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    defeat.sounds[defeat_s] = new_sound("defeat.ogg", sfFalse, 100);
    defeat.buttons[back] = new_button("backtomenu.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    defeat.buttons[exit_b] = new_button("exit.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_victory(game_scene_t victory)
{
    victory.objs[victory_o] = new_object("victory.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    victory.sounds[victory_s] = new_sound("victory.ogg", sfFalse, 100);
    victory.buttons[back] = new_button("backtomenu.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    victory.buttons[exit_b] = new_button("exit.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_option(game_scene_t option)
{
    option.objs[option_o] = new_object("option.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.buttons[close_b] = new_button("close.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[plus] = new_button("plus.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[minus] = new_button("minus.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[sound] = new_button("sound.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[mute] = new_button("mute.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}