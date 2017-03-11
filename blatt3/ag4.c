#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void suche (char *str, char *such) {
    int len = strlen(str);
    int len2 = strlen(such);
    char tmp[len2];
    char *ptr;
    int cnt = 0;
    int anz = 0;
    int i, j, c;

    //Länge des Str und Such vergleichen..
    if(len < len2) {
        printf("Ergebnis: -1\n");
        return;
    }
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
        }
    }
    //Ausgabe der Häufigkeit von Such....
    if(anz >= 0) {
        printf("Ergebnis: %d\n", anz);
    }
}

int main(void) {
    char *str = "nett";
    char *such = "netkeit";

    suche(str, such);
    return 0;
}