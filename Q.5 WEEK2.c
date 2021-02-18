#include<stdio.h>
int main()
{
	int i,j,r;
	printf("Enter the numbers of rows:");
	scanf("%d",&r);
	int c=r*2-1;
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j==1||(j==c-i+1))
			{
				printf("*");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\t");
	}
}
