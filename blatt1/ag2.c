#include <stdio.h>

int main(void) {
	
	int laenge;
	int hoehe;
	int erg;

	printf("Länge: \n");
	scanf("%d", &laenge);

	printf("Höhe: \n");
	scanf("%d", &hoehe);

	printf("Länge: %d\n", laenge);
	printf("Höhe: %d\n", hoehe);
	printf(".............\n");
	printf("Fläche: %d\n", laenge + hoehe);

	return 0;
}
