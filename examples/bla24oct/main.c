#include <mokki.h>

int draw_arrow(int x_pos, int y_pos) {
		gfx_set_pixel(0 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(1 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(2 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(0 + x_pos, 1 + y_pos, COLOR_WHITE);
		gfx_set_pixel(0 + x_pos, 2 + y_pos, COLOR_WHITE);
		gfx_set_pixel(1 + x_pos, 1 + y_pos, COLOR_WHITE);
		gfx_set_pixel(2 + x_pos, 2 + y_pos, COLOR_WHITE);
		gfx_set_pixel(3 + x_pos, 3 + y_pos, COLOR_WHITE);
}

int main(int event, void* data) {
  int x_position = 64;
	int y_position = 32;

	while(1) {
		if (btn_get(1)) {
			y_position--;
		}

		gfx_clear();
		draw_arrow(x_position, y_position);
		draw_arrow(x_position+10, y_position+10);
		gfx_update();
	}
}

