/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void t1_menu_bis(game_button_t *buttons, int tmp)
{
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
}

void choose_tower(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;

    choose_tower_bis(buttons, tmp);
    sfRectangleShape_setPosition(buttons[t1].shape, buttons[t1].position);
    sfRectangleShape_setPosition(buttons[t2].shape, buttons[t2].position);
    sfRectangleShape_setPosition(buttons[t3].shape, buttons[t3].position);
    for (tmp2 = t1; tmp2 <= t3; tmp2++) {
        if (stats->cursorpos.x >= buttons[tmp2].position.x + 15 &&
        stats->cursorpos.x <= buttons[tmp2].position.x + 85 &&
        stats->cursorpos.y >= buttons[tmp2].position.y + 15 &&
        stats->cursorpos.y <= buttons[tmp2].position.y + 85) {
            buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
            break;
        }
    }
    if (buttons[tmp2].state == pressed) {
        change_buttons_state(buttons);
        buttons[tmp].content = tmp2 - 4;
        buttons[tmp].action = tmp2 - 4;
    }
}

void choose_tower_bis(game_button_t *buttons, int tmp)
{
    buttons[t1].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[t2].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[t3].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
}
