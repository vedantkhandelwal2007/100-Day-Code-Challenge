// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
	float radius,area,circumference,pi;
	
	printf("Enter Radius of the circle: ");
	scanf("%f",&radius);
	
	pi=3.14159;
	
	area=pi*radius*radius;
	
	circumference=2*pi*radius;
	
	printf("The area of the circle with the given radius is: %0.2f \n",area);
	
	printf("The circumference of the circle with the given radius is: %0.2f",circumference);
	
	return 0;
}
