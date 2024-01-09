/*
a number divisible by 3 and 5 using udf
*/

#include<stdio.h>
void divide(int n){
	
    if(n%3==0&&n%5==0) printf("the number is divisible by 3 and 5\n");
    		
	else  printf("the number is not divisible by 3 and 5\n");



}
main(){
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	divide(n);
}
