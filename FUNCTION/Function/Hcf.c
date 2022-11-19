#include <stdio.h>

/*
 * hcf:finds the highest common factor between two numbers
 */

int main(){
  int hcf(int,int);//Prototype of the hcf function
  int m,n;
  printf("Enter the value of the two integers:");
  scanf("%i %i",&m,&n);
  while(m>0 && n>0){
    int HCF=hcf(m,n);
    printf("The hcf between %i and %i is:%i\n",m,n,HCF);
    printf("Input '0 0' to terminate the program\n");
    printf("Enter the value of the two integers:");
    scanf("%i %i",&m,&n);
  }
}
int hcf(int a,int b){
  while(b!=0){
    int r = a%b;//Find the module of a and b
    a=b;//Change the variable a to the value of b
    b=r;//Change the variable b to the value of r
  }
  return a;//Return the value of a as the value of a will be the highest common factor
}
