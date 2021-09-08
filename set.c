/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical programming module
*/
#include "my_hunter.h"

void setPosition(s_s *sprite, v_v *vector)
{
    sfSprite_setPosition(sprite->spriteempty, vector->bird);
    sfSprite_setPosition(sprite->spritesky, vector->sky);
    sfSprite_setPosition(sprite->spriteover, vector->over);
}

void setTexture(s_s *sprite, t_t *texture)
{
    sfSprite_setTexture(sprite->spritesky, texture->texturesky, sfTrue);
    sfSprite_setTexture(sprite->spriteempty, texture->textureempty, sfTrue);
    sfSprite_setTexture(sprite->spriteover, texture->textureover, sfTrue);
}

void setDraw(sfRenderWindow *window, s_s *sprite)
{
    sfRenderWindow_drawSprite(window, sprite->spritesky, NULL);
    sfRenderWindow_drawSprite(window, sprite->spriteempty, NULL);
    sfRenderWindow_drawText(window, text, NULL);
}

void set(sfRenderWindow *window, s_s *sprite, v_v* vector, t_t *texture)
{
    setPosition(sprite, vector);
    setTexture(sprite, texture);
    setDraw(window, sprite);
}