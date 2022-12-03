#include <stdio.h>
int main(){
  int isPerfectSquare(int),num;
  printf("Enter an integer to check if it is a perfect square or not:");
  scanf("%i",&num);
  while(num!=0){
    if(isPerfectSquare(num)==1) printf("%i is a perfect square\n",num);
    else printf("%i is not a perfect square\n",num);
    printf("Enter an integer to check if it is a perfect square or not:");
    scanf("%i",&num);
  }
}

int isPerfectSquare(int n){
  /*perfect square for 100 and less interger*/
  /*for(int h=1;h<=100;h++){
    if(n/h==h) return 1;
    if(h==100 && (n/h)!=h) return 0;
  }*/
  int h=1;
  while(h<=100){
    if(h*h==n){
      return 1;
      break;
    }
    else if(h*h>n) return 0;
    else{
        h++;
    }
  }
}
