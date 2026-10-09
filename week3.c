#include <stdio.h>
//function to calculate simple interest float calculate simple interest(float principal, float time)

// Function to calculate Simple Interest
float calculateSimpleInterest(float principal, float rate, float time)

{
 return (principal * rate * time) / 100;
}

int main()
{
    float principal, rate, time, interest;
    //input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");


    scanf("%f", &time);
 // Calculate simple interest by calling the function
    interest = calculateSimpleInterest(principal, rate, time);

 // Output the result
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}




