// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter length of first side %d",side1);
	scanf("%d",&side1);
	
	printf("Enter length of second side %d",side2);
	scanf("%d",&side2);
	
	printf("Enter length of third side %d",side3);
	scanf("%d",&side3);
	
	if (side1==side2 && side2==side3)
	printf("Equilateral Triangle");
	
	else if (side1==!side2 && side2==!side3)
	printf("Scalene Triangle");
	
	else 
	printf("Isosceles Triangle");
	
	return 0;
	
}
