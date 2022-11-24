#include <stdio.h>

/*
 * main:Find the factorial of a number
 */
void main(){
  int factorial(int);//factorial prototype
  printf("n   n!\n");
  for(int p=0;p<=8;p++){
    printf("%i=%4i\n",p,factorial(p));
  }
}
int factorial(int num){
  int nfac=1;
  for(int h=2;h<=num;h++){
    nfac=nfac*h;
  }
  return nfac;
}
