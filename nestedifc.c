#include <stdio.h>
int main()
{
    int marks;
    printf("enter student marks:");
    scanf("%d", &marks);
    if (marks>=70 && marks<=100)
    {
        printf("grade A");
    }
    else if (marks>=60 && marks<=69)
    {
        printf("grade B");
    }
    else if (marks>=50 && marks<=59)
    {
        printf("grade C");
    }
    else if (marks>=40 && marks<=49)
    {
        printf("grade D");
    }
    else
    {
        printf("grade E");
    }

    return 0;


}

