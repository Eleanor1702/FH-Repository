#include <stdio.h>

int main(void) {
	int s1 = 0;
	int s2 = 0;
	int erg = 0;

	

	printf("Geben Sie eine Zahl\n");
	scanf("%d", &s1);
	printf("Geben Sie eine Zahl\n");
	scanf("%d", &s2);

	erg = s1 + s2;

	printf("s1: %p \ns2: %p \nerg: %p \n", &s1, &s2, &erg);

	return 0;
}
