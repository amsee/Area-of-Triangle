/* Write a C program that calculates the area of a triangle.
Your program prompts the user to enter the height and base, accepts the user's input in decimal format, 
multiplies the product of the height and base by 0.5, 
stores the area in memory and outputs the area to 2 decimal places along with its address in memory in hexadecimal format 
(use the %p conversion specifier to output an address).*/

// Calculate Area of Triangle
// area.c

#include <stdio.h> 

int main(void) {

	double height;
	double base;
	double product;
	double area;

	// prompt user to enter height and base
	printf("Enter height of triangle: ");
	scanf("%lf", &height); // accept user input in decimal format
	printf("Enter base of triangle: ");
	scanf("%lf", &base);
	// multiply product of height and base by 0.5
	product = (height * base);
	// store area in address
	area = product * 0.5;
	// output area to 2 decimal places along with its address in memory in hexidecimal format using %p conversation specifier 
	printf("The area of the triangle is: %p", height);
	printf("\n");

	return 0;
}

