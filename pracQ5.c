#include <stdio.h>

int main() {
    int array[5][5];
    int sum = 0;
    int i,j;


    printf("Enter the elements of the 5x5 array:\n");
    for ( i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }


    printf("\nThe 2D array is:\n");
    for ( i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {

            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d", array[i][j]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("The boundary elemnts of array is:");


  

    return 0;
}
