/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave0b(game_scene_t wave0)
{
    wave0.objs[0] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[1] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[2] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[3] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[4] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[5] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.sounds[0] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave0.buttons[0] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
}

void fill_scene_wave0a(game_scene_t wave0)
{
    wave0.objs[0] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[1] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[2] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[3] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[4] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[5] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.sounds[0] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave0.buttons[0] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave0b(wave0);
}

void fill_scene_menu(game_scene_t menu)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};

    menu.objs[0] = new_object("background.png", pos, rect, 5.0);
    menu.objs[1] = new_object("backgroundback.png", pos, rect, 0);
    menu.objs[2] = new_object("backgroundcloud.png", pos, rect, 0);
    menu.objs[3] = new_object("backgroundfade.png", pos, rect, 0);
    menu.objs[4] = new_object("maintitle.png", pos, rect, 0);
    menu.objs[5] = new_object("maintitle2.png", pos, rect, 0);
    menu.objs[6] = new_object("start.png", pos, rect, 0);
}
