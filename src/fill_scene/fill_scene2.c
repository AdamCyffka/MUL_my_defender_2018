/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave1e(game_scene_t wave1)
{
    wave1.buttons[option] = new_button("buttonsettings.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.texts[money_txt] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave1.texts[wave_txt] = new_text("font.ttf", "Wave 1/4", (sfVector2f) {0, 0}, 12);
    wave1.texts[life_txt] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}

void fill_scene_wave1d(game_scene_t wave1)
{
    wave1.buttons[flag4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag5] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[t1] = new_button("tabutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[t2] = new_button("tbbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[t3] = new_button("tcbutton.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[sell] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[speed] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[damage] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    wave1.buttons[trap] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 300, 100});
    fill_scene_wave1e(wave1);
}

void fill_scene_wave1c(game_scene_t wave1)
{
    wave1.objs[trap3] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave1.objs[trap4] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave1.objs[trap5] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave1.sounds[bg_s] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave1.sounds[start_s] = new_sound("startgame.ogg", sfFalse, 100);
    wave1.sounds[add_s] = new_sound("addtower.ogg", sfFalse, 100);
    wave1.sounds[sell_s] = new_sound("selltower.ogg", sfFalse, 100);
    wave1.sounds[arrow_s] = new_sound("arrow.ogg", sfFalse, 100);
    wave1.sounds[limit_s] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave1.sounds[exit_s] = new_sound("exitgame.ogg", sfFalse, 100);
    wave1.buttons[flag1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    wave1.buttons[flag3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100});
    fill_scene_wave1d(wave1);
}

void fill_scene_wave1b(game_scene_t wave1)
{
    wave1.objs[enemy4] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave1.objs[enemy5] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave1.objs[arrow1] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow2] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow3] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow4] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[arrow5] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 20, 20}, 0);
    wave1.objs[trap1] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    wave1.objs[trap2] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 282, 221}, 0);
    fill_scene_wave1c(wave1);
}

void fill_scene_wave1a(game_scene_t wave1)
{
    wave1.objs[map] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave1.objs[heart] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave1.objs[blanck_b] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave1.objs[money] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave1.objs[blanck_p] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 200, 100}, 0);
    wave1.objs[cursor] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 100, 100}, 0);
    wave1.objs[enemy1] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave1.objs[enemy2] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    wave1.objs[enemy3] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 92, 23}, 0);
    fill_scene_wave1b(wave1);
}