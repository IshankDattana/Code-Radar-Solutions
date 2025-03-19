#include <stdio.h>

int main() {
    float number;
    printf("A single floating-point number: ");
    scanf("%.2f", &number);
    printf("You entered: %.2f\n", number);

    return 0;
}