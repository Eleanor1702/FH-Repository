#include <stdio.h>

int main(void) {

	char nutzer_name[100];

	printf("Name eingeben\n");
	scanf("%s", nutzer_name);

	printf("Hello %s\n", nutzer_name);

	return 0;
}
