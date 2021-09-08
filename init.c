/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical Programming Module
*/
#include "my_hunter.h"

void inittexture (t_t *texture)
{
    texture->textureempty = sfTexture_createFromFile("empty.png", NULL);
    texture->texturefull = sfTexture_createFromFile("full.png", NULL);
    texture->texturecup = sfTexture_createFromFile("empty.png", NULL);
    texture->texturesky = sfTexture_createFromFile("sky.png", NULL);
    texture->texturehome = sfTexture_createFromFile("home.png", NULL);
    texture->textureover = sfTexture_createFromFile("over.png", NULL);
    font = sfFont_createFromFile("arial.ttf");
}

void initsprite (s_s *sprite)
{
    sprite->spriteempty = sfSprite_create();
    sprite->spritefull = sfSprite_create();
    sprite->spritesky = sfSprite_create();
    sprite->spritehome = sfSprite_create();
    sprite->spriteover = sfSprite_create();
    text = sfText_create();
}

void initvector2 (v_v *vector)
{
    vector->bird.x = 0;
    vector->bird.y = 400;
    vector->sky.x = 0;
    vector->sky.y = 0;
    vector->over.x = 0;
    vector->over.y = 0;
    pos.y = 20;
    pos.x = 1600;
}

void init (t_t *texture, s_s *sprite, v_v *vector)
{
    inittexture(texture);
    initsprite(sprite);
    initvector2(vector);
}
