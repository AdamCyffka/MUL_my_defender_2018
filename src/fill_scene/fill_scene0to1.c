/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave0b(game_scene_t wave0)
{
    wave0.buttons[flag4] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave0.buttons[flag5] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave0.texts[money_txt] = new_text("assets/font.ttf", "0",
    (sfVector2f) {425, 45}, 16);
    wave0.texts[wave_txt] = new_text("assets/font.ttf", "Wave 0/4",
    (sfVector2f) {400, 115}, 16);
    wave0.texts[life_txt] = new_text("assets/font.ttf", "5",
    (sfVector2f) {470, 940}, 16);
}

void fill_scene_wave0a(game_scene_t wave0)
{
    wave0.objs[map] = new_object("assets/intro.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave0.objs[heart] = new_object("assets/buttonheart.png",
    (sfVector2f) {350, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave0.objs[blanck_b] = new_object("assets/buttonblanck.png",
    (sfVector2f) {425, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave0.objs[money] = new_object("assets/money.png", (sfVector2f) {350, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave0.objs[blanck_p] = new_object("assets/pannelblanck.png",
    (sfVector2f) {350, 75}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave0.objs[cursor] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {25, 50, 50, 50}, 0);
    wave0.sounds[bg_s] = new_sound("assets/backgroundmusic.ogg", sfTrue, 100);
    wave0.buttons[flag1] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave0.buttons[flag2] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave0.buttons[flag3] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave0b(wave0);
}

void fill_scene_menu(game_scene_t menu)
{
    menu.objs[cursor_o] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {25, 50, 50, 50}, 0);
    menu.objs[bg4] = new_object("assets/background.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 5.0);
    menu.objs[bg1] = new_object("assets/backgroundback.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    menu.objs[bg2] = new_object("assets/backgroundcloud.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    menu.objs[bg3] = new_object("assets/backgroundfade.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, 0);
    menu.objs[title1] = new_object("assets/maintitle.png",
    (sfVector2f) {700, 50}, (sfIntRect) {0, 0, 500, 500}, 0);
    menu.objs[title2] = new_object("assets/maintitlebis.png",
    (sfVector2f) {800, 220}, (sfIntRect) {0, 0, 500, 100}, 0);
    menu.buttons[exit_menu] = new_button("assets/exit.png",
    (sfVector2f) {900, 550}, (sfIntRect) {0, 0, 190, 130});
    menu.buttons[start_b] = new_button("assets/start.png",
    (sfVector2f) {900, 480}, (sfIntRect) {0, 0, 190, 130});
}