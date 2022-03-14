//wap to find the occurance of character of string
//arrange elements in alphabetical order
//find the occurance of elements

#include<stdio.h>
#include<string.h>
void arrange (char *a,char *b);
void occurance (char *b);
int main()
{
        char a[20],b[20];
        printf("enter the string\n");
        scanf("%s",a);

        arrange(a,b);
        occurance(b);
}

//arranging the string in ascending order
void arrange(char *a,char *b)
{
        int i,j,k=0;
        for(j=97;j<=122;j++)
        {
                for(i=0;a[i];i++)
                {
                        if(a[i]==j)
                        {
                                b[k]=a[i];
                                k++;
                        }
                }
        }
        b[k]='\0';
}

//occurance of elements in an array
void occurance(char *b)
{
        int i,j,count=0,in=0;
        char k;
        for(i=0;b[i];i=i+in)
        {
                k=b[i];
                for(j=0;b[j];j++)
                        {
                                if(k==b[j])
                                        count++;
                        }
         printf("%c:%d ",b[i],count);
	 in=count;
	 count=0;
	}	
	printf("\n");
}
