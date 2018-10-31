fnlist = [
  'led_set',
  'btn_get',
  'led_set_rgb',
  'time_delay',
  'gfx_clear',
  'gfx_update',
  'gfx_set_clear_color',
  'gfx_set_pixel',
  'font_print_string'
]

hdr_template = ".globl {}"

body_template = """
.macro callfun
  push {{r7, lr}}
  ldr r7, [pc, #4]
  blx r7
  pop {{r7, pc}}
.endm

_start:
  b main
  .short {}

.align 4
"""

fntable_template = """
{}:
  callfun
  .word {}
"""

if __name__ == "__main__":
  header = "\n".join([hdr_template.format(fn) for fn in fnlist])
  body = body_template.format(len(fnlist))
  fntable = "".join([fntable_template.format(fn, hex(i+1)) for i, fn in enumerate(fnlist)])
  print(header)
  print(body)
  print(fntable)
