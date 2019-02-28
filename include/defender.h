/*
** EPITECH PROJECT, 2019
** defender.h
** File description:
** defender.h
*/

#ifndef DEFENDER
#define DEFENDER

#include "printf.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//enums
enum scene {menu, wave0, wave1, wave2, wave3, wave4, option, victory, defeat};

enum obj {bg1, bg2, bg3};

enum state {running, stopped, first, second, third, fourth, fifth};

//structures
typedef struct game_scene {
    game_object_t *objs;
    game_sound_t *sounds;
    game_button_t *buttons;
    game_text_t *texts;
} game_scene_t;

typedef struct game_object {
    int state;
    float speed;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f jumping_position;
    sfIntRect rect; 
} game_object_t;

typedef struct game_button {
    sfRectangleShape *shape;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
} game_button_t;

typedef struct game_sound {
    sfMusic *music;
} game_sound_t;

typedef struct game_text {
    sfText *text;
    sfFont *font;
} game_text_t;

//main.c
int main(int ac, char **av);

//my_defender.c
int my_defender(void);

//make_scene.c
game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons, int nb_text);
game_object_t new_object(const char *path_to_spsheet, sfVector2f pos, sfIntRect rect, float speed);
game_sound_t new_sound();
game_button_t new_button();
game_text_t new_text();

//fill_scene//

//fill_scene0to1.c
void fill_scene_menu(game_scene_t menu);
void fill_scene_wave0a(game_scene_t wave0);

//fill_scene2.c
void fill_scene_wave1a(game_scene_t wave1);

//fill_scene3.c
void fill_scene_wave2a(game_scene_t wave2);

//fill_scene4.c
void fill_scene_wave3a(game_scene_t wave3);

//fill_scene4bis.c
void fill_scene_wave3f(game_scene_t wave3);

//fill_scene5.c
void fill_scene_wave4a(game_scene_t wave4);

//fill_scene5bis.c
void fill_scene_wave4f(game_scene_t wave4);

//fill_scene6to8.c
void fill_scene_option(game_scene_t option);
void fill_scene_victory(game_scene_t victory);
void fill_scene_defeat(game_scene_t defeat);

//fill_scene//

#endif /* DEFENDER */