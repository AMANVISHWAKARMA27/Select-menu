#include <stdio.h>
#include <math.h>

int main()
{
    // Declare variables
    double CP, downpay, Rate, i, p, payment;
    int n;

    // Prompt the user for input
    printf("Enter the purchase price of the car: ");
    scanf("%lf", &CP);
    printf("Enter the down payment: ");
    scanf("%lf", &downpay);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &Rate);
    printf("Enter the total number of payments: ");
    scanf("%d", &n);

    // Calculate the monthly interest rate, principal and payment
    i = Rate / 1200; // Divide by 100 to convert percentage to decimal and by 12 to get monthly rate
    p = CP - downpay; // The amount borrowed
    payment = (i * p) / (1 - pow(1 + i, -n)); // The formula for monthly payment

    // Display the output
    printf("The amount borrowed is $%.2f\n", p); // Display with two decimal places
    printf("The monthly payment is $%.2f\n", payment); // Display with two decimal places

    return 0;