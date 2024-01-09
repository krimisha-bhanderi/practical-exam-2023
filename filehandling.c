#include <stdio.h>

int leapyear(int *year) {
	
    return ((*year % 4 == 0 && *year % 100 != 0) 
	|| (*year % 400 == 0));
}

 main() {
    FILE *yFile;
    int startYear, endYear,year;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    yFile = fopen("output.txt", "w");

    if (yFile == NULL) {
        printf("File could not open...!\n");

    }

    for ( year = startYear; year <= endYear; ++year) {

        if (leapyear(&year)) 
		{
            fprintf(yFile, "%d is a leap year.\n", year);
        }
    }

    fclose(yFile);

    printf("Leap years written to output.txt\n");


}
