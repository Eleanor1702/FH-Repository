#include <stdio.h>

void prim_zahl(int zahl) {
	int erg = 0;
	
	for(int i = 2; i < zahl; i++) {
		erg = zahl % i;

		if(erg == 0) {
			printf("Die Zahl %d ist keine Primzahl\n", zahl);
			return;
		}
	}
	printf("Die Zahl %d ist eine Primzahl\n", zahl);
	return;
}

int main(void) {
	int zahl = 0;
	
	printf("Zahl eingeben\n");
	scanf("%d", &zahl);

	if(zahl == 1) {
		printf("Die Zahl 1 ist natürlich ein Primzahl\n");
		return 0;
	}else if(zahl < 1) {
		printf("Error\n");
		return 0;
	}

	prim_zahl(zahl);
	return 0;
}
