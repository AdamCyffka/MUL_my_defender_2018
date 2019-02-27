/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner
*/

#include "defender.h"

game_object_t new_object(const char *path_to_spsheet,
            sfVector2f pos, sfIntRect rect, float speed)
{
    game_object_t obj;

    obj.state = running;
    obj.speed = speed;
    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(path_to_spsheet, NULL);
    obj.position = pos;
    obj.jumping_position = pos;
    obj.rect = rect;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    return (obj);
}

game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons, int nb_text)
{
    game_scene_t new_scene;

    new_scene.objs = malloc(sizeof(game_object_t) * nb_objs);
    new_scene.sounds = malloc(sizeof(game_sound_t) * nb_musics);
    new_scene.buttons = malloc(sizeof(game_button_t) * nb_buttons);
    new_scene.texts = malloc(sizeof(game_text_t) * nb_text);

    return (new_scene);
}

int create_scene(game_scene_t *scene)
{
    scene[menu] = new_scene(7, 0, 0, 0);
    fill_scene_menu(scene[menu]);
    scene[wave0] = new_scene(6, 1, 6, 4);
    fill_scene_wave0(scene[wave0]);
    scene[wave1] = new_scene(11, 7, 12, 3);
    fill_scene_wave1(scene[wave1]);
    scene[wave2] = new_scene(16, 7, 12, 3);
    fill_scene_wave2(scene[wave2]);
    scene[wave3] = new_scene(21, 7, 12, 3);
    fill_scene_wave3(scene[wave3]);
    scene[wave4] = new_scene(26, 7, 12, 3);
    fill_scene_wave4(scene[wave4]);
    scene[option] = new_scene(1, 0, 5, 0);
    fill_scene_option(scene[option]);
    scene[victory] = new_scene(1, 1, 3, 0);
    fill_scene_victory(scene[victory]);
    scene[defeat] = new_scene(1, 1, 3, 0);
    fill_scene_defeat(scene[defeat]);
    return (0);
}

int my_defender(void)
{
    int ret = 0;
    game_scene_t *scene = malloc(sizeof(game_scene_t) * 8);

    ret = create_scene(scene);
    return (ret);
}