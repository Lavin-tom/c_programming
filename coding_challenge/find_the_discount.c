//find the discount
//Create a function that takes two arguments:
// the original price and the discount percentage as integers and returns the final price after the discount.

#include<stdio.h>
int main()
{
	int price;
	float discount;
	printf("enter price and discount\n");
	scanf("%d %f",&price,&discount);
	
	float total;
	total=price-(price*(discount/100));
	printf("total prize: %d\ndiscount: %.2f\ntotal amount to pay after discount: %.2f\n",price,(price*(discount/100)),total);


}
