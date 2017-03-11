#include <stdio.h>
#include <stdlib.h>

#define FILENAME "primzahlen.txt"
#define BUF_SIZE 20

void read_file() {
    FILE* f = fopen(FILENAME, "r");
    char buf[BUF_SIZE];
    int arr[100];
    int i = 1;

    while(fgets(buf, BUF_SIZE, f) != NULL) {
        arr[i] = atoi(buf);
        i++;
    }
    for(int c = 49; c < 52; c++) {
        printf("%d\n", arr[c]);
    }
    
}

int main() {
    read_file();
    return 0;
}
