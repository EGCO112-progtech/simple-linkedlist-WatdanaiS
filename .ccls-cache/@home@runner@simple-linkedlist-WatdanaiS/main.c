//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char *argv[]) {
  int c = 5;
  struct node *head;

  typedef struct node Node;
  typedef Node* NodePtr;

  NodePtr p=(NodePtr) malloc(sizeof(Node));
  head=p;
  p->value = c;

  int i, n=4;
  for(i=0;i<n;i++){
    p->next = (NodePtr) malloc(sizeof(Node));
    p=p->next;
    p->value=c+i+1;
    p->next=NULL;
  
/*  p->next->value = head->value+3;
  
  p->next->next = (NodePtr) malloc(sizeof(Node));
  p->next->next->value = 11;
  p->next->next->next = NULL;
*/
    }

/*
  z.value=2;
  z.next=&a;
  head=&z;
*/

  printf("%3d\n", head->value);                     // whae valuefor 2
  printf("%3d\n", head->next->value);               // what value for 5
  printf("%3d\n", head->next->next->value);         // what value for 8
  
  printf("%3d\n\n", head->next->next->next->value); // what value for 11

  /*  Exercise I (d)
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */

  /*  Exercise II (z)
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  */

  /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */

  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate
//  int i, n = 4;
  for (i = 0; i < n; i++) {
    printf("%3d->", tmp->value);
    tmp = tmp->next;
  }
  printf("NULL\n\n");

  /*  Exercise IV change to while loop!! (you can use NULL to help) */

  tmp = head;
  i = 0;
  while (i < 4) {
    printf("%6d->", tmp->value);
    tmp = tmp->next;
    i++;
  }
  printf("NULL\n\n");

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help
It is on the LINE 14 TO 28 !!! */

  /*  Exercise VI Free all nodes !! */
       //use a loop to help

  tmp=head;
  while(tmp!=NULL){
    printf("deleting %d\n",tmp->value);
    free(tmp);
    //do not use tmp on the right side
    tmp=tmp->next;
    tmp=NULL;
  }

  return 0;
}
