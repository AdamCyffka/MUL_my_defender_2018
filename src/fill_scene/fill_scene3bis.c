/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 3th scenes
*/

#include "defender.h"

void fill_scene_wave2b_b(game_scene_t wave2)
{
    wave2.objs[arrow2] = new_object("assets/arrow.png",
    (sfVector2f) {800, 340}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave2.objs[arrow3] = new_object("assets/arrow.png",
    (sfVector2f) {460, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
}