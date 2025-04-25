#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *p){
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main() {
    struct node *head;
     struct node *n1;
      struct node *n2;
      struct node *n3;
      struct node *n4;
    // allocate memory from heap
    head=(struct node*)malloc(sizeof(struct node));
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    n4=(struct node*)malloc(sizeof(struct node));
    head->data=50;
    n1->data=65;
    n2->data=80;
    n3->data=27;
    n4->data=96;
    head->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    
    struct node *ptr=head;
    traverse(ptr);

    return 0;
    
}