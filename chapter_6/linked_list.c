/* Simple Singly Linked List */
#include <stdlib.h>
#include <stdio.h>

typedef struct node *Nodeptr;

typedef struct node {
  int data;
  Nodeptr next;
} LinkedListNode;

Nodeptr head;
static Nodeptr nodealloc(void);
static void add(int);
static void print(void);

static Nodeptr
nodealloc(void)
{
  return (Nodeptr)malloc(sizeof(LinkedListNode));
}

static void
add(int d)
{
  Nodeptr new_node = nodealloc();
  new_node->data = d;

  if (head == NULL){
    // list is empty
    head = new_node;
    head->next = NULL;
  }else{
    new_node->next = head;
    head = new_node;
  }
}

static void
print(void)
{
  Nodeptr current = head;
  if (current == NULL){
    printf("List is empty!");
  }else{
    printf("List Elements : \n");
    while(current != NULL)
      {
        printf("%d\n", current->data);
        current = current->next;
      }
  }
}

int main(void)
{
  head = NULL;
  add(1);
  add(3);
  add(2);
  print();
  return 0;
}
