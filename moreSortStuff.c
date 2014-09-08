#include <stdio.h>

void sort(int x) {
    printf("sorted to:  %d\n", x);
}

void sortTwoNumbers(int x, int y) {
    if (x < y) {
        printf("sorted to %d %d\n", x, y);
    } else {
        printf("sorted to %d %d\n", y, x);
    }
}

void otherSortTwoNumbers(int x, int y) {
    printf("sorted to %d %d\n",
           x < y ? x : y,
           x < y ? y : x);
}

void yetAnotherTwoDigitSorter(int a, int b) {
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

int main() {
    sort(12);
    /*
    sortTwoNumbers(245,15);
    otherSortTwoNumbers(784059, 1200);
    yetAnotherTwoDigitSorter(2341, 10);
     */
}