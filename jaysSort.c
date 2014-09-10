#include <stdio.h>
#include <stdlib.h>

void sort(int x) {
    printf("sorted to:  %d\n", x);
}

void sortTwoNumbers(int x, int y) {
    if (x < y) {
        printf("already in order as %d %d\n", x, y);
    } else {
        printf("numbers were out of order.  sorted to %d %d\n", y, x);
    }
}

void otherSorter(int a, int b) {
    int biggestNumber;
    int smallestNumber;
    
    if (a < b) {
        biggestNumber = b;
        smallestNumber = a;
    } else {
        biggestNumber = a;
        smallestNumber = b;
    }
    printf("sorted to %d %d\n", smallestNumber, biggestNumber);
}

void anotherSorter(int x, int y) {
    printf("sorted to %d %d\n", x < y ? x : y, x < y ? y : x);
}

void biggerSorter(int a, int b, int c) {
    int biggestNumber;
    int smallestNumber;
    
    if (a < b) {
        biggestNumber = b;
        smallestNumber = a;
    } else {
        biggestNumber = a;
        smallestNumber = b;
    }
    printf("sorted to %d %d\n", smallestNumber, biggestNumber);
}

int main(int argc, char** argv) {
    int unsortedArray[4];
    
    for (int i = 1; i < argc; ++i)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
        unsortedArray[i] = atoi(argv[i]);
    }

    anotherSorter(unsortedArray[1], unsortedArray[2]);
    biggerSorter(unsortedArray[1], unsortedArray[2], unsortedArray[3]);
}
