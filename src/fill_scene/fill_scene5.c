/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4e(game_scene_t wave4)
{
    wave4.sounds[0] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave4.sounds[1] = new_sound("startgame.ogg", sfFalse, 100);
    wave4.sounds[2] = new_sound("addtower.ogg", sfFalse, 100);
    wave4.sounds[3] = new_sound("selltower.ogg", sfFalse, 100);
    wave4.sounds[4] = new_sound("arrow.ogg", sfFalse, 100);
    wave4.sounds[5] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave4.sounds[6] = new_sound("exitgame.ogg", sfFalse, 100);
    wave4.buttons[0] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave4.buttons[5] = new_button("t1button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave4f(wave4);
}

void fill_scene_wave4d(game_scene_t wave4)
{
    wave4.objs[27] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[28] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[29] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[30] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[31] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[32] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[33] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[34] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[35] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave4e(wave4);
}

void fill_scene_wave4c(game_scene_t wave4)
{
    wave4.objs[18] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[19] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[20] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[21] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[22] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[23] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[24] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[25] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[26] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave4d(wave4);
}

void fill_scene_wave4b(game_scene_t wave4)
{
    wave4.objs[9] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[10] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[11] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[12] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[13] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[14] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[15] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[16] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[17] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave4c(wave4);
}

void fill_scene_wave4a(game_scene_t wave4)
{
    wave4.objs[0] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[1] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[2] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[3] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[4] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[5] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[6] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[7] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[8] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave4b(wave4);
}