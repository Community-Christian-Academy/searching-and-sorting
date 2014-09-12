#include <stdio.h>
#include <stdlib.h>

int biggerOf(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

int main(int argc, char** argv) {
    int biggestNumber = 0;
    printf("hey, there are %d numbers from which to choose\n", argc-1);
    
    int i;
    for (i = 1 ; i < argc; i++) {
        int thisNumber = atoi(argv[i]);
        biggestNumber = biggerOf(thisNumber, biggestNumber);
    }
    
    printf("the biggest number is %d\n", biggestNumber);
}