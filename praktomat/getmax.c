#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int len = argc - 1;
	int zahlen[len];
	int maximum = 0;

	for(int i = 0; i < len; i++) {
		zahlen[i] = atoi(argv[i+1]);
	}

	maximum = zahlen[0];

	for(int i = 0; i < len-1; i++) {	
		if(maximum < zahlen[i+1]) {
			maximum = zahlen[i+1];
		}
	}
	
	printf("Maximum: %d\n", maximum);
	return 0;
}
