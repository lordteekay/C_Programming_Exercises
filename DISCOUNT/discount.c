#include <stdio.h>
int main(void){
	int price;
	double discount,discountAmt,discountPrice,originalPrice;
	printf("What is the price?");
	scanf("%d",&price);
	printf("\nWhat is the discount percent?");
	scanf("%lf",&discount);
	originalPrice = price;
	discountAmt = price*((double)discount/100);
	discountPrice = originalPrice - discountAmt;
	printf("The original price is:$%f\n",originalPrice);
	printf("The discount Amount is:$%f\n",discountAmt);
	printf("The amount to pay is:$%f\n",discountPrice);
	
	return 0;

}
