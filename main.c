#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

//void push(NodePtr* top, int x);
//int pop(NodePtr* top);

int main(int argc, char **argv){
  
  int i,N,j,a;
  Stack s;
  s.top=NULL;
  s.size=0;
  //NodePtr top=NULL;

  for(i=1;i<argc;i++) {//ไล่string
    N=0;
    for(j=0;j<strlen(argv[i]) ;j++){ // [{}][[[]]] ไล่ระดับตัวอักษร
          switch(argv[i][j]){
        case '{': //ใส่รวบทีเดียว
        case '[': push(&s,argv[i][j]); 
                  break;
        case '}': a=pop(&s); if(a!='{') {if(a=='[') N=1; else N=2;} break;
        case ']': a=pop(&s); if(a!='[') {if(a=='{') N=1; else N=2;} break;
        default : printf("Not in the condition");
        
      }
      if(N==1) break;
    }
/*
    if(N==0 && (strlen(argv[i])%2 ==0)) printf("argv %d: Correct\n",i);
    else if(N==2){
      printf("argv %d: Incorrect too many close parenthesis\n",i);
      pop_all(&s);
    }
    else if(n==1){
      printf("argv %d: Incorrect too many open parenthesis\n",i);
      pop_all(&s);
    }
    else if(N==2 && n==1 && (strlen(argv[i])%2 ==0)){
      printf("argv %d: Incorrect mismatch \n",i);
    }
    */
    if(s.size>0){
      printf("argv %d: Incorrect too many open parenthesis\n",i);
      pop_all(&s);
    }
    else if(N==0) printf("argv %d: Correct\n",i);
    else if(N==2) {
      printf("argv %d: Incorrect too many close parenthesis\n",i);
       pop_all(&s);
      }
    else if(N==1) printf("argv %d: Incorrect mismatch \n",i);
   /* }
  
   for(i=1;i<argc;i++) {
     push(&s,atoi(argv[i]));
   }

   pop_all(&s);
  
   while(top){
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


     }*/


  }




   return 0;
}
