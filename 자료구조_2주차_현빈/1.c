#include <stdio.h>
#include <stdlib.h>

#define MAX_STRINGS 4
#define MAX_LENGTH 100

int main() {
    char* strings[MAX_STRINGS];
    int i;


    for (i = 0; i < MAX_STRINGS; i++) {
        strings[i] = (char*)malloc(MAX_LENGTH * sizeof(char));

        fgets(strings[i], MAX_LENGTH, stdin);
    }


    for (i = 0; i < MAX_STRINGS; i++) {
        printf("%s", strings[i]);
    }


    for (i = 0; i < MAX_STRINGS; i++) {
        free(strings[i]);
    }

    return 0;
}