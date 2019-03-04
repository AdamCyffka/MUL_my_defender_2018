/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave3f(game_scene_t wave3)
{
    wave3.buttons[trap] = new_button("assets/buttontrap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[option] = new_button("assets/buttonoption.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave3.texts[money_txt] = new_text("assets/font.ttf", "0",
    (sfVector2f) {425, 45}, 16);
    wave3.texts[wave_txt] = new_text("assets/font.ttf", "Wave 3/4",
    (sfVector2f) {400, 115}, 16);
    wave3.texts[life_txt] = new_text("assets/font.ttf", "5",
    (sfVector2f) {470, 940}, 16);
}
