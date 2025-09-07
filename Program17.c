// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter value for x square %d",a);
	scanf("%d",&a);
	
	printf("Enter value for x %d",b);
	scanf("%d",&b);
	
	printf("Enter value for c %d",c);
	scanf("%d",&c);
	
	int d;
	d = (b*b-4*a*c);
	
	int root1,root2;
	root1 = (-b+sqrt(d))/2*a;
	root2 = (-b-sqrt(d))/2*a;
	
	if (d>0)
	printf("Roots are real and different %d,%d",root1,root2);
	
	else if (d<0)
	printf("Roots are imaginery and complex");
	
	else if (d==0)
	printf("Roots are Real and Same %d",root1);
	
	return 0;
}
