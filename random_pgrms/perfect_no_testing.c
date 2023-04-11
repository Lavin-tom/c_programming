//perfect no with certain conditions

#include <stdio.h>
int running = 1;
int perfectNo(int num)
{
    int i, rem, sum = 0;
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int sum, num, option=1, flag = 0;
    char ch = 'y';
    while (running)
    {
        if (flag == 1)
        {
            printf("Do you want to continue(y/n)\n");
            scanf(" %c", &ch);
            if(ch == 'y')
                option = 1;
            else 
                option = 2;
        }
        flag = 1;
            switch (option)
            {
            case 1:
                printf("enter no\n");
                scanf("%d", &num);
                if (num < 0)

                    printf("positive no only\n");
                else if (num >= 220)

                    printf("no beyond the range\n");
                else
                {
                    sum = perfectNo(num);
                    flag = 1;
                    if (sum == num)

                        printf("perfect no\n");
                    else

                        printf("not a perfect no\n");
                }
                break;
            case 2:
                running = 0;
                break;
            }
        
    }
}