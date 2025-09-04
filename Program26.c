// Q26: Write a program to print numbers from 1 to n.

#include <Stdio.h>

int main()
{
	int n;
	printf("Enter value for n:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		printf(" %d",i);
	}
	return 0;
}
