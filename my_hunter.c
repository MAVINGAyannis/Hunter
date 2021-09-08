/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner
*/
#include "my_hunter.h"

void rect_Texture(sfRenderWindow *window, s_s *sprite, sfIntRect rect1)
{
    sfSprite_setTextureRect(sprite->spriteempty, rect1);
    sfRenderWindow_drawSprite(window, sprite->spriteempty, NULL);
}

void mouse_manage(sfEvent event, v_v *vector, t_t *texture)
{
    if (event.type == sfEvtMouseButtonPressed)
        if (event.mouseButton.x >= vector->bird.x &&
        event.mouseButton.x <= vector->bird.x + 110 &&
            event.mouseButton.y >= vector->bird.y &&
            event.mouseButton.y <= vector->bird.y + 110) {
            texture->textureempty = texture->texturefull;
        }
}

char *my_itoa (int nb)
{
    int len;
    char *str;
    int tmp;
    tmp = nb;
    len = 0;

    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    str = malloc(sizeof(*str) * (len + 1));
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}

void score_2(char *score)
{
    sfText_setString(text, score);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 150);
    sfText_setColor(text, sfColor_fromRGB(0, 0, 0));
    sfText_setPosition(text, pos);
}

int main(void)
{
    sfRenderWindow *window;
    sfEvent event;
    t_t *texture = malloc(sizeof(t_t));
    s_s *sprite = malloc(sizeof(s_s));
    v_v *vector = malloc(sizeof(v_v));
    sfVideoMode mode = {1920, 1080, 32};
    char *score = "0";
    int score_int = 0;

    window = sfRenderWindow_create(mode, "My_Traphouse", sfDefaultStyle, NULL);
    init(texture, sprite, vector);
    sfSprite_setTexture(sprite->spriteempty, texture->textureempty, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        set(window, sprite, vector, texture);
        mouse_manage(event, vector, texture);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        all_vector(vector, texture);
        score_2(score, score_int);
        score_int = my_getnbr(score) + 1;
        score = my_itoa(score_int);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    sfRenderWindow_destroy(window);
}