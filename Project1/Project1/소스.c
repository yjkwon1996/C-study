#include <stdio.h>

void main() {
	unsigned char a, b;
	a = 1;
	b = 1;
	while (a <= 3) {
		++a;
		b = b * a;
	}

	printf("%d", b);
}