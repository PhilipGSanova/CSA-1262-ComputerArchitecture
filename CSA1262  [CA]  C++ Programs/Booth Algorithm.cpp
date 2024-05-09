#include <stdio.h>

int boothMultiplication(int multiplicand, int multiplier) {
    int product = 0;
    int accumulator = 0;
    int multiplierBit = 0;

    for (int i = 0; i < sizeof(int) * 8; i++) {
        multiplierBit = multiplier & 1;

        if (multiplierBit == 1) {
            accumulator += multiplicand;
        } else if (multiplierBit == 0 && (accumulator & 1) == 1) {
            accumulator -= multiplicand;
        }

        accumulator >>= 1;
        multiplier >>= 1;
    }

    return accumulator;
}

int main() {
    int multiplicand, multiplier;
    printf("Enter multiplicand: ");
    scanf("%d", &multiplicand);
    printf("Enter multiplier: ");
    scanf("%d", &multiplier);

    int result = boothMultiplication(multiplicand, multiplier);
    printf("Result of multiplication: %d\n", result);

    return 0;
}
