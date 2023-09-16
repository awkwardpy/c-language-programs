#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows (must be odd): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Please enter an odd number of rows.\n");
        return 0;
    }

    int spaces = rows / 2;
    int stars = 1;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= spaces; space++) {
            printf("  ");
        }
        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }
        printf("\n");
        if (i <= rows / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}
