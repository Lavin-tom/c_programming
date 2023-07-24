//copying one file from another
//fflush The fflush function is used to flush (or clear) the output buffer of a stream.
//we can see the added value in real time

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    FILE *fpr;   // input file pointer
    FILE *fpw;  // output file pointer
    char ch;
    int ret;

    if (argc != 3) {
        printf("Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }

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

        usleep(100000);  // Delay in microseconds (100000 = 100 milliseconds)
    }

    printf("File copied successfully.\n");

    fclose(fpr);
    fclose(fpw);
    
    return 0;
    }
