#include <stdio.h>

int lengthString(char *s) {

    int i;

    for (i = 0; i < 10000000; i++) {
        if (s[i] == 0) {
            return i;
        }
    }
}

int main() {

    char *name = "LOGAN";

    int i;

    for (i = 0; i < lengthString(name); i++) {
    
	    if (name[i]) {
                printf("%c %d\n", name[i], name[i]);
            }
    }
}