/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave3e(game_scene_t wave3)
{
    wave3.buttons[flag2] = new_button("assets/flag.png",
    (sfVector2f) {750, 310}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[flag3] = new_button("assets/flag.png",
    (sfVector2f) {400, 650}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[flag4] = new_button("assets/flag.png",
    (sfVector2f) {800, 650}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[flag5] = new_button("assets/flag.png",
    (sfVector2f) {1200, 650}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[t1] = new_button("assets/tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[t2] = new_button("assets/tbbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[t3] = new_button("assets/tcbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[sell] = new_button("assets/buttonsell.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[speed] = new_button("assets/buttonspeed.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave3.buttons[damage] = new_button("assets/buttondamage.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave3f(wave3);
}

void fill_scene_wave3d(game_scene_t wave3)
{
    wave3.objs[trap2] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave3.objs[trap2] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave3.objs[trap3] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave3.objs[trap4] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave3.objs[trap5] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave3.sounds[bg_s] = new_sound("assets/backgroundmusic.ogg", sfTrue, 100);
    wave3.sounds[start_s] = new_sound("assets/startgame.ogg", sfFalse, 100);
    wave3.sounds[add_s] = new_sound("assets/addtower.ogg", sfFalse, 100);
    wave3.sounds[sell_s] = new_sound("assets/selltower.ogg", sfFalse, 100);
    wave3.sounds[arrow_s] = new_sound("assets/arrow.ogg", sfFalse, 100);
    wave3.sounds[limit_s] = new_sound("assets/enemyonlimit.ogg", sfFalse, 100);
    wave3.sounds[exit_s] = new_sound("assets/exitgame.ogg", sfFalse, 100);
    wave3.buttons[flag1] = new_button("assets/flag.png",
    (sfVector2f) {750, 100}, (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave3e(wave3);
}

void fill_scene_wave3c(game_scene_t wave3)
{
    wave3.objs[enemy13] = new_object("assets/enemy.png",
    (sfVector2f) {950, -390}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy14] = new_object("assets/enemy.png",
    (sfVector2f) {950, -420}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy15] = new_object("assets/enemy.png",
    (sfVector2f) {950, -450}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[arrow1] = new_object("assets/arrow.png",
    (sfVector2f) {800, 140}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave3.objs[arrow2] = new_object("assets/arrow.png",
    (sfVector2f) {800, 340}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave3.objs[arrow3] = new_object("assets/arrow.png",
    (sfVector2f) {460, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave3.objs[arrow4] = new_object("assets/arrow.png",
    (sfVector2f) {840, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave3.objs[arrow5] = new_object("assets/arrow.png",
    (sfVector2f) {1240, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave3.objs[trap1] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    fill_scene_wave3d(wave3);
}

void fill_scene_wave3b(game_scene_t wave3)
{
    wave3.objs[enemy4] = new_object("assets/enemy.png",
    (sfVector2f) {950, -120}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy5] = new_object("assets/enemy.png",
    (sfVector2f) {950, -150}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy6] = new_object("assets/enemy.png",
    (sfVector2f) {950, -180}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy7] = new_object("assets/enemy.png",
    (sfVector2f) {950, -210}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy8] = new_object("assets/enemy.png",
    (sfVector2f) {950, -240}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy9] = new_object("assets/enemy.png",
    (sfVector2f) {950, -270}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy10] = new_object("assets/enemy.png",
    (sfVector2f) {950, -300}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy11] = new_object("assets/enemy.png",
    (sfVector2f) {950, -330}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy12] = new_object("assets/enemy.png",
    (sfVector2f) {950, -360}, (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave3c(wave3);
}

void fill_scene_wave3a(game_scene_t wave3)
{
    wave3.objs[map] = new_object("assets/map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[heart] = new_object("assets/buttonheart.png",
    (sfVector2f) {350, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave3.objs[blanck_b] = new_object("assets/buttonblanck.png",
    (sfVector2f) {425, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave3.objs[money] = new_object("assets/money.png", (sfVector2f) {350, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave3.objs[blanck_p] = new_object("assets/pannelblanck.png",
    (sfVector2f) {350, 75}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave3.objs[cursor] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {25, 50, 50, 50}, 0);
    wave3.objs[enemy1] = new_object("assets/enemy.png",
    (sfVector2f) {950, -30}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy2] = new_object("assets/enemy.png",
    (sfVector2f) {950, -60}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave3.objs[enemy3] = new_object("assets/enemy.png",
    (sfVector2f) {950, -90}, (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave3b(wave3);
}