#include <stdio.h>

 main() {
    char inputString[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    
    while (inputString[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);
}

