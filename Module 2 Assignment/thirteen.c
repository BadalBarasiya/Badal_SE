#include <stdio.h>
#include <stdlib.h>

 main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = abs(number);

    int maxDigit = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("The maximum digit in the number is: %d\n", maxDigit);

}

