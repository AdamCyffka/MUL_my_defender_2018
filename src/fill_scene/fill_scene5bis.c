/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4f(game_scene_t wave4)
{
    wave4.buttons[t2] = new_button("t2button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[t3] = new_button("t3button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[sell] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[speed] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[damage] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[trap] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[option] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.texts[money_txt] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave4.texts[wave_txt] = new_text("font.ttf", "Wave 4/4", (sfVector2f) {0, 0}, 12);
    wave4.texts[life_txt] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}