#include <stdio.h>
int main(){
  int whichTriangle(int,int,int),numA,numB,numC;
  printf("Enter the value of the 3 sides of the triangle:");
  scanf("%i %i %i",&numA,&numB,&numC);
  int triangle = whichTriangle(numA,numB,numC);
  if(triangle==1) { 
      printf("The triangle is an scalene triangle\n");
   }
  else if(triangle==2){
      printf("The triangle is an isosceles triangle\n");
   }
   else if(triangle==3){
      printf("The triangle is an equilateral triangle\n");
   }
   else {
      printf("This is not a triangle\n");
   }
}

int whichTriangle(int a,int b,int c){
  if((a==b&&b==c)&&(a!=0)) return 3;
  else if((a==b||b==c||a==c)&&(b!=0&&c!=0&&a!=0)) return 2;
  else if((a!=b&&b!=c)&&a!=c) return 1;
  else return 0;
}
