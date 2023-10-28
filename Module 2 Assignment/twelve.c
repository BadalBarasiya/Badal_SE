#include <stdio.h>

main() {
    int num, reverseNum = 0, r;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        r = num % 10;
        reverseNum = reverseNum * 10 + r;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverseNum);

}

