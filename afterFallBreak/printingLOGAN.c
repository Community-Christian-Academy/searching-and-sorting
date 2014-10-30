#include <stdio.h>
#include "string.h"

int main() {

    char *name = "LOGAN";

    int i;

    printf("printing forwards\n");

    for (i = 0; i < lengthString(name); i++) {
    
        if (name[i]) {

            printf("%c %d\n", name[i], name[i]);
        }
    }

    printf("printing backwards\n");

    for (i = lengthString(name); i >= 0; i--) {

        if (name[i]) {

            printf("%c %d\n", name[i], name[i]);
        }
    }
}