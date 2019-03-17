/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void button_start(game_button_t *buttons, game_stat_t *stats, int current)
{
    if (buttons[start_b].state == pressed) {
        stats->current++;
        buttons[start_b].state = idle;
    }
}

void check_pos_start(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;
    buttons[start_b].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[start_b].shape,
    buttons[start_b].position);
    if (stats->cursorpos.x >= buttons[tmp2].position.x + 15 &&
    stats->cursorpos.y <= buttons[tmp2].position.y + 85)
        buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
}

void change_buttons_state_flag(game_button_t *buttons)
{
    for (int tmp = flag1; tmp <= flag5; tmp++)
        buttons[tmp].state = idle;
}

void change_buttons_state(game_button_t *buttons)
{
    for (int tmp = flag1; tmp <= option; tmp++)
        buttons[tmp].state = idle;
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