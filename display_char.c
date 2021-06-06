#include <unistd.h>
void	display_char(char c) {
	write(1, &c, 1);
}
