#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Find the smallest using if-else
    if (a <= b && a <= c) {
        printf("The smallest number is: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("The smallest number is: %d\n", b);
    } else {
        printf("The smallest number is: %d\n", c);
    }

    return 0;
}
