/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical programming module
*/
#include "my_hunter.h"

void vectorspeed(v_v *vector)
{
    vector->bird.x += 10;
}

void vectorrep(v_v *vector, t_t *texture)
{
    if (vector->bird.x >= 1920) {
        texture->textureempty = sfTexture_createFromFile("empty.png", NULL);
        vector->bird.x = 0;
        vector->bird.y = rand_a_b(100, 800);
    }
}

int rand_a_b(int a, int b)
{
    return (rand()%(b-a) + a);
}

void all_vector(v_v *vector, t_t *texture)
{
    vectorspeed(vector);
    vectorrep(vector, texture);
}
