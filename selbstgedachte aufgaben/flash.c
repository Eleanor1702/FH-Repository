#include <stdio.h>

int main(void) {
	int z1 = 0;
	char op;
	int z2 = 0;
	
	scanf("%d %c %d", &z1, &op, &z2);

	switch (op) {
		case '+':
			printf("%d\n", z1 + z2);
			break;
		case '-':
			printf("%d\n", z1 - z2);
			break;
		case '*':
			printf("%d\n", z1 * z2);
			break;
		case '/':
			printf("%d\n", z1 / z2);
			break;
		default:
			printf("Das ist kein Operator\n");
			break;
	}
}
