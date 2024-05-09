#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // For abs()

// Function to perform integer restoring division
void restoringDivision(int dividend, int divisor) {
    // Initializing variables
    int quotient = 0;
    bool negative = false;

    // Handling division by zero
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        return;
    }

    // Handling negative numbers
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        negative = true;
        dividend = -dividend;
        divisor = abs(divisor);
    } else if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)) {
        negative = false;
        dividend = abs(dividend);
        divisor = abs(divisor);
    }

    // Debug print statements
    printf("Debug: dividend = %d, divisor = %d\n", dividend, divisor);

    // Main division process
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;

        // Debug print statements inside the loop
        printf("Debug: quotient = %d, remainder = %d\n", quotient, dividend);
    }

    // Restoring the sign if necessary
    if (negative)
        quotient = -quotient;

    // Printing the result
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", dividend);
}

int main() {
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    restoringDivision(dividend, divisor);

    return 0;
}

