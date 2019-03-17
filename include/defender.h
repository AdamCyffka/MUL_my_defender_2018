/*
** EPITECH PROJECT, 2019
** defender.h
** File description:
** defender.h
*/

#ifndef DEFENDER_H_
#define DEFENDER_H_

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

enum main_menu {bg1, bg2, bg3, bg4, title1, title2, cursor_o, start_b = 0,
exit_menu};

enum buttons {flag1, flag2, flag3, flag4, flag5, t1, t2, t3, sell, speed,
damage, trap, option};

enum waves {map, heart, blanck_b, money, blanck_p, cursor, arrow1, arrow2,
arrow3, arrow4, arrow5, trap1, trap2, trap3, trap4, trap5, enemy1, enemy2,
enemy3, enemy4, enemy5, enemy6, enemy7, enemy8, enemy9, enemy10, enemy11,
enemy12, enemy13, enemy14, enemy15, enemy16, enemy17, enemy18, enemy19,
enemy20};

enum waves0 {map2};

enum sounds {bg_s, start_s, add_s, sell_s, arrow_s, limit_s, exit_s};

enum txt {money_txt, wave_txt, life_txt};

enum option {option_o, cursor_z, close_b = 0, plus, minus, sound, mute,
exit_g, go_menu};

enum vict_def {victory_o, defeat_o = 0, victory_s = 0, defeat_s = 0,
back = 0, exit_b};

enum state {overscreen, onscreen, stopped, idle = 0, hover, pressed, alive = 0,
dead, atend};

enum content {nocontent, tower1, tower2, tower3};

enum action {waiting, shooting, trapping, both, hit};

//structures
typedef struct game_stat {
    int current;
    int previous;
    int enemycount;
    int lifes;
    int gold;
    bool _finish;
    bool _pressed;
    sfVector2f cursorpos;
    sfClock *clock_enemy;
    sfClock *clock_arrow;
    sfClock *clock_sounds;
    sfClock *clock_trap;
    sfClock *clock_damage1;
    sfClock *clock_damage2;
    sfClock *clock_pause;
} game_stat_t;

typedef struct game_object {
    int state;
    int hp;
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
    int content;
    int action;
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

typedef struct window {
    sfRenderWindow* window;
} window_t;

//main.c
int main(int ac, char **av, char **env);

//my_defender.c
int my_defender(window_t *params);
void init_params(window_t *params);
void init_window(window_t *params, game_scene_t *scene);
void analyse_keyboard(sfRenderWindow *window, game_stat_t *stats);

//make_scene.c
game_scene_t new_scene(int nb_objs, int nb_musics, int nb_buttons,
int nb_text);
game_object_t new_object(const char *path_to_spsheet, sfVector2f pos,
sfIntRect rect, float speed);
game_sound_t new_sound(const char *path_to_sound, sfBool state, float volume);
game_button_t new_button(const char *path_to_img, sfVector2f pos,
sfIntRect rect);
game_text_t new_text(const char *path_to_font, const char *towrite,
sfVector2f pos, int size);

//fill_scene//

//fill_scene0to1.c
void fill_scene_menu(game_scene_t menu);
void fill_scene_wave0a(game_scene_t wave0);

//fill_scene2.c
void fill_scene_wave1a(game_scene_t wave1);

//fill_scene3.c
void fill_scene_wave2a(game_scene_t wave2);
void fill_scene_wave2b_b(game_scene_t wave2);

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
void game_change(game_stat_t *stat, game_scene_t *scene, sfRenderWindow *);

//objs_interaction.c
void enemy_animation(game_object_t *objs, game_stat_t *stats);
void objs_movement(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons, game_sound_t *sounds);
void move_enemies(game_object_t *objs, game_stat_t *stats);
void move_enemies_bis(game_object_t *objs, game_stat_t *stats);
void move_arrows(game_object_t *objs, game_stat_t *stats,
game_button_t *buttons, game_sound_t *sounds);
void move_trap(game_object_t *objs, game_button_t *buttons);
void activate_trap(game_object_t *objs, game_stat_t *stats);
void objs_movement_bis(game_object_t *objs, game_stat_t *stats);

//scene_selection.c
void scene_selection(game_stat_t *stat, game_scene_t *scene);

//draw_scene.c
void draw_scene(game_scene_t scene, sfRenderWindow *window, int current);

//buttons_interaction.c
void button_resume(game_button_t *buttons, game_stat_t *stats);
void button_exit_option(game_button_t *buttons, game_stat_t *stats,
sfRenderWindow *window);
void button_main_option(game_button_t *buttons, game_stat_t *stats);
void button_main_win(game_button_t *buttons, game_stat_t *stats);
void button_exit_win(game_button_t *buttons, game_stat_t *stats,
sfRenderWindow *window);
void button_start(game_button_t *buttons, game_stat_t *stats);
void button_exit_menu(game_button_t *buttons, game_stat_t *stats,
sfRenderWindow *window);
void check_pos_start(game_button_t *buttons, game_stat_t *stats, int tmp);
void change_buttons_state_flag(game_button_t *buttons);
void change_buttons_state(game_button_t *buttons);
void check_pressed(game_button_t *buttons);
void t3_menu(game_button_t *buttons, game_stat_t *stats, int tmp);
void t3_menu_bis(game_button_t *buttons, int tmp);
void t2_menu(game_button_t *buttons, game_stat_t *stats, int tmp);
void t2_menu_bis(game_button_t *buttons, int tmp);
void t1_menu(game_button_t *buttons, game_stat_t *stats, int tmp);
void flags_activation(game_button_t *buttons, game_stat_t *stats);
void flags_activation_bis(game_button_t *buttons, game_stat_t *stats);
void buttons_activation(game_button_t *buttons, game_stat_t *stats,
sfRenderWindow *window);
void buttons_animation(game_button_t *buttons);
void buttons_animation_bis(game_button_t *buttons);
void t1_menu_bis(game_button_t *buttons, int tmp);
void choose_tower(game_button_t *buttons, game_stat_t *stats, int tmp);
void choose_tower_bis(game_button_t *buttons, int tmp);

//destroy_scene.c
void destroy_all(game_scene_t *scene);

//sound_play.c
void play_arrow_sound(game_sound_t *sounds, game_stat_t *stats);
void play_loose_win_sounds(int current, game_scene_t *scene);

//enemy_get_damaged.c
void enemies_get_damaged(game_object_t *objs, game_stat_t *stats);
void enemies_get_damaged2(game_object_t *objs, game_stat_t *stats);
void enemies_get_damaged3(game_object_t *objs, game_stat_t *stats);

#endif /* DEFENDER_H_ */
