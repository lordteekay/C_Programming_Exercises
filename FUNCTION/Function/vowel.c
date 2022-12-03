#include <stdio.h>
void main(){
  int isVowel(char),isDigit(int);
 /* char ch;*/
  printf("Enter a small letter character to see if it is a vowel or not:");
 /* scanf("%c",&ch);*/
  int ch/*=getchar();*/;
  while((ch=getchar())!='\n'){
    if(isVowel(ch)==1) printf("%c is a vowel\n",ch);
    else if(isVowel(ch)==0) printf("%c is not a vowel\n",ch);
    }
}

int isVowel(char n){
  if(n=='a'||n=='A') return 1;
  else if(n=='e'||n=='E') return 1;
  else if(n=='i'||n=='I') return 1;
  else if(n=='o'||n=='O') return 1;
  else if(n=='u'||n=='U') return 1;
  else return 0;
}

