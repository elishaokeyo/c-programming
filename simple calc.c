// a simple calculator
#include <stdlib.h>
#include <stdio.h>

int main()
{
	double num1;
	double num2;
	char op;
	int kop;
	kop=0;

	while(kop<=4){
		printf("\nenter a number:");
	    scanf("%lf", &num1);
		printf("enter an operator:");
	    scanf(" %c", &op);
	    printf("enter a number:");
	    scanf("%lf", &num2);

		if(op=='+'){
		printf("%f", num1+num2);
		}
	    else
			if(op=='-'){
				printf("%f", num1-num2);
	    }
		else
			if(op=='*'){
			printf("%f", num1*num2);
	    }
		else
			if(op=='/'){
				printf("%f", num1/num2);
	    }

		else{
			printf("invalid operator");

	    }
	    kop++;

	}


	return 0;

}
