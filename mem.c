#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE * fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "jim, salesman\n, receptionist\noscar, accounting");
	fclose(fpointer);





	return 0;

}
