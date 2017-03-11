#include <stdio.h>

int main(void) {
	int a;
	char op;
	int b;
	int erg;

	printf("Ein Mathematische Funktion eingeben..\n");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) {
		case '+':
			erg = a + b;
			printf("Erg: %d\n", erg);
			break;
		case '-':
			erg = a - b;
			printf("Erg: %d\n", erg);
			break;
		case '*':
			erg = a * b;
			printf("Erg: %d\n", erg);
			break;
		case '/':
			erg = a / b;
			printf("Erg: %d\n", erg);
			break;
		default:
			printf("Error!\n");
			break;
	}
	return 0;
}
