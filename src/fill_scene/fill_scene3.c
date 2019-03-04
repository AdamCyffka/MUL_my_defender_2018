/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave2e(game_scene_t wave2)
{
    wave2.buttons[sell] = new_button("assets/buttonsell.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[speed] = new_button("assets/buttonspeed.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[damage] = new_button("assets/buttondamage.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[trap] = new_button("assets/buttontrap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[option] = new_button("assets/buttonoption.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave2.texts[0] = new_text("assets/font.ttf", "0",
    (sfVector2f) {425, 45}, 16);
    wave2.texts[1] = new_text("assets/font.ttf", "Wave 2/4",
    (sfVector2f) {400, 115}, 16);
    wave2.texts[2] = new_text("assets/font.ttf", "5",
    (sfVector2f) {470, 940}, 16);
}

void fill_scene_wave2d(game_scene_t wave2)
{
    wave2.sounds[limit_s] = new_sound("assets/enemyonlimit.ogg", sfFalse, 100);
    wave2.sounds[exit_s] = new_sound("assets/exitgame.ogg", sfFalse, 100);
    wave2.buttons[flag1] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[flag2] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[flag3] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[flag4] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {00, 0, 100, 100});
    wave2.buttons[flag5] = new_button("assets/flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[t1] = new_button("assets/tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[t2] = new_button("assets/tbbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave2.buttons[t3] = new_button("assets/tcbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave2e(wave2);
}

void fill_scene_wave2c(game_scene_t wave2)
{
    wave2.objs[arrow4] = new_object("assets/arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave2.objs[arrow5] = new_object("assets/arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave2.objs[trap1] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave2.objs[trap2] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave2.objs[trap3] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave2.objs[trap4] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave2.objs[trap5] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave2.sounds[bg_s] = new_sound("assets/backgroundmusic.ogg", sfTrue, 100);
    wave2.sounds[start_s] = new_sound("assets/startgame.ogg", sfFalse, 100);
    wave2.sounds[add_s] = new_sound("assets/addtower.ogg", sfFalse, 100);
    wave2.sounds[sell_s] = new_sound("assets/selltower.ogg", sfFalse, 100);
    wave2.sounds[arrow_s] = new_sound("assets/arrow.ogg", sfFalse, 100);
    fill_scene_wave2d(wave2);
}

void fill_scene_wave2b(game_scene_t wave2)
{
    wave2.objs[enemy4] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy5] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy6] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy7] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy8] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy9] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy10] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[arrow1] = new_object("assets/arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave2.objs[arrow2] = new_object("assets/arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave2.objs[arrow3] = new_object("assets/arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    fill_scene_wave2c(wave2);
}

void fill_scene_wave2a(game_scene_t wave2)
{
    wave2.objs[map] = new_object("assets/map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[heart] = new_object("assets/buttonheart.png",
    (sfVector2f) {350, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave2.objs[blanck_b] = new_object("assets/buttonblanck.png",
    (sfVector2f) {425, 900}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave2.objs[money] = new_object("assets/money.png", (sfVector2f) {350, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave2.objs[blanck_p] = new_object("assets/pannelblanck.png",
    (sfVector2f) {350, 75}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave2.objs[cursor] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave2.objs[enemy1] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy2] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave2.objs[enemy3] = new_object("assets/enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave2b(wave2);
}