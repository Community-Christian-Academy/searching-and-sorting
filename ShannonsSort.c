#include <stdio.h>
#include <stdlib.h>
void biggerSorter(int a, int b, int c) {
    int Number;
    int biggerNumber;
    int biggestNumber;
    
    if ((a < b) && (b < c)) {
        Number = a;
        biggerNumber = b;
        biggestNumber = c;
    } if ((c < b) && (b < a)) {
        Number = c;
        biggerNumber = b;
        biggestNumber = a;
    } if ((a < c) && (c < b)) {
        Number = a;
        biggerNumber = c;
        biggestNumber = b;
    } if ((c < a) && (a < b)) {
        Number = c;
        biggerNumber = a;
        biggestNumber = b;
    } if ((b < a) && (a < c)) {
        Number = b;
        biggerNumber = a;
        biggestNumber = c;
    } if ((b < c) && (c < a)) {
        Number = b;
        biggerNumber = c;
        biggestNumber = a;
    } if ((a == b) && (b < c)) {
        Number = a;
        biggerNumber = b;
        biggestNumber = c;
    } if ((a == c) && (a < b)) {
        Number = a;
        biggerNumber = c;
        biggestNumber = b;
    } if ((b == c) && (c < a)) {
        Number = b;
        biggerNumber = c;
        biggestNumber = a;
    } if ((a == b) && (b == c)) {
        Number = a;
        biggerNumber = b;
        biggestNumber = c;
    } if ((a < b) && (b == c)) {
        Number = a;
        biggerNumber = b;
        biggestNumber = c;
    } if ((b < a) && (a == c)) {
        Number = b;
        biggerNumber = a;
        biggestNumber = c;
    } if ((c < a) && (a == b)) {
        Number = c;
        biggerNumber = a;
        biggestNumber = b;
    }
    printf("totes quashed: %d %d %d\n", Number, biggerNumber, biggestNumber);
}

int main(int argc, char** argv) {
    int unsortedArray[4];
    
    for (int i = 1; i < argc; i++) {
        unsortedArray[i] = atoi(argv[i]);
    }
    
    biggerSorter(unsortedArray[1], unsortedArray[2], unsortedArray[3]);
    return 0;
}
