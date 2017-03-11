#include <stdio.h>
#include <math.h>

int main(void) {
	float r;
	float a;
	printf("Radius: \n");
	scanf("%f", &r);
	
	a = M_PI * r * r;

	printf("A = %f\n", a);

	return 0;
}
