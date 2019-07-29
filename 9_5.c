#include <stdio.h>

int n;
int m;

int main(void){

int findString(char stringIn[], char stringKey[]);
char s1[81], s2[81];
  printf("Please enter the input string to be searched\n");
  scanf("%[^\n]%*c", s1);
  printf("Please enter the word to look for\n");
  scanf("%[^\n]%*c", s2);
  if(findString(s1,s2)!=-1){
    printf("The word is in the string! It starts at character %d\n", findString(s1,s2));
  } else {
    printf("The word is not in the string.\n");
  }
  return 0;
}

 int findString(char stringIn[], char stringKey[]){
  int isWord = 1;
  m=0;
  for (n=0;stringIn[n]!='\0';n++){
    if(stringIn[n]==stringKey[m]){
      if(isWord==1){
        isWord=0;
      }
      m++;
      if(stringKey[m]=='\0'){
        int locale = n-m+1;
        //locale = index for the "real" character
        return locale;
      }
    } else {
       m=0;
       isWord=1;
    }
  }
  return -1;
}
