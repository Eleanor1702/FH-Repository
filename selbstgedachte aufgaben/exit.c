#includt <stdio.h>

static const EXIT_CODE = 1;

int main(void) {
	int response;
	
	do {
		printf("1 Eingeben \n");
		scanf("%d", &response);
	}while(response != EXIT_CODE);
	return 0;
}
