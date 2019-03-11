/*
** EPITECH PROJECT, 2019
** defender
** File description:
** game changements
*/

#include "defender.h"

void sounds_activation(game_sound_t *sounds, game_object_t *objs,
                    game_button_t *buttons)
{
    for (int tmp = 0; &sounds[tmp] != NULL; tmp++)
        if (sounds[tmp]._loop == sfTrue)
            sounds[tmp]._activated = true;
    for (int tmp = arrow1; tmp <= arrow5; tmp++) {
        if (objs[tmp].state == onscreen) {
            sounds[arrow_s]._activated = true;
            break;
        } else if (objs[tmp].state == overscreen)
            sounds[arrow_s]._activated = false;
    }
    if (buttons[sell].state == pressed)
        sounds[sell_s]._activated = true;
    else if (buttons[sell].state != pressed)
        sounds[arrow_s]._activated = false;
    for (int tmp = t1; tmp <= t3; tmp++) {
        if (buttons[tmp].state == pressed) {
            sounds[add_s]._activated = true;
            break;
        } else if (buttons[tmp].state != pressed)
            sounds[add_s]._activated = false;
    }
}

void life_loosed(int lifes, sfText *text)
{
    lifes--;
    char towrite[2];
    towrite[0] = lifes + '0';
    towrite[1] = '\0';
    sfText_setString(text, towrite);
}

void text_changement(game_text_t *texts, game_object_t *objs, game_stat_t *stat)
{
    for (int tmp = enemy1; &objs[tmp] != NULL; tmp++)
        if (objs[tmp].state == atend)
            life_loosed(stat->lifes, texts[life_txt].text);
}

void game_change(game_stat_t *stats, game_scene_t scene, sfRenderWindow *window)
{
    //objs_animation(scene.objs);
    objs_movement(scene.objs, stats, scene.buttons);
    buttons_activation(scene.buttons, stats);
    //buttons_animation(scene.buttons);
    //sounds_activation(scene.sounds, scene.objs, scene.buttons);
    //text_changement(scene.texts, scene.objs, stats);   
}