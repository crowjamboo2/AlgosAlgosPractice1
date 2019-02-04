/*

ARMSTRONG ALGORHITHM implementation in C

EVALDAS PAULAUAS PI18E

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

	int number, originalNumber, remainder, result = 0, n = 0;

	printf("Enter an integer: ");
	scanf_s("%d", &number);

	originalNumber = number;

	while (originalNumber != 0)
	{
		originalNumber /= 10;
		++n;
	}

	originalNumber = number;

	while (originalNumber != 0)
	{
		remainder = originalNumber % 10;
		printf("\n remainder %d", remainder);
		result += pow(remainder, n);
		printf("\n result %d", result);
		originalNumber /= 10;
		printf("\n original number %d", originalNumber);
	}

	if (result == number)
		printf("%d is an Armstrong number. \n", number);
	else
		printf("%d is not an Armstrong number. \n", number);

	system("pause");

	return 0;
}

/*
Pseudo code:

READ n 
temp=n 
sum=0 

WHILE n>=0 
sum=sum+(n%10)*(n%10)*(n%10) n=n/10 
ENDWHILE 

IF sum==temp WRITE "NUMBER IS AN ARMSTRONG NUMBER"
ELSE WRITE "NUMBER IS NOT AN ARMSTRONG NUMBER"

*/