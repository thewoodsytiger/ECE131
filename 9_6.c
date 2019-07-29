#include <stdio.h>
int main(void){
  int n;
  int m;
  int removeString(char text[], int start, int del);
  char s1[81];
  printf("Enter the string to delete.\n");
  scanf("%s", s1);
  printf("Enter the index for the start of the delete stream\n");
  scanf("%d", &n);
  printf("How many characters would you like to delete?\n");
  scanf("%d", &m);
  return removeString(s1, n, m);
}
int removeString(char text[], int start, int del){
      int i = 0;
      while (i<=del){
      text[start] = '\b';
      i++;
    }
    printf("The new text is\n%s\n", text);
    return 0;
}
