//Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
#include <conio.h>
void main()
{
	float r,cir,a;
	clrscr();
	
	printf("Enter the radius :");
	scanf ("%f" ,&r);
	
	a=3.14*r*r;
	cir=3.14*2*r;
	printf("area of the circle :%f",a);
	printf ("\ncircumference of the circle :%f",cir);
	
	getch();
	
}
