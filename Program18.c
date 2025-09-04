// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
	int side1,side2,side3;
	
	printf("Enter value of first side: ");
	scanf("%d",&side1);
	
	printf("Enter value of second side: ");
	scanf("%d",&side2);
	;
	printf("Enter value of third side: ");
	scanf("%d",&side3);
	
	if((side1+side2>side3 || side3+side2>side1 || side1+side3>side2) && side1!=0 && side2!=0 && side3!=0)
		if(side1==side2 || side2==side3 || side1==side3)
		{
			printf("As two sides of the triangle are same thus the given sides of the triangle represents an Isosceles triangle");
		}
		else if(side1==side2==side3)
		{
			printf("As three sides of the triangle are same thus given sides of the triangle represents an Equilateral triangle");
		}
		else
		{
			printf("As all the three sides of the triangle are different thus the triangle represents an Scalene triangle");
		}
	else
	{
		printf("Enter correct value of sides so that it forms a traingle");
	}
	
	return 0;
}
