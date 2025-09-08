//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
	int l,a,b,p;
	
	printf("Enter the length of the rectangle");
	scanf("%d",&l);
	
	
	printf("Enter the breadth of the rectangle");
	scanf("%d",&b);
	
	a=l*b;
	p=2*(l+b);
	
	printf("area:%d",a);
	printf("perimeter:%d",p);
	
}
