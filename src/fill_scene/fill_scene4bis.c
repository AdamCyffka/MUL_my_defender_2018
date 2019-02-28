/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave3f(game_scene_t wave3)
{
    wave3.buttons[11] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[12] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.texts[0] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave3.texts[1] = new_text("font.ttf", "Wave 0/4", (sfVector2f) {0, 0}, 12);
    wave3.texts[2] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}
