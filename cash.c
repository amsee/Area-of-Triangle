// Input Output
// cash.c

#include <stdio.h>

int main(void) {

	double amount;

	printf("How much money do you have in your pockets? "); // prompt user for amount
	scanf("%lf", &amount); // accept user input and store in the address of amount

	printf("The amount of money in your pocket is %.2lf", amount); // display amount entered by user
	printf("\n");

	return 0;
}