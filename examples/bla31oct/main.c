#include <mokki.h>

int paddle_length = 7;

int draw_ball(int x_pos, int y_pos) {
		gfx_set_pixel(1 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(2 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(3 + x_pos, 0 + y_pos, COLOR_WHITE);
		gfx_set_pixel(0 + x_pos, 1 + y_pos, COLOR_WHITE);
		gfx_set_pixel(0 + x_pos, 2 + y_pos, COLOR_WHITE);
		gfx_set_pixel(0 + x_pos, 3 + y_pos, COLOR_WHITE);
		gfx_set_pixel(1 + x_pos, 4 + y_pos, COLOR_WHITE);
		gfx_set_pixel(2 + x_pos, 4 + y_pos, COLOR_WHITE);
		gfx_set_pixel(3 + x_pos, 4 + y_pos, COLOR_WHITE);
		gfx_set_pixel(4 + x_pos, 1 + y_pos, COLOR_WHITE);
		gfx_set_pixel(4 + x_pos, 2 + y_pos, COLOR_WHITE);
		gfx_set_pixel(4 + x_pos, 3 + y_pos, COLOR_WHITE);
}

int draw_paddle(int x_pos, int y_pos) {
	for (int i=0; i<paddle_length; i++) {
		gfx_set_pixel(x_pos + i, y_pos, COLOR_WHITE);
	}
}

int main(int event, void* data) {
  int x_ball = 64;
	int y_ball = 32;

	int x_paddle = 64;
	int y_paddle = 62;

	int y_ball_vel = -3;

	while(1) {
		// input
		if (btn_get(2) && x_paddle > 0) {	// button pressed and paddle able to move
			x_paddle--;
		}
		if (btn_get(3) && x_paddle + paddle_length < 128) {
			x_paddle++;
		}

		// logika
		y_ball += y_ball_vel;
		// odbicie od gory
		if (y_ball <= 0) {
			y_ball_vel *= -1;
		}
		// odbicie od dolu
		if (y_ball + 5 >= 64) {
			return 0;	// konczy program
			y_ball_vel *= -1;
		}
		// odbicie od paletki
		if (y_paddle - 5 == y_ball) {
			if (x_ball < x_paddle + paddle_length - 1 && x_ball + 5 > x_paddle + 1) {
				y_ball_vel *= -1;
			}
		}

		// rysowanie
		gfx_clear();
		draw_ball(x_ball, y_ball);
		draw_paddle(x_paddle, y_paddle);
		gfx_update();
	}
}

