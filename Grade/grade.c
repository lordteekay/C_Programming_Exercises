#include <stdio.h>
#define GradeF 50
#define GradeC 65
#define GradeB 80

/**
*main-entry point
*A program to calculate the grade of a student
*Return:nothing
*/
void main(){
	double score;
	printf("Enter the score in your test:");
	scanf("%lf",&score);
	if(score<GradeF) printf("You had a Grade F\n");
	else if(score>=GradeF && score<GradeC) printf("You had a Grade C\n");
	else if(score>=GradeC && score<GradeB) printf("You had a Grade B\n");
	else printf("You had a Grade A\n");
}
