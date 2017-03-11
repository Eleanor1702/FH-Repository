#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if(argc != 2) {
		printf("Verwendung: getsquareroot ZAHL\n");
		return 1;
	}
	
	int zahl = atoi(argv[1]);

	double erg = 1.0;
	
	for(int i = 0; i < 10000000; i++) {
		erg = 0.5 * (erg + zahl/erg);
	}

	double f1 = erg;

	printf("Ergebnis: %lf\n", f1);
	return 0;
}
