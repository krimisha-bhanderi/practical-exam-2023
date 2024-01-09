// C program to find the maximum number out of the three

#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A:- ");
	scanf("%d", &A);
	
	printf("Enter the numbers B:- ");
	scanf("%d", &B);
	
	printf("Enter the numbers C:- ");
	scanf("%d", &C);
	
	if (A >= B && A >= C)
		printf("%d is the largest number", A);

	else if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	else
		printf("%d is the largest number", C);

	return 0;
}

