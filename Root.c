//prompt user to enter number and calculate its sqr
#include <stdio.h>
float square(float x);
int main()
{
	float m, n;
	printf("\nenter some number for finding square\n");
	scanf("%f", &m);
	n= square(m);
	printf("\nsquare of the given number %f is %f", m,n);

}
float square(float x)
{
	float p;
	p=x*x;
	return (p);
}
