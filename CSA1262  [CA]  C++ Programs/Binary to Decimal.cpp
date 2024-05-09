#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("Decimal equivalent: %d\n", binaryToDecimal(binary));

    return 0;
}
