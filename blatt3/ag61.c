#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* key;
	char* value;
} KeyValue;

int main(void) {
	char *zeilen_statics = "nummer=12\nname=Mustermann\nvorname=Max\nstrasse=Musterstrasse\nhausnummer=13a\npostleitzahl=93053\nwohnort=Regensburg\n";

	char *zeilen = malloc(strlen(zeilen_statics));
	strncpy(zeilen, zeilen_statics, strlen(zeilen_statics));

	int len = strlen(zeilen);
	KeyValue result[7];

	//Parser-Status
	int zeile = 0;
	int feld = 0;
	char *ptr = zeilen;

	for(int i = 0; i < len; i++) {
		if(zeilen[i] == '=') {
			zeilen[i] = '\0';
			result[zeile].key = ptr;
			printf("%s\n", result[zeile].key);

			if(i+1 < len) {
				ptr =(zeilen+i+1);
			}
		} else if(zeilen[i] == '\n') {
			zeilen[i] = '\0';
			result[zeile++].value = ptr;
			printf("%s\n", result[zeile++].value);

			if(i+1 < len) {
				ptr = (zeilen+i+1);
			}
		}
	}

	for(int i = 0; i < 7; i++) {
		printf("%s -> %s\n", result[i].key, result[i].value);
	}

	return 0;
}
