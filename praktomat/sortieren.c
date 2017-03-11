#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int len = argc-1;
	int zahlen[len];
	for(int i = 0; i < len; i++) {
		zahlen[i] = atoi(argv[i+1]);
	}
	
	for(int c = 0; c < len; c++) {
		for(int i = 0; i < len-1; i++) {
			if(zahlen[i] < zahlen[i+1]) {
			
			}else if(zahlen[i] > zahlen[i+1]) {
				int z_2 = zahlen[i];
				zahlen[i] = zahlen[i+1];
				zahlen[i+1] = z_2;
			}else if(zahlen[i] == zahlen[i+1]) {
				zahlen[i] = zahlen[i];
			} 
		}
	}
	printf("Ausgabe:");
	for(int i = 0; i < len; i++) {
		printf(" %d", zahlen[i]);
	}
	printf("\n");
	return 0;
}
