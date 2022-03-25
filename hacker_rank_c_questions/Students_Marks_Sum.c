//Students Marks Sum
//find the total marks obtainted by boys or girl 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
  
	int i,sumg=0,sumb=0;
	for(i=0;i<number_of_students;i++)
	{
		if(i==0 || i%2==0)
			sumb=sumb+marks[i];
		else
			sumg=sumg+marks[i];
	}
	if(gender=='g')
		return sumg;
	else
		return sumb;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d\n", sum);
    free(marks);
 
    return 0;
}
