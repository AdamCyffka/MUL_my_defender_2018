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

int my_defender(void)
{
    game_object_t *obj = malloc(sizeof(game_object_t) * 18);
    return (0);
}