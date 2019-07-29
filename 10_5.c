#include <stdio.h>

struct doubleLinkEntry
{
     struct doubleLinkEntry *prev;
     int value;
     struct doubleLinkEntry *next;
};

int main(void){
struct doubleLinkEntry a, b, c, d, e;
struct doubleLinkEntry *ptr, *index;
a.prev=NULL;
a.next=&b;
b.prev=&a;
b.next=&c;
c.prev=&b;
c.next=&d;
d.prev=&c;
d.next=&e;
e.prev=&d;
e.next=NULL;

printf("Enter 5 values for the list\n");
scanf("%d %d %d %d %d", &a.value, &b.value, &c.value, &d.value, &e.value);

printf("List reversed: ");
int i = 0;
for (index=&e;index!=NULL;index=index->prev){
  ptr->prev=index->prev;
  ptr->next=index->next;
  ptr->value=index->value;
  printf("%d ", ptr->value);
}
printf("\n");
return 0;
}
