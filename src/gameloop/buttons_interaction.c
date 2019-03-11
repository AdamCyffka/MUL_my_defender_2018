/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void choose_tower(game_button_t *buttons, int tmp)
{
    buttons[tmp].state = idle;
    buttons[t1].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[t2].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[t3].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[t1].shape, buttons[t1].position);
    sfRectangleShape_setPosition(buttons[t2].shape, buttons[t2].position);
    sfRectangleShape_setPosition(buttons[t3].shape, buttons[t3].position);
}

void flags_activation(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->_pressed == true) {
        for (int tmp = flag1; tmp <= flag5; tmp++) {
            if (stats->cursorpos.x >= buttons[tmp].position.x &&
            stats->cursorpos.x <= buttons[tmp].position.x + 100 &&
            stats->cursorpos.y >= buttons[tmp].position.y &&
            stats->cursorpos.y <= buttons[tmp].position.y + 100)
                buttons[tmp].state = pressed;
        }
    }
    for (int tmp = flag1; tmp <= flag5; tmp++) {
        if (buttons[tmp].state == pressed && buttons[tmp].content == nocontent)    
            choose_tower(buttons, tmp);
    }
}

void buttons_activation(game_button_t *buttons, game_stat_t *stats)
{
    flags_activation(buttons, stats);
}

void buttons_animation(game_button_t *buttons)
{

}