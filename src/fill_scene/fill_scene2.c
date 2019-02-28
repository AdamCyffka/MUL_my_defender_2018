/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave1e(game_scene_t wave1)
{
    wave1.buttons[12] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.texts[0] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave1.texts[1] = new_text("font.ttf", "Wave 0/4", (sfVector2f) {0, 0}, 12);
    wave1.texts[2] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}

void fill_scene_wave1d(game_scene_t wave1)
{
    wave1.buttons[3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[5] = new_button("t1button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[6] = new_button("t2button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[7] = new_button("t3button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[8] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[9] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[10] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[11] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave1e(wave1);
}

void fill_scene_wave1c(game_scene_t wave1)
{
    wave1.objs[18] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[20] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[19] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.sounds[0] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave1.sounds[1] = new_sound("startgame.ogg", sfFalse, 100);
    wave1.sounds[2] = new_sound("addtower.ogg", sfFalse, 100);
    wave1.sounds[3] = new_sound("selltower.ogg", sfFalse, 100);
    wave1.sounds[4] = new_sound("arrow.ogg", sfFalse, 100);
    wave1.sounds[5] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave1.sounds[6] = new_sound("exitgame.ogg", sfFalse, 100);
    wave1.buttons[0] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave1.buttons[2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave1d(wave1);
}

void fill_scene_wave1b(game_scene_t wave1)
{
    wave1.objs[9] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[10] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[11] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[12] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[13] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[14] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[15] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[16] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[17] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave1c(wave1);
}

void fill_scene_wave1a(game_scene_t wave1)
{
    wave1.objs[0] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[1] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[2] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[3] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[4] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[5] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[6] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[7] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[8] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave1b(wave1);
}