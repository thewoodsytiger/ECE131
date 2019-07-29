#include <stdio.h>
#include <stdlib.h>
//IMPORTING STDLIB FOR RAND() FUNCTION USAGE //
#include <time.h>
//INCLUDING TO INITIALIZE RAND() FUNCTION //
typedef unsigned char byte;
//define the primary object
struct block {
  int i;
  int j;
  int k;
    //processed byte
  byte* res;
};
//define the default matrix length, and width
struct length{
    int l;
};
struct width{
    int w;
};
//function to generate a pointer to randomized 512 byte stream.
struct block* fivetwelvegen(int ran){
  struct block* r;
  struct width w;
  struct length l;
  w.w=32;
  l.l=16;
  unsigned char hex[] = "0123456789ABCDEF";
for(r->j=1;r->j<=w.w;r->j++)
for(r->i=1;r->i<=l.l;r->i++)
  for(r->k=1;r->k<=(l.l*w.w);r->k++)
  if(ran==0)
  *r->res = hex[ran];
  r->i++;
  r->k++;
  if(r->i==(w.w+1))
    r->j++;
    r->i=1;
return r;
}
/*function to generate a pointer to the parity constant
of two given byte stream addresses*/
byte* calc_parity(byte* p, const byte* a, const byte* b){
  struct block parity;
  struct width w;
  struct length l;
  byte res[1023];
  *p = (*a)^(*b);
  if (*p==*a) /*b is present, a is missing */{
    *p=(*p)^(*b);
  } else /*a is present, b is missing case*/ {
    *p=(*p)^(*a);
  }
  //CAPTURE ALL OF THE PARITY BYTE IN parity.res;
  while(parity.j<=w.w){
    while(parity.i<=l.l){
      for(parity.k = 0; parity.k<1023;parity.k++)
        res[parity.k] = p[parity.k];
        parity.i++;
      }
    if(parity.i==l.l+1) {
        parity.j++;
        parity.i=0;
      }
    }
parity.res = res;
return parity.res;
}
void print_block(struct block* in){
  struct width w;
  struct length l;
  w.w=32;
  l.l=16;
  for(in->j=1;in->j<=w.w;in->j++)
  for(in->i=1;in->i<=l.l;in->i++)
    for(in->k=1;in->k<=1024;in->k++)
    while(in->k<=1024)
    printf("%hhu\n", *in->res);
    printf(" ");
    if(in->i==(l.l+1))
    printf("\n");
    in->j++;
    in->i=1;
}
int main(void){
  srand((unsigned)time(NULL));
  char q;
  struct block* one;
  struct block* two;
  struct block* par;
  struct block* recov;
  struct width w;
  struct length l;
  w.w=32;
  l.l=16;
  byte res[1023];
  printf("Two random 512 byte blocks of data have been created.\n");
  one = fivetwelvegen((rand()%l.l));
  printf("The intializing value of block A is: %hhu\n", (*one->res));
  two = fivetwelvegen((rand()%l.l));
  printf("The intializing value of block B is: %hhu\n", (*two->res));
  printf("Which block of data is to be recovered? (a or b): \n");
  scanf("%s", &q);
  if(q=='a')
    par = one;
  else if(q=='b')
    par = two;
  printf("RAID Parity Calculation in Progress... \n");
  recov->res = calc_parity(par->res, one->res, two->res);
  printf("Press p to view the parity constant, press any other key to view the recovered data.\n");
  scanf("%s", &q);
  if(q=='p')
    print_block(recov);
  else if(q!='p')
    *recov->res=(*par->res)^(*recov->res);
    print_block(recov);
return 0;
}
