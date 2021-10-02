#include<stdio.h>
void sum(int,int); //Function define

int main()
{	
	int num1=4,num2=5;
	
	sum(num1,num2); //function calling
}

void sum(int a,int b) //function declare
{
	printf("The sum :%d",a+b);
}
