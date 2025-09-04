// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
	int num1,num2;
	printf("Enter Number one:");
	scanf("%d",&num1);
	
	printf("Enter Number two:");
	scanf("%d",&num2);
	
	char ch;
	printf("Enter Function:");
	scanf(" %c",&ch);
	
	int result;
	switch (ch)
	{
		case '+':
			result=num1+num2;
			break;	
		case '-':
			result=num1-num2;
			break;	
		case '*':
			result=num1*num2;
			break;	
		case '/':
			result=num1/num2;
			break;	
		case '%':
			result=num1%num2;
			break;	
	}
	printf("%d",result);
	return 0;
}
