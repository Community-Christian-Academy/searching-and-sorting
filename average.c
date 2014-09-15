#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int total = 0;
    printf("hey, there are %d numbers to average\n", (argc-1));
    
    int i;
    for (i = 1 ; i < argc; i++) {
        int thisNumber = atoi(argv[i]);
        total = total + thisNumber;
    }
    int average = total / (argc - 1);
    printf("the sum is %d\n", total);
    printf("the average is %d\n", average);
}