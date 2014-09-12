#include <stdio.h>
#include <stdlib.h>

void bradensThreeNumberSorter(int a, int b, int c);
// the code for this function is over in bradensSort.c

int main(int argc, char** argv) {
    int unsortedArray[4];

    int i;
    for (i = 1; i < argc; i++) {
        unsortedArray[i] = atoi(argv[i]);
    }

    bradensThreeNumberSorter(unsortedArray[1], unsortedArray[2], unsortedArray[3]);
    return 0;
}















