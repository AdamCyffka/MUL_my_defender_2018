/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** my_runner
*/

#include "../include/my.h"

int my_runner(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window;
    sfTexture *trump;
    sfTexture *texture;
    sfSprite *sprite;
    sfSprite *sprite_trump;
    sfIntRect rect_trump;
    sfMusic *background_music;
    sfClock *clock;
    sfTime time;
    sfEvent event;
    sfVector2f position_trump;
    float vitesse_trump = 1;

    window = sfRenderWindow_create(mode, "My Runner", sfResize | sfClose, NULL);
    texture = sfTexture_createFromFile("ressources/background.png", NULL);
    trump = sfTexture_createFromFile("ressources/trump_run.png", NULL);
    background_music = sfMusic_createFromFile("ressources/background_music.ogg");
    sprite = sfSprite_create();
    sprite_trump = sfSprite_create();
    clock = sfClock_create();
    position_trump.x = 100;
    position_trump.y = 500;
    rect_trump.top = 100;
    rect_trump.left = 0;
    rect_trump.width = 110;
    rect_trump.height = 100;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTexture(sprite_trump, trump, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    play_background(background_music);
    while (sfRenderWindow_isOpen(window)) {
        time = sfClock_getElapsedTime(clock);
        sfSprite_setTextureRect(sprite_trump, rect_trump);
        sfClock_restart(clock);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            if (position_trump.y > 300) {
                position_trump.y -= 15;
            }
        } if (sfKeyboard_isKeyPressed(sfKeySpace) == sfFalse) {
            if (position_trump.y <= 425) {
                position_trump.y += 15;
            }
        } while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
                sfMusic_stop(background_music);
                sfRenderWindow_close(window);
            }
        }
        sfSprite_setPosition(sprite_trump, position_trump);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawSprite(window, sprite_trump, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    sfMusic_destroy(background_music);
    sfRenderWindow_destroy(window);
    return (0);
}