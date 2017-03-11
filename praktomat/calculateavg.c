#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int len = argc - 1;
	double zahlen[len];
	double durchschnitt = 0;

	for(int i = 0; i < len; i++) {
		zahlen[i] = atof(argv[i+1]);
	}

	durchschnitt = zahlen[0];

	for(int i = 1; i < len; i++) {
		durchschnitt += zahlen[i];
	}

	durchschnitt = durchschnitt / len;

	printf("Durchschnitt: %lf\n", durchschnitt);
	return 0;
}
