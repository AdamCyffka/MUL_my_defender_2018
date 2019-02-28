/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave3f(game_scene_t wave3)
{
    wave3.buttons[trap] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[option] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.texts[money_txt] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave3.texts[wave_txt] = new_text("font.ttf", "Wave 0/4", (sfVector2f) {0, 0}, 12);
    wave3.texts[life_txt] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}
