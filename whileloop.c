//program that will initialize element of array
#include<stdio.h>
int main()
{
	int marks[10]={70,80,45,67,43,59,45,57,47,67};
	int i;
	for (i=1; i<=10; i++)
	{
		printf("%d\n", marks[i]);
	}
	return 0;
}
