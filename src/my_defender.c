/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner
*/

#include "defender.h"

void analyse_events(sfRenderWindow *window, sfEvent event)
{

}

int create_scene(game_scene_t *scene)
{
    scene[menu] = new_scene(7, 0, 0, 0);
    fill_scene_menu(scene[menu]);
    scene[wave0] = new_scene(6, 1, 6, 4);
    fill_scene_wave0a(scene[wave0]);
    scene[wave1] = new_scene(11, 7, 12, 3);
    fill_scene_wave1a(scene[wave1]);
    scene[wave2] = new_scene(16, 7, 12, 3);
    fill_scene_wave2a(scene[wave2]);
    scene[wave3] = new_scene(21, 7, 12, 3);
    fill_scene_wave3a(scene[wave3]);
    scene[wave4] = new_scene(26, 7, 12, 3);
    fill_scene_wave4a(scene[wave4]);
    scene[option] = new_scene(1, 0, 5, 0);
    fill_scene_option(scene[option]);
    scene[victory] = new_scene(1, 1, 2, 0);
    fill_scene_victory(scene[victory]);
    scene[defeat] = new_scene(1, 1, 2, 0);
    fill_scene_defeat(scene[defeat]);
    return (0);
}

int my_defender(void)
{
    sfVideoMode window_settings = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(window_settings, "RunnerZ",
    sfClose | sfResize, NULL);
    sfEvent event;
    game_stat_t stat = {0, 10, 200, false};
    game_scene_t *scene = malloc(sizeof(game_scene_t) * 8);

    create_scene(scene);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_events(window, event);
        scene_selection(&stat);
        game_change(&stat, scene[stat.current], window);
        draw_scene(scene[stat.current], window);
        //play_musics(scene[stat.current], window);
        sfRenderWindow_display(window);
    }
    //destroy_all(scene);
    //free_all(scene);
    return (0);
}