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

void biggerSorter (int a, int b, int c) {
    int bigNumber = b;
    int middleNumber = a;
    int smallNumber = c;
    
    if (a < b > c) {
        bigNumber = b;
        middleNumber = a;
        smallNumber = c;
        
    } else {
        bigNumber = a;
        middleNumber = c;
        smallNumber = b;
    }
    printf("sorted to %d %d %d\n", smallNumber, middleNumber, bigNumber);
}


int main() {
    sort(12);
    anotherSorter(238476,245);
    biggerSorter(750,2350,56);
}
