/*
** EPITECH PROJECT, 2019
** my_runner.h
** File description:
** my_runner.h
*/
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct Texture
{
    sfTexture *textureempty;
    sfTexture *texturefull;
    sfTexture *texturecup;
    sfTexture *texturesky;
    sfTexture *texturehome;
    sfTexture *textureover;
};

typedef struct Texture t_t;

struct Sprite
{
    sfSprite *spriteempty;
    sfSprite *spritefull;
    sfSprite *spritecup;
    sfSprite *spritemoon;
    sfSprite *spritesky;
    sfSprite *spritehome;
    sfSprite *spriteover;
};

typedef struct Sprite s_s;

struct Vector
{
    sfVector2f bird;
    sfVector2f sky;
    sfVector2f home;
    sfVector2f over;
};

typedef struct Vector v_v;

struct Window
{
    sfRenderWindow *window;
};

typedef struct Window w_w;

sfFont *font;
sfText *text;
sfVector2f pos;

void vectorspeed (v_v *vector);

void vectorrep(v_v *vector, t_t *texture);

void vectorrep2(v_v *vector);

void setPosition(s_s *sprite, v_v *vector);

void setTexture(s_s *sprite, t_t *texture);

int rechero(int i);

void inittexture (t_t *texture);

void initsprite (s_s *sprite);

void initvector (v_v *vector);

void initvector2 (v_v *vector);

void init (t_t *texture, s_s *sprite, v_v *vector);

void setDraw(sfRenderWindow *window, s_s *sprite);

void set(sfRenderWindow *window, s_s *sprite, v_v* vector, t_t *texture);

void all_vector(v_v *vector, t_t *texture);

int rechero(int i);

int rand_a_b(int a, int b);
