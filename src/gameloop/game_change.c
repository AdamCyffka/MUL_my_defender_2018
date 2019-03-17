/*
** EPITECH PROJECT, 2019
** defender
** File description:
** game changements
*/

#include "defender.h"

void life_loosed(int *lifes, sfText *text)
{
    lifes[0]--;
    char *towrite = malloc(2);
    towrite[0] = (char) {lifes[0]} + '0';
    towrite[1] = '\0';
    sfText_setString(text, towrite);
}

void set_life(int *lifes, sfText *text)
{
    char *towrite = malloc(2);
    towrite[0] = (char) {lifes[0]} + '0';
    towrite[1] = '\0';
    sfText_setString(text, towrite);
}

void text_changement(game_text_t *texts, game_object_t *objs,
game_stat_t *stat)
{
    if (stat->current >= wave1 && stat->current <= wave4) {
        set_life(&stat->lifes, texts[life_txt].text);
        if (objs[stat->enemycount].state == atend &&
        stat->enemycount < enemy1 + 5 * (stat->current - 1)) {
            life_loosed(&stat->lifes, texts[life_txt].text);
            stat->enemycount++;
        }
    }
}

void game_change(game_stat_t *stats, game_scene_t *scene,
sfRenderWindow *window)
{
    objs_movement(scene[stats->current].objs, stats,
    scene[stats->current].buttons, scene[stats->current].sounds);
    buttons_activation(scene[stats->current].buttons, stats, window);
    if (stats->current >= wave1 && stats->current <= wave4) {
        buttons_animation(scene[stats->current].buttons);
        enemies_get_damaged(scene[stats->current].objs, stats);
    }
    text_changement(scene[stats->current].texts, scene[stats->current].objs,
    stats);
}