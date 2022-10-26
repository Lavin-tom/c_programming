#include<stdio.h>
#include"avg_functions_multiple_file_compilation.h"
int main()
{
        int avg;
        //function call
        avg=average();
        printf("function call 1:avg is %d\n",avg);

        avg=average();
        printf("function call 2 :avg is %d\n",avg);
}
