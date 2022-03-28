//small and large triangle 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	
	int *p=malloc(n*sizeof(int));

	for(int i=0;i<n;i++)
	{
		//equation for find the area of triangle using 
		float a=(tr[i].a+tr[i].b+tr[i].c)/2.0;
		p[i]=(a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));
	}
	//bubble sort
	//arranging the elements with a third temp variable 
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				int temp=p[i];
				p[i]=p[j];
				p[j]=temp;

				temp=tr[i].a;
				tr[i].a=tr[j].a;
				tr[j].a=temp;
				
				temp=tr[i].b;
				tr[i].b=tr[j].b;
				tr[j].b=temp;

				temp=tr[i].c;
				tr[i].c=tr[j].c;
				tr[j].c=temp;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
