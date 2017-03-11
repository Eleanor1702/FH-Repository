#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SPEICHER 5

int main(void) {
  int zahl = 0;
  int *dauer = NULL;
  dauer = (int *)malloc(sizeof(int)*SPEICHER);
  int i = 0;
  int erg = 0;
  int counter = 0;

  printf("Zahl eingeben: ");
  scanf("%d", &zahl);
  counter++;

  while(zahl != 0) {
    if(counter > SPEICHER) {
      dauer = realloc(dauer, sizeof(int)*SPEICHER+counter);
    }
    dauer[i] = zahl;
    i++;
    printf("Zahl eingeben: ");
    scanf("%d", &zahl);
    counter++;
  }

  for(int j = 0; j < counter; j++) {
      erg += dauer[j];
  }
  printf("%d\n", erg);

  free(dauer);
  return 0;
}
