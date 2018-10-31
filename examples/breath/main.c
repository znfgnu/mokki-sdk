#include <mokki.h>

int main(int event, void* data) {
	int brightness = 1;
	int db = 1;
	while(!btn_get(0) && brightness != 0) {
		if (brightness == 128) db = -1;
		brightness += db;
		led_set_rgb(brightness, brightness, brightness);
		time_delay(10);
	}
	return 0;
}
