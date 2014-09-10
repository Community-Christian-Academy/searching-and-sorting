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
    }
    printf("totes quashed: %d %d %d\n", Number, biggerNumber, biggestNumber);
}

int main() {
    sort(12);
    anotherSorter(238476,245);
    biggerSorter(789, 285, 1);
}
