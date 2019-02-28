/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave3e(game_scene_t wave3)
{
    wave3.buttons[flag3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[flag4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[flag5] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[t1] = new_button("t1button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[t2] = new_button("t2button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[t3] = new_button("t3button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[sell] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[speed] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[damage] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave3f(wave3);
}

void fill_scene_wave3d(game_scene_t wave3)
{
    wave3.objs[trap2] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[trap2] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[trap3] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[trap4] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.sounds[bg_s] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave3.sounds[start_s] = new_sound("startgame.ogg", sfFalse, 100);
    wave3.sounds[add_s] = new_sound("addtower.ogg", sfFalse, 100);
    wave3.sounds[sell_s] = new_sound("selltower.ogg", sfFalse, 100);
    wave3.sounds[arrow_s] = new_sound("arrow.ogg", sfFalse, 100);
    wave3.sounds[limit_s] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave3.sounds[exit_s] = new_sound("exitgame.ogg", sfFalse, 100);
    wave3.buttons[flag1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave3.buttons[flag2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave3e(wave3);
}

void fill_scene_wave3c(game_scene_t wave3)
{
    wave3.objs[enemy13] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy14] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy15] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[arrow1] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[arrow2] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[arrow3] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[arrow4] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[arrow5] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[trap1] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave3d(wave3);
}

void fill_scene_wave3b(game_scene_t wave3)
{
    wave3.objs[enemy4] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy5] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy6] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy7] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy8] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy9] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy10] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy11] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy12] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave3c(wave3);
}

void fill_scene_wave3a(game_scene_t wave3)
{
    wave3.objs[map] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[heart] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[blanck_b] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[money] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[blanck_p] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[cursor] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy1] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy2] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave3.objs[enemy3] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave3b(wave3);
}
