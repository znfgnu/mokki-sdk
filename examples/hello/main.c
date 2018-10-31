#include <mokki.h>

int main(int event, void* data) {
	gfx_set_clear_color(COLOR_BLACK);
	for (int i=0; i<128; ++i) {
		gfx_clear();
		font_print_string(30, 28, "Hello, world!", COLOR_WHITE);
		for (int j=0; j<4; ++j) {
			gfx_set_pixel(i, j, j);
		}
		gfx_update();
	}
	return 0;
}
