#include<stdio.h>

 int a=5;

int main(){
          int a=50;
          {
             extern int a;
             printf("a = %d\n",a);
           }
          
          return(0);
          }
