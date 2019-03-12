/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4e(game_scene_t wave4)
{
    wave4.sounds[bg_s] = new_sound("assets/backgroundmusic.ogg", sfTrue, 100);
    wave4.sounds[start_s] = new_sound("assets/startgame.ogg", sfFalse, 100);
    wave4.sounds[add_s] = new_sound("assets/addtower.ogg", sfFalse, 100);
    wave4.sounds[sell_s] = new_sound("assets/selltower.ogg", sfFalse, 100);
    wave4.sounds[arrow_s] = new_sound("assets/arrow.ogg", sfFalse, 100);
    wave4.sounds[limit_s] = new_sound("assets/enemyonlimit.ogg", sfFalse, 100);
    wave4.sounds[exit_s] = new_sound("assets/exitgame.ogg", sfFalse, 100);
    wave4.buttons[flag1] = new_button("assets/flag.png",
    (sfVector2f) {750, 100}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag2] = new_button("assets/flag.png",
    (sfVector2f) {750, 310}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag3] = new_button("assets/flag.png",
    (sfVector2f) {400, 650}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag4] = new_button("assets/flag.png",
    (sfVector2f) {800, 650}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag5] = new_button("assets/flag.png",
    (sfVector2f) {1200, 650}, (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[t1] = new_button("assets/tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave4f(wave4);
}

void fill_scene_wave4d(game_scene_t wave4)
{
    wave4.objs[arrow2] = new_object("assets/arrow.png", (sfVector2f) {500, 140},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow3] = new_object("assets/arrow.png", (sfVector2f) {460, 700},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow4] = new_object("assets/arrow.png", (sfVector2f) {840, 700},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow5] = new_object("assets/arrow.png", (sfVector2f) {1240, 700},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[trap1] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave4.objs[trap2] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave4.objs[trap3] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave4.objs[trap4] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave4.objs[trap5] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    fill_scene_wave4e(wave4);
}

void fill_scene_wave4c(game_scene_t wave4)
{
    wave4.objs[enemy13] = new_object("assets/enemy.png", (sfVector2f) {950, -390},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy14] = new_object("assets/enemy.png", (sfVector2f) {950, -420},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy15] = new_object("assets/enemy.png", (sfVector2f) {950, -450},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy16] = new_object("assets/enemy.png", (sfVector2f) {950, -480},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy17] = new_object("assets/enemy.png", (sfVector2f) {950, -510},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy18] = new_object("assets/enemy.png", (sfVector2f) {950, -540},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy19] = new_object("assets/enemy.png", (sfVector2f) {950, -570},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy20] = new_object("assets/enemy.png", (sfVector2f) {950, -600},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[arrow1] = new_object("assets/arrow.png", (sfVector2f) {800, 140},
    (sfIntRect) {0, 0, 20, 20}, 0);
    fill_scene_wave4d(wave4);
}

void fill_scene_wave4b(game_scene_t wave4)
{
    wave4.objs[enemy4] = new_object("assets/enemy.png", (sfVector2f) {950, -120},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy5] = new_object("assets/enemy.png", (sfVector2f) {950, -150},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy6] = new_object("assets/enemy.png", (sfVector2f) {950, -180},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy7] = new_object("assets/enemy.png", (sfVector2f) {950, -210},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy8] = new_object("assets/enemy.png", (sfVector2f) {950, -240},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy9] = new_object("assets/enemy.png", (sfVector2f) {950, -270},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy10] = new_object("assets/enemy.png", (sfVector2f) {950, -300},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy11] = new_object("assets/enemy.png", (sfVector2f) {950, -330},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy12] = new_object("assets/enemy.png", (sfVector2f) {950, -360},
    (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave4c(wave4);
}

void fill_scene_wave4a(game_scene_t wave4)
{
    wave4.objs[map] = new_object("assets/map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[heart] = new_object("assets/buttonheart.png",
    (sfVector2f) {350, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave4.objs[blanck_b] = new_object("assets/buttonblanck.png",
    (sfVector2f) {425, 900}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[money] = new_object("assets/money.png", (sfVector2f) {350, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[blanck_p] = new_object("assets/pannelblanck.png",
    (sfVector2f) {350, 75}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[cursor] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {25, 50, 50, 50}, 0);
    wave4.objs[enemy1] = new_object("assets/enemy.png", (sfVector2f) {950, -30},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy2] = new_object("assets/enemy.png", (sfVector2f) {950, -60},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave4.objs[enemy3] = new_object("assets/enemy.png", (sfVector2f) {950, -90},
    (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave4b(wave4);
}