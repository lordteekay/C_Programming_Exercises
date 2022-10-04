#include <stdio.h>
/**
*main - entry point
*This is the program to find what kind of triangle is it when given the values of each sides of the triangle
*Returns :Nothing

*/
void main(){
	double sideA,sideB,sideC;
	printf("Enter the values of each sides of the triangle:");
	scanf("%lf %lf %lf",&sideA,&sideB,&sideC);
	if(sideA==((sideB*sideB)+(sideC*sideC))||sideB==((sideA*sideA)+(sideC*sideC))||sideC==((sideA*sideA)+(sideB*sideB))) printf("It is a right angle triangle\n");
	else if((sideA<=0||sideB<=0||sideC<=0)||(sideA>=sideB+sideC||sideB>=sideA+sideC||sideC>=sideA+sideB)) printf("Not a triangle\n");
	else if(sideA!=sideB&&sideB!=sideC&&sideA!=sideC) printf("This is a scalene triangle\n");
	else if((sideA==sideB&&sideA!=sideC)||(sideB==sideC&&sideB!=sideA)||(sideC==sideA&&sideC!=sideB)) printf("This is an isosceles triangle\n");
	else printf("This is an equilateral triangle\n");
}
