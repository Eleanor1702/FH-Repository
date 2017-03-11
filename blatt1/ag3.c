#include <stdio.h>
#include <math.h>

int main(void) {

	float a, b;
	float quad_a, quad_b;

	printf("a und b eingeben\n");
	scanf("%f %f", &a, &b);
	
	quad_a = a * a;

	quad_b = b * b;

	float c = sqrt(quad_a + quad_b);

	printf("C = %f\n", c);
	return 0;
}
