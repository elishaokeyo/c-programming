#include<stdio.h>
int addition(int num1, int num2)
{
	int sum;
	sum=num1+num2;
	return sum;
}
int main()
{
	int var1, var2;
	int t;
	for(t=0; t<=10; t++)
	{
		printf("enter number 1:");
		scanf("%d",&var1);
	    printf("enter number 2:");
	    scanf("%d",&var2);
	    int res=addition(var1,var2);
	    printf("output: %d\n", res);
	}
	return 0;


}
