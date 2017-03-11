#include <stdio.h>
#include <string.h>

void zahlworte(int zahl, char *erg) {
    char *minus = "minus";
    int cnt = 0;
    int i, j;
    if(zahl < 0) {
        for(i = 0; i < 5; i++) {
            erg[cnt] = minus[i];
            cnt++;
        }
        erg[cnt] = ' ';
        cnt++;
        //minus weg...
        zahl = zahl * -1;
    }
    int len = 0;
    int z2 = zahl;
    
    while(z2 != 0) {
        z2 = z2 / 10;
        len++;
    }
    int num[len];
    //zahlen array erstellen...
    for(i = 0; i < len; i++) {
        num[i] = zahl % 10;
        zahl = zahl / 10;
    }
    
    char *array[] = {"null", "eins", "zwei", "drei", "vier", "fünf", "sechs", "sieben", "acht", "neun"};

    //zahl zu Wort umwandeln...
    for(i = len - 1; i > -1; i--) {
        for(j = 0; j < strlen( array [ num [ i ] ] ); j++) {
            erg[cnt] = array[num[i]][j];
            cnt++;
        }
        //Leerzeichen eingabe...
        erg[cnt] = ' ';
        cnt++;
    }
    //Null Byte eingeben und Ausgabe..
    erg[cnt] = '\0';
}

int main(void) {
    int zahl = -1234567890;
    char erg[100];

    zahlworte(zahl, erg);

    return 0;
}
