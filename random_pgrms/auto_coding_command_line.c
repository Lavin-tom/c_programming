//auto coding 
//execute using ./a.out <source_file.c> <destination_file.c> <delay> 150000 recommended

#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fpr;   // input file pointer
    FILE *fpw;  // output file pointer
    char ch;
    int ret;

    if (argc != 4) {
        printf("Usage: %s <input_file> <output_file> <delay_in_typing microseconds>\n", argv[0]);
        return 1;
    }
    //find the delay value
    //convert string value to int
    int len = strlen(argv[3]),i=0,p,sum=0,l;
    l = len-1;
    while(len>i)
    {
        p = pow(10,l);
        sum = sum + ((argv[3][i] - 48) * p);
        i++;
        l--;
    }
    printf("argv[3]:%d\n",sum);
    
    fpr = fopen(argv[1], "r");
    fpw = fopen(argv[2], "w");

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

        usleep(sum);  // Delay in microseconds (100000 = 100 milliseconds)
    }
    
    printf("File copied successfully.\n");

    fclose(fpr);
    fclose(fpw);

    return 0;
    }
