#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int len = strlen(argv[2]);
	int key = atoi(argv[1]);
	char text[len];

	for(int i = 0; i < len; i++) {
		text[i] = argv[2][i];
	}

	for(int i = 0; i < len; i++) {
		text[i] = text[i] - key;
	}

	printf("Verschlüsseln %d '%s'\n", key, text);
	return 0;
}
