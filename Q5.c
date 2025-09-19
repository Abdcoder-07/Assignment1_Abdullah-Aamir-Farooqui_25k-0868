#include <stdio.h>

int main() {
    int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    int num;

    printf("Enter a number between 0-9 (any other number to stop): ");

    while (scanf("%d", &num) == 1) {
        if (num < 0 || num > 9) {
            break; // stop when input is invalid
        }

        if (num == 0) c0++;
        else if (num == 1) c1++;
        else if (num == 2) c2++;
        else if (num == 3) c3++;
        else if (num == 4) c4++;
        else if (num == 5) c5++;
        else if (num == 6) c6++;
        else if (num == 7) c7++;
        else if (num == 8) c8++;
        else if (num == 9) c9++;

        printf("Enter a number between 0-9 (any other number to stop): ");
    }

    if (c0+c1+c2+c3+c4+c5+c6+c7+c8+c9 == 0) {
        printf("No numbers were entered.\n");
    } else {
        printf("\nNumber   Number of Occurrences\n");
        if (c0 > 0) printf("%-7d %d\n", 0, c0);
        if (c1 > 0) printf("%-7d %d\n", 1, c1);
        if (c2 > 0) printf("%-7d %d\n", 2, c2);
        if (c3 > 0) printf("%-7d %d\n", 3, c3);
        if (c4 > 0) printf("%-7d %d\n", 4, c4);
        if (c5 > 0) printf("%-7d %d\n", 5, c5);
        if (c6 > 0) printf("%-7d %d\n", 6, c6);
        if (c7 > 0) printf("%-7d %d\n", 7, c7);
        if (c8 > 0) printf("%-7d %d\n", 8, c8);
        if (c9 > 0) printf("%-7d %d\n", 9, c9);
    }

    return 0;
}

