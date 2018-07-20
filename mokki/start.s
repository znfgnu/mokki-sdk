.globl _start
.globl led_set
.globl btn_get

_start:
	b main
  .short 2 

.align 2
led_set:
  ldr r7, [pc]
  bx r7
  .word 0x1
btn_get:
  ldr r7, [pc]
  bx r7
  .word 0x2
