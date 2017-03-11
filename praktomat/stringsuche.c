#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* suche (char *str, char *such, unsigned int n) {
    int len = strlen(str);
    int len2 = strlen(such);
    char tmp[len2];
    char *ptr;
    int cnt = 0;
    int anz = 0;
    int i, j, c;

    //suche nach dem Existenz des suchenden String....
    for(i = 0; i < len; i++) {
        cnt = i;
        for(j = 0; j < len2; j++) {
            if(str[cnt] == such[j]) {
                tmp[j] = such[j];
                cnt++;
            }else{
                break;
            }
        }
        //Testen ob das gespeihcerter string richtig ist + anzahl...
        if(strncmp(tmp, such, len2) == 0) {
            anz++;
            cnt = i;
            //tmp zurücksetzen...
            for(c = 0; c < len2; c++) {
                tmp[c] = '\0';
            }
            //Ausgabe vom richtigen Teil....
            if(anz == n) {
                ptr = &str[cnt];
                return ptr;
            }
        }
    }
	return NULL;
	/*
    if(anz == 0) {
        printf("nicht vorhanden! Das String kommt nicht vor\n");
    }else if(n > anz) {
        printf("nicht vorhanden! Das String kommt nur %d vor\n", anz);
    }
	*/
}
/*
int main(void) {
    char *str = "barbara macht barbarei";
    char *such = "arba";
    unsigned int n = 2;
	char* str_erg;

    str_erg = suche(str, such, n);
	printf("%s\n", str_erg);
    return 0;
}
*/
