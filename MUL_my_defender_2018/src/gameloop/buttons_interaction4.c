/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void t3_menu_bis(game_button_t *buttons, int tmp)
{
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
}

void t3_menu(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;

    t3_menu_bis(buttons, tmp);
    sfRectangleShape_setPosition(buttons[sell].shape, buttons[sell].position);
    sfRectangleShape_setPosition(buttons[speed].shape,
    buttons[speed].position);
    sfRectangleShape_setPosition(buttons[damage].shape,
    buttons[damage].position);
    for (tmp2 = sell; tmp2 <= damage; tmp2++) {
        if (stats->cursorpos.x >= buttons[tmp2].position.x + 15 &&
        stats->cursorpos.x <= buttons[tmp2].position.x + 85 &&
        stats->cursorpos.y >= buttons[tmp2].position.y + 15 &&
        stats->cursorpos.y <= buttons[tmp2].position.y + 85) {
            buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
            break;
        } else
            buttons[tmp2].state = idle;
    }
}

void t2_menu_bis(game_button_t *buttons, int tmp)
{
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
}

void t2_menu(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;

    t2_menu_bis(buttons, tmp);
    sfRectangleShape_setPosition(buttons[sell].shape, buttons[sell].position);
    sfRectangleShape_setPosition(buttons[speed].shape,
    buttons[speed].position);
    sfRectangleShape_setPosition(buttons[damage].shape,
    buttons[damage].position);
    for (tmp2 = sell; tmp2 <= damage; tmp2++) {
        if (stats->cursorpos.x >= buttons[tmp2].position.x + 15 &&
        stats->cursorpos.x <= buttons[tmp2].position.x + 85 &&
        stats->cursorpos.y >= buttons[tmp2].position.y + 15 &&
        stats->cursorpos.y <= buttons[tmp2].position.y + 85) {
            buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
            break;
        } else
            buttons[tmp2].state = idle;
    }
}