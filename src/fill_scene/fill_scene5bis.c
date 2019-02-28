/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4f(game_scene_t wave4)
{
    wave4.buttons[6] = new_button("t2button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[7] = new_button("t3button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[8] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[9] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[10] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[11] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[12] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.texts[0] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave4.texts[1] = new_text("font.ttf", "Wave 0/4", (sfVector2f) {0, 0}, 12);
    wave4.texts[2] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}