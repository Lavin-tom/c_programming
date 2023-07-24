//auto coding 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int main() 
{
    FILE *fpr;   // input file pointer
    FILE *fpw;  // output file pointer
    char ch;
    int delay;

    char *sourceFile =(char*)malloc(15*sizeof(char));
    char *destinationFile = (char*)malloc(15*sizeof(char));

    printf("enter source file name with extension\n");
    scanf(" %s",sourceFile);

    printf("enter destination file name\n");
    scanf("%s",destinationFile);

    printf("enter delay of typing, recommended 150000\n");
    scanf("%d",&delay);
    
    fpr = fopen(sourceFile, "r");
    fpw = fopen(destinationFile, "w");

    if (fpr == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    if (fpw == NULL) {
        printf("Error opening output file.\n");
        fclose(fpr);  // Close the input file before returning
        return 1;
    }

    while ((ch = fgetc(fpr)) != EOF) {
        fputc(ch, fpw);
        fflush(fpw);  // Flush the output buffer to ensure immediate write
        usleep(delay);  // Delay in microseconds (100000 = 100 milliseconds)
    }
    
    printf("File copied successfully.\n");

    fclose(fpr);
    fclose(fpw);
    free(sourceFile);
    free(destinationFile);
    return 0;
    }
