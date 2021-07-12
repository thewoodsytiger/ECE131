#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef unsigned char byte;

byte* calc_parity(byte* p, const byte* a, const byte* b)
  {
    int i = 0;
    while(i<16)
      {
        p[i]=(a[i]^b[i]);
        i++;
      }
  return p;
}

void brint(byte* in)
  {

  int i = 0;

  while(i<16)
    {
      printf("%hhu", in[i]);

      if(i%32==0)
      {
        printf("\n");
      }
      else if (i%2==0)
      {
        printf(" ");
      }
    i++;
    }
  }

int main(void){
  srand((unsigned)time(NULL));
  byte a[16], b[16], c[16];
  byte* ptr_a;
  ptr_a = &a;
  byte* ptr_b;
  ptr_b = &b;
  byte* ptr_c;
  ptr_c = &c;
  int i = 0;
  char q;

  printf("Creating two random 16-byte data streams...\n");

  while(i<16)
    {
      a[i]=(rand()%30);
      b[i]=(rand()%30);
      i++;
    }

    ptr_c = calc_parity(ptr_c, ptr_a, ptr_b);

  printf("The intializing value of block A is: %hhu\n", a[0]);
  printf("The intializing value of block B is: %hhu\n", b[0]);
  printf("\n\n\nRAID Recovery in progress... \n");
  printf("Which block of data is to be recovered? (a or b): \n");
  scanf("%c", &q);
    if(q=='a')
      {
        brint(ptr_c);
        printf("\n\n\n\n\n");
        printf("Parity contant calculated. Performing recovery.....");
        ptr_c = calc_parity(ptr_a, ptr_b, ptr_c);
        printf("\n\n\n\n\n");
        brint(ptr_b);
        if(ptr_c==ptr_a)
          {
            printf("\n\n\n\n\n");
            brint(ptr_c);
            printf("\n\n\nSuccess! Byte A has been recovered, and matches bit for bit! It is printed above.\n");
            return 0;
          }
    }
    else if(q=='b')
      {
        brint(ptr_c);
        printf("\n\n\n\n\n");
        printf("Parity contant calculated. Performing recovery.....");
        ptr_c = calc_parity(ptr_b, ptr_a, ptr_c);
        printf("\n\n\n\n\n");
        brint(ptr_a);
        if(ptr_c==ptr_b)
          {
            printf("\n\n\n\n\n");
            brint(ptr_c);
            printf("\n\n\nSuccess! Byte B has been recovered, and matches bit for bit! It is printed above.\n");
            return 0;
          }
  } else {
    printf("Not valid. Restart the program and try again.\n");
    return 1;
  }
  return -1;
}
