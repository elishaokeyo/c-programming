#include<stdio.h>
int main()
{
    int marks;
    char Grade;
    printf("enter marks:");
    scanf("%d", &marks);

    switch(marks)
    {
    case(marks>0 && marks<=39)
        {
            Grade='e';
            break;

        }

        case(marks>39 && marks<=49)
        {
            Grade='d';
            break;

        }
        case(marks>49 && marks<=59)
        {
            grade='c';
            break;

        }
        case(marks>59 && marks<=69)
        {
            grade='b';
            break;

        }
        case(marks>69 && marks<=100)
        {
            Grade='a';
            break;

        }
        default
        {
            printf("enter valid marks")
        }
    }
    return 0;
}
