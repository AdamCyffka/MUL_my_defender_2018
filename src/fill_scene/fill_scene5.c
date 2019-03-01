/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill scened
*/

#include "defender.h"

void fill_scene_wave4e(game_scene_t wave4)
{
    wave4.sounds[bg_s] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave4.sounds[start_s] = new_sound("startgame.ogg", sfFalse, 100);
    wave4.sounds[add_s] = new_sound("addtower.ogg", sfFalse, 100);
    wave4.sounds[sell_s] = new_sound("selltower.ogg", sfFalse, 100);
    wave4.sounds[arrow_s] = new_sound("arrow.ogg", sfFalse, 100);
    wave4.sounds[limit_s] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave4.sounds[exit_s] = new_sound("exitgame.ogg", sfFalse, 100);
    wave4.buttons[flag1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[flag5] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave4.buttons[t1] = new_button("tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave4f(wave4);
}

void fill_scene_wave4d(game_scene_t wave4)
{
    wave4.objs[arrow2] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow3] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow4] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[arrow5] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave4.objs[trap1] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave4.objs[trap2] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave4.objs[trap3] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave4.objs[trap4] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave4.objs[trap5] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    fill_scene_wave4e(wave4);
}

void fill_scene_wave4c(game_scene_t wave4)
{
    wave4.objs[enemy13] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy14] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy15] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy16] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy17] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy16] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy19] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy20] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[arrow1] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    fill_scene_wave4d(wave4);
}

void fill_scene_wave4b(game_scene_t wave4)
{
    wave4.objs[enemy4] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy5] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy6] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy7] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy8] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy9] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy10] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy11] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy12] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    fill_scene_wave4c(wave4);
}

void fill_scene_wave4a(game_scene_t wave4)
{
    wave4.objs[map] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave4.objs[heart] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave4.objs[blanck_b] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[money] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[blanck_p] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave4.objs[cursor] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave4.objs[enemy1] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy2] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave4.objs[enemy3] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    fill_scene_wave4b(wave4);
}