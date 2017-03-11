#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char *str;
	int i = 80;
	str = (char *)malloc(sizeof(char)*80);
	do {	
		printf("Schreiben sie bis 80 Zeichen\n");
		fgets(str, 80, stdin);
		i++;
		str = (char *)malloc(sizeof(char)*i);
			
	}while (1);
	printf("%s\n", str);
	return 0;
}

	
	
