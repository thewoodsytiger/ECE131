#include <stdio.h>

struct entry
{
     int value;
     struct entry *next;
};

void removeEntry(struct entry *index){
  index->next=index->next->next;
}

int main (void){
  struct entry a, b, c, d, end;
  struct entry *start;
  a.next=&b;
  b.next=&c;
  c.next=&d;
  d.next=NULL;
  end.next=&a;

printf("Enter 4 values for the list\n");
scanf("%d %d %d %d", &a.value, &b.value, &c.value, &d.value);

start = &a;
removeEntry(&b);

//IS IT POSSIBLE TO RECORD THIS VALUE FROM THE USER? I WAS HAVING TROUBLE W SCAN
printf("List with removal of index 2: ");
  while (start!=0){
    printf("%d ", (*start).value);
    start=start->next;
}
printf("\n");

return 0;
}
