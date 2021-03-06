/*
** EPITECH PROJECT, 2019
** defender
** File description:
** main functions
*/

#include "defender.h"

void analyse_events(sfRenderWindow *window, sfEvent event, game_stat_t *stats)
{
    if (event.type == sfEvtMouseButtonPressed)
        stats->_pressed = true;
    if (event.type == sfEvtMouseButtonReleased)
        stats->_pressed = false;
    if (event.type == sfEvtMouseMoved) {
        stats->cursorpos.x = sfMouse_getPositionRenderWindow(window).x - 20;
        stats->cursorpos.y = sfMouse_getPositionRenderWindow(window).y;
    }
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    analyse_keyboard(window, stats);
}

void analyse_keyboard(sfRenderWindow *window, game_stat_t *stats)
{
    sfKeyCode q = sfKeyQ;
    sfKeyCode enter = sfKeyReturn;
    sfKeyCode escape = sfKeyEscape;
    sfTime time = sfClock_getElapsedTime(stats->clock_pause);
    float seconds = time.microseconds / 1000000.0;

    if (sfKeyboard_isKeyPressed(q) == sfTrue)
        sfRenderWindow_close(window);
    if (sfKeyboard_isKeyPressed(escape) == sfTrue && seconds > 0.5) {
        stats->previous = (stats->current == options) ?
        stats->previous : stats->current;
        stats->current = (stats->current == options) ?
        stats->previous : options;
        sfClock_restart(stats->clock_pause);
    }
    if (sfKeyboard_isKeyPressed(enter) == sfTrue && (stats->current == menu
    || stats->current == wave0))
        stats->_finish = true;
}

int create_scene(game_scene_t *scene)
{
    scene[menu] = new_scene(7, 0, 2, 0);
    fill_scene_menu(scene[menu]);
    scene[wave0] = new_scene(6, 1, 5, 3);
    fill_scene_wave0a(scene[wave0]);
    scene[wave1] = new_scene(21, 7, 13, 3);
    fill_scene_wave1a(scene[wave1]);
    scene[wave2] = new_scene(26, 7, 13, 3);
    fill_scene_wave2a(scene[wave2]);
    scene[wave3] = new_scene(31, 7, 13, 3);
    fill_scene_wave3a(scene[wave3]);
    scene[wave4] = new_scene(36, 7, 13, 3);
    fill_scene_wave4a(scene[wave4]);
    scene[options] = new_scene(2, 0, 7, 0);
    fill_scene_option(scene[options]);
    scene[victory] = new_scene(2, 1, 2, 0);
    fill_scene_victory(scene[victory]);
    scene[defeat] = new_scene(2, 1, 2, 0);
    fill_scene_defeat(scene[defeat]);
    return (0);
}

int my_defender(window_t *params)
{
    sfEvent event;
    game_stat_t stat = {menu, 0, enemy1, 5, 200, false, false,
    (sfVector2f) {0, 0},
    sfClock_create(), sfClock_create(), sfClock_create(), sfClock_create(),
    sfClock_create(), sfClock_create(), sfClock_create()};
    game_scene_t *scene = malloc(sizeof(game_scene_t) * 9);

    create_scene(scene);
    init_window(params, scene);
    while (sfRenderWindow_isOpen(params->window)) {
        sfRenderWindow_clear(params->window, sfBlack);
        scene_selection(&stat, scene);
        game_change(&stat, scene, params->window);
        draw_scene(scene[stat.current], params->window, stat.current);
        while (sfRenderWindow_pollEvent(params->window, &event))
            analyse_events(params->window, event, &stat);
        sfRenderWindow_display(params->window);
    }
    destroy_all(scene);
    return (0);
}