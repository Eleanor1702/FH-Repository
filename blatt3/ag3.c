#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void verschluesseln(int len, char text[], int key) {
  for(int i = 0; i < len; i++) {
    text[i] = text[i] + key;
  }
}

void entschluesseln(int len, char text[], int key) {
  for(int i = 0; i < len; i++) {
		text[i] = text[i] - key;
	}
}

int main(int argc, char *argv[]) {
  int len = strlen(argv[2]);
	char text[len];
	int key = atoi(argv[1]);

  for(int i = 0; i < len; i++) {
		text[i] = argv[2][i];
	}

  verschluesseln(len, text, key);
  printf("Verschlüsseln %d '%s'\n", key, text);
  entschluesseln(len, text, key);
  printf("Verschlüsseln %d '%s'\n", key, text);

  return 0;
}
