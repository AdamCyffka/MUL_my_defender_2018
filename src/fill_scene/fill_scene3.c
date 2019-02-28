/*
** EPITECH PROJECT, 2019
** defender
** File description:
** fill 1st to 5th scenes
*/

#include "defender.h"

void fill_scene_wave2e(game_scene_t wave2)
{
    wave2.buttons[sell] = new_button("buttonsell.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[speed] = new_button("buttonspeed.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[damage] = new_button("buttondamage.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[trap] = new_button("buttontrap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[option] = new_button("buttonoption.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.texts[0] = new_text("font.ttf", "0", (sfVector2f) {0, 0}, 12);
    wave2.texts[1] = new_text("font.ttf", "Wave 2/4", (sfVector2f) {0, 0}, 12);
    wave2.texts[2] = new_text("font.ttf", "5", (sfVector2f) {0, 0}, 12);
}

void fill_scene_wave2d(game_scene_t wave2)
{
    wave2.sounds[limit_s] = new_sound("enemyonlimit.ogg", sfFalse, 100);
    wave2.sounds[exit_s] = new_sound("exitgame.ogg", sfFalse, 100);
    wave2.buttons[flag1] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[flag2] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[flag3] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[flag4] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[flag5] = new_button("flag.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[t1] = new_button("t1button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[t2] = new_button("t2button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    wave2.buttons[t3] = new_button("t3button.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080});
    fill_scene_wave2e(wave2);
}

void fill_scene_wave2c(game_scene_t wave2)
{
    wave2.objs[arrow4] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[arrow5] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[trap1] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[trap2] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[trap3] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[trap4] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[trap5] = new_object("trap.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.sounds[bg_s] = new_sound("backgroundmusic.ogg", sfTrue, 100);
    wave2.sounds[start_s] = new_sound("startgame.ogg", sfFalse, 100);
    wave2.sounds[add_s] = new_sound("addtower.ogg", sfFalse, 100);
    wave2.sounds[sell_s] = new_sound("selltower.ogg", sfFalse, 100);
    wave2.sounds[arrow_s] = new_sound("arrow.ogg", sfFalse, 100);
    fill_scene_wave2d(wave2);
}

void fill_scene_wave2b(game_scene_t wave2)
{
    wave2.objs[enemy4] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy5] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy6] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy7] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy8] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy9] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy10] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[arrow1] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[arrow2] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[arrow3] = new_object("arrow.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave2c(wave2);
}

void fill_scene_wave2a(game_scene_t wave2)
{
    wave2.objs[map] = new_object("map.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[heart] = new_object("buttonheart.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[blanck_b] = new_object("buttonblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[money] = new_object("money.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[blanck_p] = new_object("pannelblanck.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[cursor] = new_object("cursor.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy1] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy2] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    wave2.objs[enemy3] = new_object("enemy.png", (sfVector2f) {0, 0},
    (sfIntRect) {0, 0, 1920, 1080}, 0);
    fill_scene_wave2b(wave2);
}
