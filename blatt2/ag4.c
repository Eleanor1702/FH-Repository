#include <stdio.h>

int ausgangspunkt = 0;

int main(void) {
	printf("Hier fange ich an");

	int *ptr = &ausgangspunkt;

	for(int i = 200; i > 0; i--) {
		printf("%d\n", *ptr);
		ptr--;
	}
 	return 0;
}
