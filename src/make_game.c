/*
** EPITECH PROJECT, 2019
** defender
** File description:
** make scenes
*/

#include "defender.h"

game_text_t new_text(const char *path_to_font, const char *towrite,
            sfVector2f pos, int size)
{
    game_text_t text;

    text.text = sfText_create();
    text.font = sfFont_createFromFile(path_to_font);
    sfText_setPosition(text.text, pos);
    sfText_setString(text.text, towrite);
    sfText_setFont(text.text, text.font);
    sfText_setCharacterSize(text.text, size);
    return (text);
}

game_button_t new_button(const char *path_to_img,
            sfVector2f pos, sfIntRect rect)
{
    game_button_t button;

    button.shape = sfRectangleShape_create();
    button.texture = sfTexture_createFromFile(path_to_img, NULL);
    button.position = pos;
    button.rect = rect;
    button.state = 0;
    button.content = 0;
    button.action = 0;
    sfRectangleShape_setTexture(button.shape, button.texture, sfTrue);
    sfRectangleShape_setTextureRect(button.shape, button.rect);
    sfRectangleShape_setPosition(button.shape, pos);
    sfRectangleShape_setSize(button.shape, (sfVector2f) {100, 100});
    return (button);
}

game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume)
{
    game_sound_t sound;
    sound.music = sfMusic_createFromFile(path_to_sound);
    sound._loop = state;
    sound._activated = false;
    sfMusic_setLoop(sound.music, state);
    sfMusic_setVolume(sound.music, volume);
    return (sound);
}

game_object_t new_object(const char *path_to_spsheet,
            sfVector2f pos, sfIntRect rect, float speed)
{
    game_object_t obj;

    obj.state = 0;
    obj.hp = 1;
    obj.speed = speed;
    obj.sprite = sfSprite_create();
    obj.texture = sfTexture_createFromFile(path_to_spsheet, NULL);
    obj.position = pos;
    obj.rect = rect;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, pos);
    return (obj);
}

game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons, int nb_texts)
{
    game_scene_t new_scene;

    new_scene.objs = malloc(sizeof(game_object_t) * nb_objs);
    new_scene.sounds = malloc(sizeof(game_sound_t) * nb_musics);
    new_scene.buttons = malloc(sizeof(game_button_t) * nb_buttons);
    new_scene.texts = malloc(sizeof(game_text_t) * nb_texts);
    new_scene.how_many = malloc(sizeof(int) * 4);
    new_scene.how_many[0] = nb_objs;
    new_scene.how_many[1] = nb_musics;
    new_scene.how_many[2] = nb_buttons;
    new_scene.how_many[3] = nb_texts; 

    return (new_scene);
}