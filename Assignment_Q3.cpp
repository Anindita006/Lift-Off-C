#include<stdio.h>
int main()
{
	float pi=3.14,r,d,c,A;
	printf("enter radius: \n");
	scanf("%f",&r);
	
	d=2*r;
	c=2*pi*r;
	A=pi*r*r;
	
	printf("The diameter is%f\n",d);
	printf("The circumference is%f\n",c);
	printf("The area is%f\n",A);
}

