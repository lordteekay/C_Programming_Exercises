#include <stdio.h>

void main(){
  int isEven(int),num;
  printf("Enter an integer to determine if it is even or odd:");
  scanf("%i",&num);
  printf("If the number is even we get one,but if it is odd we get zero:%i\n",isEven(num));
}

int isEven(int n){
  if(n%2==0) return 1;
  return 0;
}
