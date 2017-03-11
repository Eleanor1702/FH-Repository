#include <stdio.h>
#include <stdlib.h>

void astreihe(int zahl, int breite, int stern_zahl_1, int stern_zahl_2, int stern_zahl_3, int space) {
	
	for(int y = 0; y < space; y++) {
		printf(" ");
	}
	for(int a = 0; a < stern_zahl_1; a++) {
		printf("*");
	}

	printf("\n");

	for(int z = 0; z < space - 1; z++) {
		printf(" ");
	}

	for(int b = 0; b < stern_zahl_2; b++) {
		printf("*");
	}

	printf("\n");

	for(int g = 0; g < space - 2; g++) {
		printf(" ");
	}

	for(int c = 0; c < stern_zahl_3; c++) {
		printf("*");
	}
}

int main(int argc, char *argv[]) {
	if(argc > 2) {
		printf("Error!");
		return 1;
	}
	int zahl = atoi(argv[1]);
	int stern_zahl_1 = 1;
	int stern_zahl_2 = 3;
	int stern_zahl_3 = 5;
	int breite = 5 + 2 * (zahl - 1);
	int space = (breite - 1)/2;
	
	for(int i = 0; i < zahl; i++) {
		
		astreihe(zahl, breite, stern_zahl_1, stern_zahl_2, stern_zahl_3, space);

		printf("\n");
		stern_zahl_1 += 2;
		stern_zahl_2 += 2;
		stern_zahl_3 += 2;
		space--;
	}
	return 0;
}
