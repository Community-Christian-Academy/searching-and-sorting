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

    char *theString = "LOGAN";
    char *theSearch = "LOGAN";

    int i;

    for (i = 0; i < lengthString(theString); i++) {
    
	    if (theSearch[0] == theString[i+0]) {
                printf("%c %d\n", theSearch[0], theSearch[0]);

	        if (theSearch[1] == theString[i+1]) {
                   printf("%c %d\n", theSearch[1], theSearch[1]);

		    if (theSearch[2] == theString[i+2]) {
                       printf("%c %d\n", theSearch[2], theSearch[2]);

		        if (theSearch[3] == theString[i+3]) {
                           printf("%c %d\n", theSearch[3], theSearch[3]);

                            if (theSearch[4] == theString[i+4]) {
			        printf("%c %d\n", theSearch[4], theSearch[4]);

                            }
                        }
                    }
                }
           }
    }
}