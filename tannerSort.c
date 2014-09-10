#include <stdio.h>

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
    int smallerNumber;
    int smallestNumber;
    
    if (a < b && b < c) {
        biggestNumber = a;
        smallerNumber = b;
        smallestNumber = c;
    } else {
        biggestNumber = b;
        smallerNumber = c;
        smallestNumber = a;
        biggestNumber = c;
        smallerNumber = a;
        smallestNumber = b;
    }
    printf("quashing has occured %d %d %d\n", smallestNumber, smallerNumber, biggestNumber);
}

int main() {
    sort(12);
    anotherSorter(238476,245);
    biggerSorter (35,20,20);
}
