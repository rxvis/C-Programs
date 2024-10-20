#include <stdio.h>

int main() {
    int a, b, c, in;

    printf("Enter the principal amount: ");
    scanf("%d", &a);

    printf("Enter the rate of interest : ");
    scanf("%d", &b);

    printf("Enter the time period in years : ");
    scanf("%d", &c);

    in = (a * b * c) / 100;

    printf("The simple interest is: %d\n", in);

    return 0;
}

