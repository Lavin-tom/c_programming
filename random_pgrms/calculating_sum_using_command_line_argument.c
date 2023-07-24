//command line argument
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char*argv[])
{
    if(argc!=3)
        printf("required two values for calculating sum\n");
    else
    {
        int lenOfArgv1 = strlen(argv[1]);
        int lenOfArgv2 = strlen(argv[2]);

        int total = 0;
        int l = lenOfArgv1,i=0,p,sum=0;
        while(lenOfArgv1>=i)
        {
            p = pow(10,l-1);
            sum = sum + ((argv[1][i] - 48) * p);
            i++;
            l--;
        }
        total += sum;
        sum = 0,i=0,l = lenOfArgv2;
        while(lenOfArgv2>=i)
        {
            p = pow(10,l-1);
            sum = sum + ((argv[2][i] - 48) * p);
            i++;
            l--;
        }
        total += sum;
        printf("%d\n",total);
    }
}