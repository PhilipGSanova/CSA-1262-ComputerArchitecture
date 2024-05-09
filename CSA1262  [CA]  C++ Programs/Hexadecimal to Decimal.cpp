#include <stdio.h>
#include <math.h>

int hexToDecimal(char hex[]) {
    int decimal = 0, place = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        int digit;
        if (hex[i] >= '0' && hex[i] <= '9')
            digit = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            digit = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            digit = hex[i] - 'a' + 10;
        decimal += digit * pow(16, place);
        place++;
    }
    return decimal;
}

int main() {
    char hex[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    printf("Decimal equivalent: %d\n", hexToDecimal(hex));

    return 0;
}
