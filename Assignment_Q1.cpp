#include<stdio.h>
int main() 
{ 
	int a,b,sum,sub,mul,div,mod;
	printf("Enter a is: \n");
	printf("Enter b is: \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("Summation of two numbers is %d\n",sum);
	printf("Subtraction of two numbers is %d\n",sub);
	printf("Multiplication of two numbers is %d\n",mul);
	printf("Division of two numbers is %d\n",div);
	printf("Modulus of two numbers is %d\n",mod);
}

