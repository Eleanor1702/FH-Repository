#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	if(argc != 4) {
		printf("Korrekter Aufruf: %s A B  \"String\"\n", argv[0]);
		return 0;
	}

	int string_len = strlen(argv[3]);
	char string[string_len];
	char buchstabe[1];
	char key[1];

	//Buchstabe und key eigenes Array speichern.. (ohne warnings)	
	strncpy(buchstabe, argv[1], 1);
	strncpy(key, argv[2], 1);

	//string eigens Array..	
	for(int i = 0; i < string_len; i++) {
		string[i] = argv[3][i];
	}
	//Buchstabe ersetzen..
	for(int i = 0; i < string_len; i++) {	
		if(string[i] == buchstabe[0]) {
			string[i] = key[0];
		}
	}
	printf("%s\n", string);
	return 0;
}
