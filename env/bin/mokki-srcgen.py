#!/usr/bin/env python3

import sys
import struct

offset_size = 0
nop = '0x46c0'
indent = '\t' * 2
halfword_counter = 0

print("#include \"stm32f10x.h\"")
print("#include \"examples/program.h\"")
print()
print("uint16_t program_data[PROGRAM_MAX_SIZE] = {")

with open(sys.argv[1], "rb") as f:
    if offset_size:
        print(indent + "// Offset")
        for i in range(offset_size):
            print(indent + nop + ",")
    print(indent + "// Program code")
    b = f.read(2)
    while b != b"":
        value, = struct.unpack("<H", b)
        print(indent + hex(value) + ',')
        halfword_counter += 1
        b = f.read(2)

print("};")
total = offset_size + halfword_counter

#print("#define PROG_SIZE {}".format(total))

print("// Total halfwords (code/offset/total): {}/{}/{}".format(halfword_counter, offset_size, total))
print("// Bytes used (code/offset/total): {}/{}/{}".format(
    halfword_counter*2,
    offset_size*2,
    total*2
))

