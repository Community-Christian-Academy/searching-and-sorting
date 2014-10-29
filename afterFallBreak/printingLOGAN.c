#include <stdio.h>

//int lengthString(char *s) {
//
//    int i;
//
//    for (i = 0; i < 10000000; i++) {
//        if (s[i] == 0) {
//            return i;
//        }
//    }
//}

int main() {

    char *name = "LOGAN";

    int i;

    for (i = 0; i < 1; i++) {
    
	    if (name[0]) {
                printf("%c %d\n", name[0], name[0]);

	        if (name[1]) {
                   printf("%c %d\n", name[1], name[1]);

		    if (name[2]) {
                       printf("%c %d\n", name[2], name[2]);

		        if (name[3]) {
                           printf("%c %d\n", name[3], name[3]);

                            if (name[4]) {
			        printf("%c %d\n", name[4], name[4]);

                            }
                        }
                    }
                 }
            }
    }
}