#include<stdio.h>
#include<stdlib.h>

struct node {
          int data;
          struct node *left;
          struct node *right;
  }
  
int main()
{
      struct node *n1 = (struct node*)malloc(sizeof(struct node));
      n1 -> data = 1;
      
      
