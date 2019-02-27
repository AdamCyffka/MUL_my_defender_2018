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

} game_button_t;

typedef struct game_sound {
    sfMusic *music;
} game_sound_t;

typedef struct game_text {
    sfText *text;
} game_text_t;

//main.c
int main(int ac, char **av);

//my_defender.c
int my_defender(void);

#endif /* DEFENDER */