/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave0b(game_scene_t wave0)
{
    wave0.buttons[flag4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[flag5] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.texts[money_txt] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave0.texts[wave_txt] = new_text("font.ttf", "Wave 0/4", (sfVector2f) {0, 0}, 12);
    wave0.texts[life_txt] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}

void fill_scene_wave0a(game_scene_t wave0)
{
    wave0.objs[map] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[heart] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[blanck_b] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[money] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[blanck_p] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[cursor] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.sounds[bg_s] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave0.buttons[flag1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[flag2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave0.buttons[flag3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave0b(wave0);
}

void fill_scene_menu(game_scene_t menu)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};

    menu.objs[bg1] = new_object("background.png", pos, rect, 5.0);
    menu.objs[bg2] = new_object("backgroundback.png", pos, rect, 0);
    menu.objs[bg3] = new_object("backgroundcloud.png", pos, rect, 0);
    menu.objs[bg4] = new_object("backgroundfade.png", pos, rect, 0);
    menu.objs[title1] = new_object("maintitle.png", pos, rect, 0);
    menu.objs[title2] = new_object("maintitle2.png", pos, rect, 0);
    menu.objs[start] = new_object("start.png", pos, rect, 0);
}
