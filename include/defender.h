/*
** EPITECH PROJECT, 2019
** defender.h
** File description:
** defender.h
*/

#ifndef DEFENDER
#define DEFENDER

#define bool _Bool
#define true 1
#define false 0

#include "printf.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

//enums
enum scene {menu, wave0, wave1, wave2, wave3, wave4, options, victory, defeat};

enum main_menu {bg1, bg2, bg3, bg4, title1, title2, start};

enum buttons {flag1, flag2, flag3, flag4, flag5, t1, t2, t3, sell, speed, damage, trap, option};

enum waves {map, heart, blanck_b, money, blanck_p, cursor, arrow1, arrow2,
arrow3, arrow4, arrow5, trap1, trap2, trap3, trap4, trap5, enemy1, enemy2,
enemy3, enemy4, enemy5, enemy6, enemy7, enemy8, enemy9, enemy10, enemy11,
enemy12, enemy13, enemy14, enemy15, enemy16, enemy17, enemy18, enemy19, enemy20};

enum sounds {bg_s, start_s, add_s, sell_s, arrow_s, limit_s, exit_s};

enum txt {money_txt, wave_txt, life_txt};

enum option {option_o, close_b = 0, plus, minus, sound, mute};
enum vict_def {victory_o, defeat_o = 0, victory_s = 0, defeat_s = 0, back = 0, exit_b};

enum state {overscreen, onscreen, stopped, idle = 0, hover, pressed, atstart = 0, moving, atend};

//structures
typedef struct game_stat {
    int current;
    int lifes;
    int gold;
    bool _finish;
    sfVector2f cursorpos;
} game_stat_t;

typedef struct game_object {
    int state;
    float speed;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect; 
} game_object_t;

typedef struct game_button {
    sfRectangleShape *shape;
    sfTexture *texture;
    sfVector2f position;
    sfIntRect rect;
    int state;
} game_button_t;

typedef struct game_sound {
    sfMusic *music;
    sfBool _loop;
    bool _activated;
} game_sound_t;

typedef struct game_text {
    sfText *text;
    sfFont *font;
} game_text_t;

typedef struct game_scene {
    game_object_t *objs;
    game_sound_t *sounds;
    game_button_t *buttons;
    game_text_t *texts;
    int *how_many;
} game_scene_t;

//main.c
int main(int ac, char **av);

//my_defender.c
int my_defender(void);

//make_scene.c
game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons, int nb_text);
game_object_t new_object(const char *path_to_spsheet, sfVector2f pos, sfIntRect rect, float speed);
game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume);
game_button_t new_button(const char *path_to_img, sfVector2f pos, sfIntRect rect);
game_text_t new_text(const char *path_to_font, const char *towrite, sfVector2f pos, int size);

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

//gameloop//

//game_change.c
void game_change(game_stat_t *stat, game_scene_t scene, sfRenderWindow *window);

//objs_interaction.c
void objs_animation(game_object_t *objs);
void objs_movement(game_object_t *objs, game_stat_t *stats);

//scene_selection.c
void scene_selection(game_stat_t *stat);

//draw_scene.c
void draw_scene(game_scene_t scene, sfRenderWindow *window);

//buttons_interaction.c
void buttons_animation(game_button_t *buttons);
void buttons_activation(game_button_t *buttons);

//destroy_scene.c
void destroy_all(game_scene_t *scene);

#endif /* DEFENDER */