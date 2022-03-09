//wap to print the srings are anagram or not
//with functions

#include<stdio.h>
void check_for_alphabet(char * a);
void convert_to_uppercase(char *a);
int main()
{
        char a[20],b[20];
        int i,j;
        printf("enter the string1\n");
        scanf("%s",a);
        printf("enter the string2\n");
        scanf("%s",b);

        check_for_alphabet(a);
        check_for_alphabet(b);
        printf("\nAfter removing special characters, string a become : %s\n",a);
        printf("After removing special characters, string a become : %s\n",b);
        printf("\n");

        convert_to_uppercase(a);
        convert_to_uppercase(b);
        printf("After convert string one into upper case :%s\n",a);
        printf("After convert string two into upper case :%s\n",b);
        printf("\n");

        sorting(a);
        sorting(b);

        printf("After sorting string a become: %s\n",a);
        printf("After sorting string b become: %s\n",b);
        printf("\n");

        //comparison of two strings
        for(i=0;a[i];i++)
        {
                if(a[i]!=b[i])
                        break;
        }
        if(a[i]=='\0')
        printf("strings are anagram \n");
        else
        printf("strings are not an anagram \n");
}

        //function body of check for alphabet
        void check_for_alphabet(char *a)
        {
                int i,j;
        for(i=0;a[i];i++)
        {
                //check for alphabet ascii value here
                if((a[i]>=65 && a[i]<=90) || (a[i]<=122 && a[i]>=97))
                {}
                else
                {
                        for(j=i;a[j];j++)
                        a[j]=a[j+1];
                        i--;
                }
        }
        }

        //function body of  convert each alphabet into uppercase
        void convert_to_uppercase(char *a)
        {
                int i;
        for(i=0;a[i];i++)
        {
                if(a[i]>=97 && a[i]<=122)
                a[i]=a[i]^32;
        }
        }

        //function body of sorting
        void sorting(char *a)
        {
                int i,j,temp;
        for(i=0;a[i];i++)
        {
                for(j=i+1;a[j];j++)
                {
                if(a[i]>a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        }
