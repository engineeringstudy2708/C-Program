//Implement a program to convert infix notation to postfix notation using stack.

#include<stdio.h>
#define size 25

char stack[size];
int top = -1;

void push(char x)
{
	if(top>=size)
	{
		printf("\nStack Overflow\n");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

char pop()
{
	if(top == -1)
	    return -1;
	else
	    return stack[top--];
}

int priority(char x)
{
	if(x == '(')
	    return 0;
	if(x == '+' || x == '-')
	    return 1;
	if(x == '*' || x == '/')
	    return 2;
	if( x == '^')
	    return 3;
}

int main()
{
	char exp[20]; // Infix Expression
	char *e,x;
	
	printf("Enter the Expression :: ");
	scanf("%s",&exp);
	
	e = exp;
	
	printf("\nThe Postfix Expression is: ");
	while (*e != '\0')
	{
		if( isalnum(*e) ) //
		    printf("%c",*e);
		else if( *e == '(')
		    push(*e);
		else if( *e == ')')
		{
			while( (x = pop()) != '(')
			    printf("%c",x);
		}
		else
		{
			while ( priority(stack[top]) >= priority(*e) )
			    printf("%c",pop());
			    
			push(*e);
		}
		e++;
	}
	
	while(top != -1)
	{
		printf("%c",pop());
	}
	return 0;
}
