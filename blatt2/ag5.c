#include <stdio.h>
#include <string.h>

typedef struct patient {
	int attribute_nummer;
	char name[50];
	char vorname[50];
	char strasse[50];
	int postleitzahl;
	char ort[50];
} Patient;

int main(void) {
	Patient patienten[4];

	for(int i = 0; i < 4; i++) {
		patienten[i].attribute_nummer = i+1;
	};

	for(int j = 0; j < 4; j++) {
		printf("Name: \n");
		scanf("%s", patienten[j].name);
		printf("Vorname: \n");
		scanf("%s", patienten[j].vorname);
		printf("Strasse: \n");
		scanf("%s", patienten[j].strasse);
		printf("Postleitzahl: \n");
		scanf("%d", &patienten[j].postleitzahl);
		printf("Ort: \n");
		scanf("%s", patienten[j].ort);
	}

	//Sortieren nach Name...
	Patient temp;

	for(int a = 0; a < 4; a++) {
		for(int b = 1; b < 4-a; b++) {
			if(strncmp(patienten[b-1].name, patienten[b].name, 50) > 0) {
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
		printf("PLZ: %d\n", patienten[x].postleitzahl);
		printf("Ort: %s\n", patienten[x].ort);
	}

	return 0;
}

