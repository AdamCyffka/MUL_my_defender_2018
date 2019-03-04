/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4f(game_scene_t wave4)
{
    wave4.buttons[t2] = new_button("assets/tbbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[t3] = new_button("assets/tcbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[sell] = new_button("assets/buttonsell.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[speed] = new_button("assets/buttonspeed.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[damage] = new_button("assets/buttondamage.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[trap] = new_button("assets/buttontrap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[option] = new_button("assets/buttonoption.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave4.texts[money_txt] = new_text("assets/font.ttf", "0",
    (sfVector2f) {425, 45}, 16);
    wave4.texts[wave_txt] = new_text("assets/font.ttf", "Wave 4/4",
    (sfVector2f) {400, 115}, 16);
    wave4.texts[life_txt] = new_text("assets/font.ttf", "5",
    (sfVector2f) {470, 940}, 16);
}