// wap to find no of alphabets is in a string
#include <stdio.h>
int main()
{
    int count = 0, flag;
    char string[50];
    printf("enter string\n");
    scanf("%[^\n]s", string);
    printf("characters not in string: ");
    for (int j = 97; j <= 122; j++)
    {
        flag = 0;
        for (int i = 0; string[i]; i++)
        {
            if (string[i] == j)
            {
                count++;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%c ",j);
    }
    printf("\nno of characters in string: %d\n", count);
}