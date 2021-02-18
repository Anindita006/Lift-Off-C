#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int c,i;
	printf("Enter the string: \n");
	scanf("%c",&str);
	for(i=0;str[i]!=0;++i)
	{
		if (str[i]!=str[i+1])
		{
			c++;
		}
	}
	printf("Total number of words in a string:%d",c);
}
