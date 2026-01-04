#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 20
void postfix();
int priority(char a);
void push(char a);
char pop();
char temp;
int top=-1;

char source[MAX],target[MAX];
char stack[MAX];

int main()
{
	printf("enter infix exp:\n");
	gets(source);
	postfix();
}

void postfix()
{
	int i=0,j=0;
	while(source[i]!='\0')
	{
		if(source[i]=='(')
		{
			push(source[i]);
			i++;
		}
		else if(source[i]==')')
		{
			while(top!=-1&&stack[top]!='(')
			target[j]=stack[top];
			i++;
			j++;
			if(top==-1)
			{
				printf("incorrect exp");
				exit(0);
			}
			temp=pop();
		}
		else if(isalpha(source[i])||isdigit(source[i]))
		{
			target[j]=source[i];
			i++;j++;
		}
		else if(source[i]=='+'||source[i]=='-'||source[i]=='*'||source[i]=='/'||source[i]=='%')
		{
			while(top!=-1&&priority(stack[top])>priority(source[i]))
			{
				target[j]=pop();
				j++;
			}
			push(source[i]);
		}
		else
		{
			printf("invalid exp");
			exit(0); 
		}
	}
}

int priority(char a)
{
	if(a=='%'||a=='*'||a=='/')
	return 1;
	else 
	return 0;
}

void push(char a)
{
	if(top==MAX-1)
	{
		printf("stack overflow");
		return;
	}
	else
	{
		top++;
		stack[top]=a;
	}
}

char pop()
{
	char val;
	if(top==-1)
	{
		printf("stack underflow");
		return 0;
	}
	else
	{
		val=stack[top];
		top--;
	}
	return val;
}








