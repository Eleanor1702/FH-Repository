#include <stdio.h>

int potenz (int basis, int exponent) {
	
	int erg = basis;
	int i;

	for (i = 1; i < exponent; i++) {
		erg *= basis;
	}
	
	return erg;
}

int main() {
	
	printf("Die Potenz %d hoch %d ist %d\n", 5, 2, potenz(5,2));
	
	int zweihochfuenf = potenz(2,5);

	printf("Die Potenz %d hoch %d ist %d\n", 2, 5, zweihochfuenf);

	return 0;
}
