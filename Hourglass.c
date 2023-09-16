#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows (must be odd): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return 0;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (rows - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * (rows - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
