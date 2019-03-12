/*
** EPITECH PROJECT, 2019
** defender
** File description:
** buttons interactions
*/

#include "defender.h"

void choose_tower(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;
    buttons[t1].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[t2].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[t3].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[t1].shape, buttons[t1].position);
    sfRectangleShape_setPosition(buttons[t2].shape, buttons[t2].position);
    sfRectangleShape_setPosition(buttons[t3].shape, buttons[t3].position);
    for (tmp2 = t1; tmp2 <= t3; tmp2++) {
        if (stats->cursorpos.x >= buttons[tmp2].position.x &&
        stats->cursorpos.x <= buttons[tmp2].position.x + 100 &&
        stats->cursorpos.y >= buttons[tmp2].position.y &&
        stats->cursorpos.y <= buttons[tmp2].position.y + 100) {
            buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
            break;
        }
    }
    if (buttons[tmp2].state == pressed) {
        buttons[tmp].state = idle;
        buttons[tmp].content = tmp2 - 4;
    }
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
            choose_tower(buttons, stats, tmp);
        /*if (buttons[tmp].state == pressed && buttons[tmp].content == t1)    
            t1_menu(buttons, stats, tmp);
        if (buttons[tmp].state == pressed && buttons[tmp].content == t1)    
            t2_menu(buttons, stats, tmp);
        if (buttons[tmp].state == pressed && buttons[tmp].content == t1)    
            t3_menu(buttons, stats, tmp);*/
    }
}

void buttons_activation(game_button_t *buttons, game_stat_t *stats)
{
    flags_activation(buttons, stats);
}

void buttons_animation(game_button_t *buttons)
{
    for (int tmp = flag1; tmp <= flag5; tmp++) {
        if (buttons[tmp].content == tower1)
            sfRectangleShape_setTexture(buttons[tmp].shape, (sfTexture *)
            {sfTexture_createFromFile("assets/ta.png", NULL)}, sfFalse);
    }
    for (int tmp = sell; tmp <= trap; tmp++)
        if (buttons[tmp].state == hover) {
            buttons[tmp].rect.left = 100;
            sfRectangleShape_setTextureRect(buttons[tmp].shape, buttons[tmp].rect);
        }
}