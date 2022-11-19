#include <stdio.h>

/*
 * hcf:finds the highest common factor between two numbers
 * lcm:finds the lowest common facor and can be gotten from the multiplication of the two numbers and divided by the HCF
 */

int main(){
  int lcm(int,int);//Prototype of the hcf function
  int m,n;
  printf("Enter the value of the two integers:");
  scanf("%i %i",&m,&n);
  while(m>0 && n>0){
    int LCM =lcm(m,n);
    printf("The lcm between %i and %i is:%i\n",m,n,LCM);
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
int lcm(int a,int b){
  int hcf(int a,int b);//Prototype of hcf
  int LCM = (a*b)/hcf(a,b);
  return LCM;
}
