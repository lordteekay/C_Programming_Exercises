#include <stdio.h>

/*
 * main:Find the factorial of a number
 */
int main(){
  int combination(int,int) //Factorial prototype
  int n,r;
  printf("Enter the values of n and r:");
  scanf("%i %i",&n,&r);
  
}
int factorial(int num){
  int nfac=1;
  for(int h=2;h<=num;h++){
    nfac=nfac*h;
  }
  return nfac;
}
int combination(int n,int r){
  int factorial(int);//Factorial protoype
  return factorial(n)/(factorial(n-r)*factorial(r));
}

