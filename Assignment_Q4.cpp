#include<stdio.h>
int main()
{ 
    float phys,chem,bio,maths,comp,per;
	printf("Marks in Physics are: \n");
	printf("Marks in Chemistry are: \n");
	printf("Marks in Biology are: \n");
	printf("Marks in Maths are: \n");
	printf("Marks in computer are: \n");
	scanf("%f%f%f%f%f",&phys,&chem,&bio,&maths,&comp);
	
	per=(phys+chem+bio+maths+comp)*100/500;
	printf("The total percentage is%f\n",per);
    if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80) 
	{
		printf("Grade B");
	}  
	else if(per>=70)
	{ 
	    printf("Grade C"); 
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade E");
    }
    else
    {
    	printf("Grade F");
	}
}
	 
