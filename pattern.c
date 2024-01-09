#include<stdio.h>

void main(){

int i,j,s;

for(i=1; i<=5; i++){
	for(s=4; s>=i; s--){
		printf(" ");
	}


	for(j=1; j<=1; j++){

		 printf("* ");

	}
	for(s=i-1; s>=j; s--){
		printf("  ");
	}
	for(j=1; j<=s; j++){

		 printf("*");

	}

	printf("\n");
}

}
