#include <stdio.h>
#include <math.h>
// Function to calculate compound interest
float calculateCompoundInterest(float principal, float rate,
float time){
    return principal * pow((1 + rate / 100), time);
}
int main()
{
    float principal, rate, time, amount;
 // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
 // Calculate compound interest using the function
    amount = calculateCompoundInterest(principal, rate, time);
 // Output the result
    printf("Amount after Compound Interest = %.2f\n", amount);
    return 0;
}
