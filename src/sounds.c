/*
** EPITECH PROJECT, 2019
** sounds.c
** File description:
** All games's sounds 
*/

#include "defender.h"

void sounds(game_sounds_t *game)
{
	game->music = malloc(sizeof(*game->music) * 8);
	game->music[0] = sfMusic_createFromFile("assets/startwave.ogg");
	game->music[1] = sfMusic_createFromFile("assets/exitgame.ogg");
	game->music[2] = sfMusic_createFromFile("assets/bgmusic.ogg");
	game->music[3] = sfMusic_createFromFile("assets/arrow.ogg");
	game->music[4] = sfMusic_createFromFile("assets/addtower.ogg");
	game->music[5] = sfMusic_createFromFile("assets/selltower.ogg");
	game->music[6] = sfMusic_createFromFile("assets/enemyreachlimit.ogg");
	game->music[7] = sfMusic_createFromFile("assets/defeat.ogg");
	game->music[8] = sfMusic_createFromFile("assets/victory.ogg");

	for (int i = 0; i < 8; i++) {
		if (!game->music[i]) {
			my_printf("Error: Cannot load a sound file\n");
			return (84);
		}
	}
	sfMusic_setLoop(game->music[2], sfTrue);
}

game_sounds_t new_sound(char *path, int loop, int vol)
