#include <mokki.h>

int main(int event, void* data) {
	int x_position = 27;
	int y_position = 32;

	while(1) {
		if (btn_get(3)) {
			x_position++;
		}
		if (btn_get(2)) {
			x_position--;
		}
		if (btn_get(1)) {
			y_position--;
		}
		if (btn_get(4)) {
			y_position++;
		}

		gfx_clear();
		gfx_set_pixel(x_position, y_position, COLOR_WHITE);
		gfx_update();
	}
}
