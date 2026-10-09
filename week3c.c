#include <stdio.h>
// Function to find the maximum of two numbers
int findMax(int num1, int num2) {
    if (num2 > num1)
        return num2;
    else
        return num1;
}
int main()
{

    int a, b, max;
 // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
 // Find the maximum using the function
    max = findMax(a, b);
 // Output the result
    printf("The maximum number is: %d\n", max);
    return 0;
}

