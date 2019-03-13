/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave1e(game_scene_t wave1)
{
    wave1.buttons[option] = new_button("assets/buttonoption.png",
    (sfVector2f) {1480, 0}, (sfIntRect) {0, 0, 100, 100});
    wave1.texts[money_txt] = new_text("assets/font.ttf", "0",
    (sfVector2f) {425, 45}, 16);
    wave1.texts[wave_txt] = new_text("assets/font.ttf", "Wave 1/4",
    (sfVector2f) {400, 115}, 16);
    wave1.texts[life_txt] = new_text("assets/font.ttf", "5",
    (sfVector2f) {470, 940}, 16);
}

void fill_scene_wave1d(game_scene_t wave1)
{
    wave1.buttons[flag4] = new_button("assets/flag.png",
    (sfVector2f) {800, 650}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag5] = new_button("assets/flag.png",
    (sfVector2f) {1200, 650}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[t1] = new_button("assets/tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[t2] = new_button("assets/tbbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[t3] = new_button("assets/tcbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[sell] = new_button("assets/buttonsell.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[speed] = new_button("assets/buttonspeed.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[damage] = new_button("assets/buttondamage.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[trap] = new_button("assets/buttontrap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave1e(wave1);
}

void fill_scene_wave1c(game_scene_t wave1)
{
    wave1.objs[trap3] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave1.objs[trap4] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave1.objs[trap5] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave1.sounds[bg_s] = new_sound("assets/backgroundmusic.ogg", sfTrue, 100);
    wave1.sounds[start_s] = new_sound("assets/startgame.ogg", sfFalse, 100);
    wave1.sounds[add_s] = new_sound("assets/addtower.ogg", sfFalse, 100);
    wave1.sounds[sell_s] = new_sound("assets/selltower.ogg", sfFalse, 100);
    wave1.sounds[arrow_s] = new_sound("assets/arrow.ogg", sfFalse, 100);
    wave1.sounds[limit_s] = new_sound("assets/enemyonlimit.ogg", sfFalse, 100);
    wave1.sounds[exit_s] = new_sound("assets/exitgame.ogg", sfFalse, 100);
    wave1.buttons[flag1] = new_button("assets/flag.png",
    (sfVector2f) {750, 100}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag2] = new_button("assets/flag.png",
    (sfVector2f) {750, 310}, (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag3] = new_button("assets/flag.png",
    (sfVector2f) {400, 650}, (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave1d(wave1);
}

void fill_scene_wave1b(game_scene_t wave1)
{
    wave1.objs[enemy4] = new_object("assets/enemy.png",
    (sfVector2f) {950, -120}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave1.objs[enemy5] = new_object("assets/enemy.png",
    (sfVector2f) {950, -150}, (sfIntRect) {0, 0, 23, 23}, 0);
    wave1.objs[arrow1] = new_object("assets/arrow.png",
    (sfVector2f) {800, 140}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow2] = new_object("assets/arrow.png",
    (sfVector2f) {500, 140}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow3] = new_object("assets/arrow.png",
    (sfVector2f) {460, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow4] = new_object("assets/arrow.png",
    (sfVector2f) {840, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow5] = new_object("assets/arrow.png",
    (sfVector2f) {1240, 700}, (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[trap1] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    wave1.objs[trap2] = new_object("assets/trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 70, 70}, 0);
    fill_scene_wave1c(wave1);
}

void fill_scene_wave1a(game_scene_t wave1)
{
    wave1.objs[map] = new_object("assets/map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[heart] = new_object("assets/buttonheart.png",
    (sfVector2f) {350, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave1.objs[blanck_b] = new_object("assets/buttonblanck.png",
    (sfVector2f) {425, 900}, (sfIntRect) {0, 0, 100, 100}, 0);
    wave1.objs[money] = new_object("assets/money.png", (sfVector2f) {350, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave1.objs[blanck_p] = new_object("assets/pannelblanck.png",
    (sfVector2f) {350, 75}, (sfIntRect) {0, 0, 200, 100}, 0);
    wave1.objs[cursor] = new_object("assets/cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {25, 50, 50, 50}, 0);
    wave1.objs[enemy1] = new_object("assets/enemy.png", (sfVector2f) {950, -30},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave1.objs[enemy2] = new_object("assets/enemy.png", (sfVector2f) {950, -60},
    (sfIntRect) {0, 0, 23, 23}, 0);
    wave1.objs[enemy3] = new_object("assets/enemy.png", (sfVector2f) {950, -90},
    (sfIntRect) {0, 0, 23, 23}, 0);
    fill_scene_wave1b(wave1);
}