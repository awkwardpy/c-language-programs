#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is not even.\n", num);
    }
    return 0;
}
