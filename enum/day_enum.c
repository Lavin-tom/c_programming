//enum example
#include<stdio.h>
int main()
{
	enum day {sun,mon,tue,wed,thu,fri,sat}d; //d is the enum variable

	d=sun;
	if(d==mon)
		printf("working day\n");
	else if(d==sat)
		printf("Half working day\n");
	else
		printf("holiday\n");

}
