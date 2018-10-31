#ifndef LIB_H
#define LIB_H

typedef unsigned int uint32_t;
typedef unsigned char uint8_t;

void led_set(uint32_t, uint32_t);
uint32_t btn_get(uint32_t);
void led_set_rgb(uint8_t, uint8_t, uint8_t);
void time_delay(int);

// GFX

#define COLOR_BLACK		0b00
#define COLOR_DARKGRAY	0b01
#define COLOR_LIGHTGRAY	0b10
#define COLOR_WHITE		0b11

void gfx_clear(void);
void gfx_update(void);
void gfx_set_clear_color(int color);
void gfx_set_pixel(int x, int y, int color);
//void gfx_blit(sprite_t* sprite, int x, int y);

void font_print_string(int x, int y, const char* str, int color);

#endif
