/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void button_exit_menu(game_button_t *buttons, game_stat_t *stats,
sfRenderWindow *window)
{
    if (stats->cursorpos.x >= buttons[exit_b].position.x &&
    stats->cursorpos.x <= buttons[exit_b].position.x + 190 &&
    stats->cursorpos.y >= buttons[exit_b].position.y &&
    stats->cursorpos.y <= buttons[exit_b].position.y + 70)
        buttons[exit_b].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[exit_b].state == pressed) {
        sfRenderWindow_close(window);
        buttons[exit_b].state = idle;
    }
}

void button_start(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->cursorpos.x >= buttons[start_b].position.x &&
    stats->cursorpos.x <= buttons[start_b].position.x + 190 &&
    stats->cursorpos.y >= buttons[start_b].position.y &&
    stats->cursorpos.y <= buttons[start_b].position.y + 70)
        buttons[start_b].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[start_b].state == pressed) {
        stats->current++;
        buttons[start_b].state = idle;
    }
}

void check_pressed(game_button_t *buttons)
{
    int tmp = flag1;
    for (; tmp <= option; tmp++) {
        if (buttons[tmp].state == pressed)
            break;
    }
    if (tmp == 13)
        for (int tmp2 = t1; tmp2 <= trap; tmp2++) {
            buttons[tmp2].position = (sfVector2f) {-500, -500};
            sfRectangleShape_setPosition(buttons[tmp2].shape,
            buttons[tmp2].position);
        }
}

void change_buttons_state(game_button_t *buttons)
{
    for (int tmp = flag1; tmp <= option; tmp++)
        buttons[tmp].state = idle;
}