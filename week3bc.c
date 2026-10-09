#include <stdio.h>
// Function to calculate discounted price
float calculateDiscount(float price, float discountPercentage){

    return price - (price * discountPercentage / 100);

}
int main()
{
    float price, discount, discountedPrice;
 // Input original price and discount percentage
    printf("Enter the original price of the product: ");
    scanf("%f", &price);
    printf("Enter the percentage discount: ");
    scanf("%f", &discount);
 // Calculate discounted price
    discountedPrice = calculateDiscount(price, discount);
 // Output the result
    printf("The discounted price is: %.2f\n", discountedPrice);
    return 0;

}
