#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int len = strlen(argv[2]);
	char text[len];
	int key = atoi(argv[1]);

	for(int i = 0; i < len; i++) {
		text[i] = argv[2][i];
	}

	printf("Verschlüsseln %d '%s'\n", key, text);

	for(int i = 0; i < len; i++) {
		text[i] = text[i] + key;
	}

	printf("Verschlüsseln %d '%s'\n", key, text);
	return 0;
}
