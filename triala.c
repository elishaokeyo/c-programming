#include <stdio.h>
void main()
{
	int j, sum =0;
	printf("the first ten natural numbers is :\n");
	for (j=1; j<=10; j++)
	{
		sum =sum+ j;
		printf("%d\n", j);

	}
	printf("\n the sum is :%d", sum);
}
