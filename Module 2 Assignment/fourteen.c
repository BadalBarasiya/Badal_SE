#include <stdio.h>

 main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    while (number > 0) {
        digit = number % 10; 
        sum += digit;        
        number = number / 10; 
		    }

    printf("The summation of the digits is: %d\n", sum);

    
}

