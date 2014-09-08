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

int main() {
    sort(12);
    sortTwoNumbers(245,15);
}
