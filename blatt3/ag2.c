#include <stdio.h>
#include <string.h>

#define STR_LEN 50

typedef struct patient {
	int attribute_nummer;
	char name[STR_LEN];
	char vorname[STR_LEN];
	char strasse[STR_LEN];
	char postleitzahl[STR_LEN];
	char ort[STR_LEN];
} Patient;

void Eingabe(Patient patienten[]) {
  for(int j = 0; j < 4; j++) {
    printf("Name: \n");
    fgets(patienten[j].name, STR_LEN, stdin);
    printf("Vorname: \n");
    fgets(patienten[j].vorname, STR_LEN, stdin);
    printf("Strasse: \n");
    fgets(patienten[j].strasse, STR_LEN, stdin);
    printf("Postleitzahl: \n");
    fgets(patienten[j].postleitzahl, STR_LEN, stdin);
    printf("Ort: \n");
    fgets(patienten[j].ort, STR_LEN, stdin);
  }
}

void Sortieren(Patient patienten[]) {
  Patient temp;
  for(int a = 0; a < 4; a++) {
    patienten[a].attribute_nummer = a+1;
		for(int b = 1; b < 4-a; b++) {
			if(strncmp(patienten[b-1].name, patienten[b].name, STR_LEN) > 0) {
				temp = patienten[b-1];
				patienten[b-1] = patienten[b];
				patienten[b] = temp;
			}
		}
	}

	for(int x = 0; x < 4; x++) {
		printf("Patient ID: %d\n", patienten[x].attribute_nummer);
		printf("Name: %s\n", patienten[x].name);
		printf("Vorname: %s\n", patienten[x].vorname);
		printf("Strasse: %s\n", patienten[x].strasse);
		printf("PLZ: %s\n", patienten[x].postleitzahl);
		printf("Ort: %s\n", patienten[x].ort);
	}
}

int main(void) {
	Patient patienten[4];

  Eingabe(patienten);

  Sortieren(patienten);

  return 0;
}
