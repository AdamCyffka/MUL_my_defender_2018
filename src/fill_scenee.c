/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_defeat(game_scene_t defeat)
{
    option.objs[1] = new_object("defeat.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.sounds[1] = new_music("defeat.ogg", 1, 100);
    option.buttons[0] = new_button("backtomenu.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[1] = new_button("exit.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_victory(game_scene_t victory)
{
    option.objs[1] = new_object("defeat.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.sounds[1] = new_music("victory.ogg", 1, 100);
    option.buttons[0] = new_button("backtomenu.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[1] = new_button("exit.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_option(game_scene_t option)
{
    option.objs[1] = new_object("option.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.buttons[0] = new_button("close.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[1] = new_button("plus.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[2] = new_button("minus.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[3] = new_button("sound.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
    option.buttons[4] = new_button("mute.png", (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080});
}