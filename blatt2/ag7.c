#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if(argc != 3) {
		printf("Error");
		return 0;
	}
	int len = strlen(argv[2]);
	char string[len];
	int key_len = strlen(argv[1]);
	char key[key_len];
	int def = len % key_len;
	int i, b;
	int a = 0;

	strcpy(string, argv[2]);
	strcpy(key, argv[1]);

	for(int i = 0; i < len; i++) {
		printf("%d, %d\n", i, i%key_len);
		string[i] = string[i] ^ key[i%key_len];
	}	

	printf("%s\n", string); 
	return 0;
}
