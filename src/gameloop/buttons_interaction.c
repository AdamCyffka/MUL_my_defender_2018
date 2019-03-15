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
    sfRectangleShape_setPosition(buttons[start_b].shape, buttons[start_b].position);
    for (tmp2 = start_b; tmp2 <= damage; tmp2++) {
        if (stats->cursorpos.x >= buttons[tmp2].position.x + 15 &&
        stats->cursorpos.y <= buttons[tmp2].position.y + 85)
            buttons[tmp2].state = (stats->_pressed == true) ? pressed : hover;
    }
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
            sfRectangleShape_setPosition(buttons[tmp2].shape, buttons[tmp2].position);
        }
}

void t3_menu(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[sell].shape, buttons[sell].position);
    sfRectangleShape_setPosition(buttons[speed].shape, buttons[speed].position);
    sfRectangleShape_setPosition(buttons[damage].shape, buttons[damage].position);
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

void t2_menu(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[sell].shape, buttons[sell].position);
    sfRectangleShape_setPosition(buttons[speed].shape, buttons[speed].position);
    sfRectangleShape_setPosition(buttons[damage].shape, buttons[damage].position);
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

void t1_menu(game_button_t *buttons, game_stat_t *stats, int tmp)
{
    int tmp2 = 0;
    buttons[sell].position = (sfVector2f) {buttons[tmp].position.x - 75,
    buttons[tmp].position.y - 75};
    buttons[speed].position = (sfVector2f) {buttons[tmp].position.x,
    buttons[tmp].position.y - 75};
    buttons[damage].position = (sfVector2f) {buttons[tmp].position.x + 75,
    buttons[tmp].position.y - 75};
    sfRectangleShape_setPosition(buttons[sell].shape, buttons[sell].position);
    sfRectangleShape_setPosition(buttons[speed].shape, buttons[speed].position);
    sfRectangleShape_setPosition(buttons[damage].shape, buttons[damage].position);
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

void flags_activation(game_button_t *buttons, game_stat_t *stats)
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
    for (int tmp = flag1; tmp <= flag5; tmp++) {
        if (buttons[tmp].state == pressed && buttons[tmp].content == nocontent) {   
            choose_tower(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed && buttons[tmp].content == tower1) {
            t1_menu(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed && buttons[tmp].content == tower2) {  
            t2_menu(buttons, stats, tmp);
            check_pressed(buttons);
        } if (buttons[tmp].state == pressed && buttons[tmp].content == tower3)  {   
            t3_menu(buttons, stats, tmp);
            check_pressed(buttons);
        }
    }

}

void buttons_activation(game_button_t *buttons, game_stat_t *stats)
{
    if (stats->current >= wave1 && stats->current <= wave4)
        flags_activation(buttons, stats);
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