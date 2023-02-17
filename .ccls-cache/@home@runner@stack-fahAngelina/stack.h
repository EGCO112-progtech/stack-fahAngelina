
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, int value){
  NodePtr new_node=(NodePtr)malloc(sizeof(Node));
  if(new_node){
     new_node->data=value;
     new_node->nextPtr=s->top;
     s->top=new_node;
     s->size++;
  }
}

int pop(StackPtr s){
   NodePtr t = s->top;
   if (s->size>0){
   int value= t->data;//(*top)->data
   s->top=t->nextPtr;//(*top)->nexPtr
   free(t);
   return value;
     }
  printf("Empty Stack");
  return 0;
}
void pop_all(StackPtr s){
  while(s->size>0){//s->top
    printf("%d\n",pop(s));
  }
}
#endif
