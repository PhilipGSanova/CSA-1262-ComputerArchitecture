#include <stdio.h>

void decimalToOctal(int decimal) {
    int octalNum[100], i = 0;
    while (decimal != 0) {
        octalNum[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Octal equivalent: ");
    decimalToOctal(decimal);
    printf("\n");

    return 0;
}
