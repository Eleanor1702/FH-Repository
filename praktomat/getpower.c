#include <stdio.h>

int main(void) {
	double result = 0.0;
	int basis = 0;
	int exponent = 0;

	printf("Basis: ");
	scanf("%d", &basis);

	printf("Exponent: ");
	scanf("%d", &exponent);
	
	result = 1.0;

	if (exponent < 0) {
		for(int i = 0; i > exponent; i--) {
			result = result * basis;
		}
		result = 1/result;
	}else if(exponent > 0) {
		for(int i = 0; i < exponent; i++) {
			result = result * basis;
		}
	}else if(exponent == 0) {
			result = 1.0;
	}

	printf("Ergebnis: %lf\n", result);
	return 0;
}
