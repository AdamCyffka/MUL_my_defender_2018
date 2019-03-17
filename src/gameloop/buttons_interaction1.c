/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void flags_activation_bis(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->_pressed == true) {
        for (int tmp = flag1; tmp <= flag5; tmp++) {
            if (stats->cursorpos.x >= buttons[tmp].position.x &&
            stats->cursorpos.x <= buttons[tmp].position.x + 100 &&
            stats->cursorpos.y >= buttons[tmp].position.y &&
            stats->cursorpos.y <= buttons[tmp].position.y + 100) {
                change_buttons_state(buttons);
                check_pressed(buttons);
                buttons[tmp].state = pressed;
            }
        }
    }
}

void flags_activation(game_button_t *buttons, game_stat_t *stats)
{
    flags_activation_bis(buttons, stats);
    for (int tmp = flag1; tmp <= flag5; tmp++) {
        if (buttons[tmp].state == pressed &&
        buttons[tmp].content == nocontent) {
            choose_tower(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed &&
        buttons[tmp].content == tower1) {
            t1_menu(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed &&
        buttons[tmp].content == tower2) {
            t2_menu(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed &&
        buttons[tmp].content == tower3) {
            t3_menu(buttons, stats, tmp);
            check_pressed(buttons);
        }
    }
}

void buttons_activation(game_button_t *buttons, game_stat_t *stats, sfRenderWindow *window)
{
    if (stats->current >= wave1 && stats->current <= wave4)
        flags_activation(buttons, stats);
    if (stats->current == menu) {
        button_start(buttons, stats);
        button_exit_menu(buttons, stats, window);
    } if (stats->current == options) {
        button_resume(buttons, stats);
        button_exit_option(buttons, stats, window);
        button_main_option(buttons, stats);
    } if (stats->current == defeat || stats->current == victory) {
        button_main_win(buttons, stats);
        button_exit_win(buttons, stats, window);
    }
}

void buttons_animation_bis(game_button_t *buttons)
{
    for (int tmp = sell; tmp <= trap; tmp++) {
        if (buttons[tmp].state == hover)
            buttons[tmp].rect.left = 100;
        else if (buttons[tmp].state == idle) {
            buttons[tmp].rect.left = 0;
        } else {
            buttons[tmp].rect.left = 200;
            change_buttons_state(buttons);
        }
        sfRectangleShape_setTextureRect(buttons[tmp].shape, buttons[tmp].rect);
    }
}

void buttons_animation(game_button_t *buttons)
{
    check_pressed(buttons);
    for (int tmp = flag1; tmp <= flag5; tmp++) {
        if (buttons[tmp].content == tower1)
            sfRectangleShape_setTexture(buttons[tmp].shape, (sfTexture *)
            {sfTexture_createFromFile("assets/ta.png", NULL)}, sfFalse);
        if (buttons[tmp].content == tower2)
            sfRectangleShape_setTexture(buttons[tmp].shape, (sfTexture *)
            {sfTexture_createFromFile("assets/tb.png", NULL)}, sfFalse);
        if (buttons[tmp].content == tower3)
            sfRectangleShape_setTexture(buttons[tmp].shape, (sfTexture *)
            {sfTexture_createFromFile("assets/tc.png", NULL)}, sfFalse);
    }
    buttons_animation_bis(buttons);
}
