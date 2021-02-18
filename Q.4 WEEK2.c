#include<stdio.h>
int main()
{
	int a[40],i,num,l,s;
	printf("Enter the numbers of element:");
	scanf("%d",&num);
	
	printf("Enter the elements in array:");
	for(i=0;i<num;++i)	
	scanf("%d",&a[i]);
	
	l=a[0];	
	s=a[0];
	for (i=1;i<num;++i)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	printf("The largest element is:%d",l);
	printf("The smallest element is:%d",s);
}

