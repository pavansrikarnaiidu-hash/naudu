//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main (){

	float c,fa;
	
	printf("enter temperature in centigrade\n");
	scanf("%f", &c);
	
	
	fa = ( c * 1.8) +32;
	
	printf("temperature in fahrenheit is %F\n",fa);
	
	return 0;
	
}
