// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
	int length,breadth,area,perimeter;
	
	printf("Enter length of the rectangle: ");
	scanf("%d",&length);
	
	printf("Enter breadth of the rectangle: ");
	scanf("%d",&breadth);
	
	area=length*breadth;
	
	perimeter=2*(length+breadth);
	
	printf(" The Area of the rectangle is: %d \n",area);
	
	printf("The Perimeter of the rectangle is: %d",perimeter);
	
	return 0;
}
