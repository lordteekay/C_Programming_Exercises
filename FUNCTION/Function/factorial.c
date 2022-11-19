#include <stdio.h>

/*
 * main:Find the factorial of a number
 */
void main(){
  int nfac=1,num;
  printf("Enter a positive number:");
  scanf("%i",&num);
  for(int h=2;h<=num;h++){
    nfac=nfac*h;
  }
  printf("The factorial of %i is:%i\n",num,nfac);
}
