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
struct block* fivetwelvegen(){
  struct block* r;
  struct width w;
  struct length l;
  w.w=32;
  l.l=16;
  unsigned char hex[] = "0123456789ABCDEF";
  int ran = 0;
for(r->j=1;r->j<=w.w;r->j++)
for(r->i=1;r->i<=l.l;r->i++)
  for(r->k=1;r->k<=(l.l*w.w);r->k++)
  if(ran==0)
    ran=rand()%l.l;
  *r->res = hex[ran];
  r->i++;
  r->k++;
  if(r->i==(w.w+1))
    r->j++;
    r->i=1;
    srand((unsigned)time(NULL));
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
  while(in->j<=w.w){
    while(in->i<=l.l){
      for(in->k = 0; in->k<1024;in->k++)
      printf("%s ",in->res);
      printf(" ");
        in->i++;
      }
    if(in->i==l.l+1) {
      printf("\n");
      in->j++;
      in->i=0;
      }
    }
}
int main(void){
  char q;
  struct block* one;
  struct block* two;
  struct block* par;
  struct block* recov;
  struct width w;
  struct length l;
  byte res[1023];
  printf("Two random 512 byte blocks of data have been created.\n");
//I CANNOT FIGURE OUT HOW TO RANDOMIZE THE FIRST VALUE OF THE FIRST BLOCK WHEN CALLED
//IT IS A RANDOMIZED 512 BYTE VALUE, BUT IS ALWAYS INITIALIZED AT 55
  one = fivetwelvegen();
  printf("The intializing value of block A is: %hhu\n", (*one->res));
  two = fivetwelvegen();
  printf("The intializing value of block B is: %hhu\n", (*two->res));
  printf("Which block of data is to be recovered? (a or b): \n");
  scanf("%s", &q);
  if(q=='a'){
    par = one;
  }else if(q=='b'){
    par = two;
   }else {
    printf("Not valid. Restart the program to attempt Raid Recovery again.\n");
  }
  printf("RAID Parity Calculation in Progress... \n");
  //FUNCTIONALITY ENDS HERE, PRINT_BLOCK IS STILL A WIP
  recov->res = calc_parity(par->res, one->res, two->res);
  printf("Press p to view the parity constant, press any other key to view the recovered data.\n");
  scanf("%s", &q);
  if(q=='p'){
    print_block(recov);
    printf("\n\n");
  }else{
  *recov->res=(*par->res)^(*recov->res);
    print_block(recov);
  }
return 0;
}
