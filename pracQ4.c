/*
A program to print a factorial using udf
*/

#include <stdio.h>

int factorial(int n) {
	
    if (n == 0) return 1;
    
	else    return n * factorial(n - 1);

}

	int main() {
	int num;
	
    printf("Enter any number:- ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
}
