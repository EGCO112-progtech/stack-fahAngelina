#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

//void push(NodePtr* top, int x);
//int pop(NodePtr* top);

int main(int argc, char **argv){
  
  int i,N,j;
  Stack s;
  s.top=NULL;
  s.size=0;
  //NodePtr top=NULL;

   for(i=1;i<argc;i++) {
     push(&s,atoi(argv[i]));
   }

   pop_all(&s);
  
   /*while(top){
     printf("%d\n",pop(&top));
   }
  push(&top,5);
  printf("%d\n",pop(&top));
  pop(&top);
  push(&top,7);
  push(&top,8);
  printf("%d\n",pop(&top));
  printf("%d\n",pop(&top));
  printf("%d\n",pop(&top));
 
  

 
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
        Use stack to help with the parentheses


     }


  }*/




   return 0;
}
