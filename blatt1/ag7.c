#include <stdio.h>

void summe (int zahl) {
	int summe = 0;

	do {
		summe += zahl;
		printf("Summe: %d\n", summe);
		printf("Naechste Zahl eingeben: \n");
		scanf("%d", &zahl);
	}while(1);

	return;
}

int main(void) {
	int zahl;

	printf("Eine Zahl eingeben: \n");
	scanf("%d", &zahl);

	summe(zahl);

	return 0;
}
