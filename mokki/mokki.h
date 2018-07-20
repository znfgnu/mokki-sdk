#ifndef LIB_H
#define LIB_H

typedef unsigned int uint32_t;

extern void led_set(uint32_t led_id, uint32_t state);
extern uint32_t btn_get(uint32_t btn_id);

#endif
