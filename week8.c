#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};

	int arr1[]={1,2,3,4,5};

	float arr2[5];
	for (int i=0; i<5; i++){
		arr2[i]=(float)i*2.1;
		//printf("%.2lf\n", i);
	}
	return 0;
}
