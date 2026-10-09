#include <stdio.h>
int main()
{
    int marks1;
    int marks2;
    int marks3;
    printf("enter marks:");
    scanf("%d", &marks1);
    scanf("%d", &marks2);
    scanf("%d", &marks3);

    printf("parrots\tRams\tKings\n");
    printf("%d\t%d\t%d\n", marks1,marks2,marks3);
    printf("%d\t%d\t%d\n",marks1,marks2,marks3);
    printf("%d\t%d\t%d\n", marks1,marks2,marks3);


    return 0;
}
