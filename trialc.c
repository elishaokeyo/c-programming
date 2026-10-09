#include<stdio.h>
int main()
{
	double number, sum =0;
	int total=1;
	do
	{
		printf("enter a number:");
		scanf("%lf", &number);
		sum +=number;
		total++;
	}
	while(number!=0.0, total<=3 );
	printf("%d", total);
	printf("sums =%.2lf", sum);
	return 0;
}
