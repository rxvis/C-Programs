#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to num - 1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;  // If divisible by any number other than 1 and itself, it's not prime
        }
    }

    // If no divisor was found, the number is prime
    printf("%d is a prime number.\n", num);

    return 0;
}

