#include <stdio.h>

struct entry
{
     int value;
     struct entry *next;
};

void insertEntry(struct entry *insert, struct entry *index){
  insert->next=index->next;
  index->next = insert;
}

int main (void){
  struct entry a, b, c, new;
  struct entry *start=&a;
  a.next=&b;
  b.next=&c;
  c.next=NULL;

printf("Enter 3 values for the list\n");
scanf("%d %d %d", &a.value, &b.value, &c.value);

printf("Enter the value to be added to the list\n");
scanf("%d", &new.value);

printf("List before: ");
  while(start!=0){
    printf("%i ", (*start).value);
    start=start->next;
  }
printf("\n");

//reset list and run insert
start = &a;
insertEntry(&new, &c);

printf("List after: ");
  while (start!=0){
    printf("%i ", (*start).value);
    start=start->next;
}
printf("\n");

return 0;
}
