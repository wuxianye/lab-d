#include <stdio.h>

int main(void)
{
	// Read number from file - do not edit
	double num;
	FILE* fptr;
	fptr = fopen("number.txt", "r");
	if (fptr == NULL) { // display error if can't open file
		printf("Error. Not able to open the file.");
		return 1;
	}
	fscanf(fptr, "%lf", &num); 
	fclose(fptr);
	// Your code below here

	char* name = "xianye";
	char* email = "xianye.wu@student.manchester.ac.uk";

	// ���JSON��ʽ���ı�
	printf("{\"name\":\"%s\",\"email\":\"%s\",\"number1\":%.2f,\"number2\":%.3e}\n", name, email, num, num);
	// Do not edit below here
	return 0;
}