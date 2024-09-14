#include <stdio.h>

int main()
{
    // Demonstrates different arithmetic operations and variable types

    // Addition
    print("Addition\n");
    int a = 5;
    int b = 2;
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    // Subtraction
    printf("\nSubtraction\n");
    int difference = a - b;
    printf("%d - %d = %d\n", a, b, difference);

    // Multiplication
    printf("\nMultiplication\n");
    int product = a * b;
    printf("%d * %d = %d\n", a, b, product);

    // Division using float
    printf("\nDivision\n");
    float a = 5;
    float b = 2;
    float quotient = a / b;
    printf("%f / %f = %f\n", a, b, quotient);

    // Modulus
    printf("\nModulus\n");
    int remainder = a % b;
    printf("%d %% %d = %d\n", a, b, remainder);
}