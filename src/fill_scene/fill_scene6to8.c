/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_defeat(game_scene_t defeat)
{
    defeat.objs[defeat_o] = new_object("assets/defeat.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    defeat.sounds[defeat_s] = new_sound("assets/defeat.ogg", sfFalse, 100);
    defeat.buttons[back] = new_button("assets/backtomenu.png",
    (sfVector2f) {900, 350}, (sfIntRect) {0, 0, 190, 130});
    defeat.buttons[exit_b] = new_button("assets/exit.png",
    (sfVector2f) {900, 280}, (sfIntRect) {0, 0, 190, 130});
}

void fill_scene_victory(game_scene_t victory)
{
    victory.objs[victory_o] = new_object("assets/victory.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    victory.sounds[victory_s] = new_sound("assets/victory.ogg", sfFalse, 100);
    victory.buttons[back] = new_button("assets/backtomenu.png",
    (sfVector2f) {900, 350}, (sfIntRect) {0, 0, 190, 130});
    victory.buttons[exit_b] = new_button("assets/exit.png",
    (sfVector2f) {900, 280}, (sfIntRect) {0, 0, 190, 130});
}

void fill_scene_option(game_scene_t option)
{
    option.objs[cursor_z] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {25, 50, 50, 50}, 0);
    option.objs[option_o] = new_object("assets/option.png",
    (sfVector2f) {0, -10}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    option.buttons[close_b] = new_button("assets/close.png",
    (sfVector2f) {330, 0}, (sfIntRect) {0, 0, 100, 100});
    option.buttons[plus] = new_button("assets/plus.png",
    (sfVector2f) {1050, 200}, (sfIntRect) {0, 0, 100, 100});
    option.buttons[minus] = new_button("assets/minus.png",
    (sfVector2f) {890, 200}, (sfIntRect) {0, 0, 100, 100});
    option.buttons[sound] = new_button("assets/sound.png",
    (sfVector2f) {970, 200}, (sfIntRect) {0, 0, 100, 100});
    option.buttons[mute] = new_button("assets/mute.png",
    (sfVector2f) {760, 200}, (sfIntRect) {0, 0, 100, 100});
    option.buttons[exit_g] = new_button("assets/exit.png",
    (sfVector2f) {1470, 0}, (sfIntRect) {0, 0, 190, 130});
    option.buttons[go_menu] = new_button("assets/backtomenu.png",
    (sfVector2f) {1470, 70}, (sfIntRect) {0, 0, 190, 130});
}