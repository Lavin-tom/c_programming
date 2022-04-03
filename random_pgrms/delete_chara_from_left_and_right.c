//lms question

#include<stdio.h>
void print_id(char *);
void test_case_1(void);
void test_case_2(void);
char *delete_char_right(char* ,int, char);
char *delete_char_left(char* ,int, char);

int  main()
	{
		print_id("V21OE3L1\n");
		test_case_1();
		test_case_2();
	}

void test_case_1(void)
{
	char *res1,*res2;
	char input1[15]="abcabcabcabc";
	char input2[15]="paawanky";
	printf("in test case 1\n");
	res1=delete_char_right(input1,3,'b');
	printf("%s\n",res1);
	res2=delete_char_left(input2,1,'a');
	printf("%s\n",res2);
}

void test_case_2(void)
{
	char *res1,*res2;
	char input1[15]="pqrpqrpqrpqr";
	char input2[15]="pkypkypky";
	printf("in test case 2\n");

	res1=delete_char_right(input1,2,'r');
	printf("%s\n",res1);
	res2=delete_char_left(input2,2,'y');
	printf("%s\n",res2);
}

void print_id(char *p)
{
	int count=0;
abc:
	printf("%c",*(p+count));
	count++;
if(count<=8)
	goto abc;
}

char *delete_char_right(char *str,int num,char ch)
{
	int string_length=0,count=0,delete_count=0;
	for(int i=0;str[i];i++)
		string_length++;

	for(int j=string_length;j>=0;j--)
        {
		if(delete_count<num)
		{
                if(str[j]==ch)
                       {
			       delete_count++;
			       for(int k=j;str[k];k++)
			       {
				       str[k]=str[k+1];
			       }
                       }
		}
		else
			break;
        }
	return str;
}

char *delete_char_left(char *str, int num,char ch)
{
	int string_length=0,count=0,delete_count=0;
	for(int i=0;str[i];i++)
		string_length++; 


    for(int j=0;str[j];j++)
        {
		if(delete_count<num)
			{
                if(str[j]==ch)
                       {
			       delete_count++;
			       for(int k=j;str[k];k++)
			       {
				       str[k]=str[k+1];
			       }
                       }
		}
		else
			break;
        }
	return str;}
