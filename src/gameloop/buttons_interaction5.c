/*
** EPITECH PROJECT, 2019
** defender
** File description:
** button interaction
*/

#include "defender.h"

void button_exit_win(game_button_t *buttons, game_stat_t *stats, sfRenderWindow *window)
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

void button_main_win(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->cursorpos.x >= buttons[back].position.x &&
    stats->cursorpos.x <= buttons[back].position.x + 190 &&
    stats->cursorpos.y >= buttons[back].position.y &&
    stats->cursorpos.y <= buttons[back].position.y + 70)
        buttons[back].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[back].state == pressed) {
        stats->current = menu;
        stats->lifes = 5;
        buttons[back].state = idle;
    }
}


void button_main_option(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->cursorpos.x >= buttons[go_menu].position.x &&
    stats->cursorpos.x <= buttons[go_menu].position.x + 190 &&
    stats->cursorpos.y >= buttons[go_menu].position.y &&
    stats->cursorpos.y <= buttons[go_menu].position.y + 70)
        buttons[go_menu].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[go_menu].state == pressed) {
        stats->current = menu;
        stats->lifes = 5;
        buttons[go_menu].state = idle;
    }
}

void button_exit_option(game_button_t *buttons, game_stat_t *stats, sfRenderWindow *window)
{
    if (stats->cursorpos.x >= buttons[exit_g].position.x &&
    stats->cursorpos.x <= buttons[exit_g].position.x + 190 &&
    stats->cursorpos.y >= buttons[exit_g].position.y &&
    stats->cursorpos.y <= buttons[exit_g].position.y + 70)
        buttons[exit_g].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[exit_g].state == pressed) {
        sfRenderWindow_close(window);
        buttons[exit_g].state = idle;
    }
}

void button_resume(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->cursorpos.x >= buttons[close_b].position.x &&
    stats->cursorpos.x <= buttons[close_b].position.x + 190 &&
    stats->cursorpos.y >= buttons[close_b].position.y &&
    stats->cursorpos.y <= buttons[close_b].position.y + 130)
        buttons[close_b].state = (stats->_pressed == true) ? pressed : idle;
    if (buttons[close_b].state == pressed) {
        stats->current = stats->previous;
        buttons[close_b].state = idle;
    }
}