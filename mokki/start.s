.globl led_set
.globl btn_get
.globl led_set_rgb
.globl time_delay
.globl gfx_clear
.globl gfx_update
.globl gfx_set_clear_color
.globl gfx_set_pixel
.globl font_print_string

.macro callfun
  push {r7, lr}
  ldr r7, [pc, #4]
  blx r7
  pop {r7, pc}
.endm

_start:
  b main
  .short 9

.align 4


led_set:
  callfun
  .word 0x1

btn_get:
  callfun
  .word 0x2

led_set_rgb:
  callfun
  .word 0x3

time_delay:
  callfun
  .word 0x4

gfx_clear:
  callfun
  .word 0x5

gfx_update:
  callfun
  .word 0x6

gfx_set_clear_color:
  callfun
  .word 0x7

gfx_set_pixel:
  callfun
  .word 0x8

font_print_string:
  callfun
  .word 0x9

