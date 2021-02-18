#include<stdio.h>
int main()
{
	int i,j,k,size,sumE=0,sumP=0;
	printf("Enter the size of Array:");
	scanf("%d",&size);
	int a[size];
	printf("Enter elements in the Array:");
	for(i=0;i<size;++i)
	{
		scanf("%d",&a[i]);	
	} 
	for(j=0;j<size;++j)
	{
		if(a[j]%2==0)
		{
			sumE=a[j];
		}
	}
	for (k=0;k<size;k+=2)
	{
		sumP=a[k];		
	}
	printf("sum of even elements in Array is: %d\n",sumE);
	printf("sum of even position elements in the Array is: %d",sumP);
	
}
