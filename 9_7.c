#include <stdio.h>

char s3[32], s4[32];
int g;

int main(void){
  int insertString(char text[], char insert[], int dex);
  printf("Please enter your string.\n");
  scanf("%[^\n]%*c", s3);
  printf("Please enter the string to be inserted.\n");
  scanf("%[^\n]%*c", s4);
  printf("Please enter the index number of character you want to insert at.\n");
  scanf("%d", &g);

  return insertString(s3, s4, g);
}


int insertString(char text[], char insert[], int dex){
  //init Index for general (i) text[](dex2) insert[](dex3)
  int i, dex2, dex3 = 0;
  //index text[]
  while(text[i]!='\0')
    i++;
    dex2 = i;
  //index insert[]
  while(insert[i]!='\0')
    i++;
    dex3 = i;

  for (i=dex2;i>=dex;i--)
    text[dex2+i] = text[i];
   for(i=0;i<dex3;i--)
    text[dex] = insert[i];
    dex++;

    printf("%s\n", text);
    return 0;
  }
