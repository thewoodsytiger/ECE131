#include <stdio.h>
int main(){
  int ratingCounters[11], i, response;
  int infin = 1;
  for(i=0;i<=10;i++)
    ratingCounters[i]=0;
    printf("Enter your responses. When you are finished enter '999'\n");
    while(infin==1){
      scanf("%d", &response);
      if(response==999){
	infin=0;
	 printf("Goodbye!\n");
        break;
	}
       else if (response<1||response>10){
        printf("Bad response! Enter a different response.\n");
	}
       else{
        ratingCounters[response]++;
	}
	}
	 printf("\n\nRating    Number of Responses\n");
	 printf("------- ----------------------\n");
	 for (i = 1; i <= 10; ++i) {
	 printf("%4i%14i\n", i, ratingCounters[i]);
    }
return 0;
}
