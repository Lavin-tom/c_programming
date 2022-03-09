//wap to find the two strings are anagram or not
//without functions

#include<stdio.h>
int main()
{
        char a[10],b[10];
        printf("enter the string1\n");
        scanf("%s",a);
        printf("enter the string2\n");
        scanf("%s",b);

        int j,i,k,temp1,temp2;
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

        printf("\nAfter removing special character,string a become : %s\n",a);

        //for string 2
        for(j=0;b[j];j++)
        {
                //check for alphabet ascii value here
                if((b[j]>=65 && b[j]<=90) || (b[j]<=122 && b[j]>=97))
                {}
                else
                {
                        for(k=j;b[k];k++)
                                b[k]=b[k+1];
                        j--;
                }

        }

        printf("After removing special character,string b become : %s\n",b);
        printf("\n");

        //conversion to upper case
        for(i=0;a[i];i++)
        {
                if(a[i]>=97 && a[i]<=122)
                a[i]=a[i]^32;
        }

        for(j=0;b[j];j++)
        {
                if(b[j]>=97 && b[j]<=122)
                b[j]=b[j]^32;
        }

        printf("After convert string one into upper case :%s\n",a);
        printf("After convert string two into upper case :%s\n",b);
        printf("\n");

        //sorting of string one
        for(i=0;a[i];i++)
        {
                for(j=i+1;a[j];j++)
                {
                if(a[i]>a[j])
                        {
                                temp1=a[i];
                                a[i]=a[j];
                                a[j]=temp1;
                        }
                }
        }
        printf("After sorting first string :%s\n",a);

        //sorting of string two
        for(i=0;b[i];i++)
        {
                for(j=i+1;b[j];j++)
                {
                if(b[i]>b[j])
                {
                        temp2=b[i];
                        b[i]=b[j];
                        b[j]=temp2;
                }
                }
        }
        printf("After sorting second string :%s\n",b);
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
