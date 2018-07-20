#include <mokki.h>

int main(int event, void* data) {
	int last_val = 0;
	int led_state = 0;
	while(1) {
		int new_val = btn_get(0);
		if (new_val == 1 && last_val == 0) {
			led_state ^= 1;
		}
		led_set(0, led_state);
		last_val = new_val;
	}
}
