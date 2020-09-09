//Nitish Kumar Sonthalia
//Header Linked List(hetrogenous)
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct header{
    int data;
    struct node *link;
};

void creat_list(struct node **,int n);
void display_list_start(struct node ** );


int main(){
    struct header *head = (struct header *)malloc(sizeof(struct header ));
    struct node *start =NULL;
    head->data=0;
    head->link=start;
    int t;

    while(1){
        printf("\n MENU ");
        printf("\n 1. ADD An Element ");
        printf("\n 2. Display The List From Start ");
        printf("\n 3. Exit ");
         scanf("%d",&t);
          int e;

        switch (t)
        {

        case 1:
            printf("\n Enter The Element To Be Entered: ");
            scanf("%d",&e);
            creat_list(&start,e);
            head->data+=1;
            break;

        case 2:
            printf("\nTotal elewments in the list are:%d",head->data);
            display_list_start(&start);
            break;
        case 3:
            exit(1);
            break;

        default:
            break;
        }
    }
}


void creat_list(struct node **st ,int n){
    struct node *temp;
    struct node *new1 = (struct node *)malloc(sizeof(struct node ));

    new1->data=n;

    new1->next=NULL;
    if(*st==NULL){
        *st=new1;
        return;
    }
    else{
    temp=*st;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = new1;
    }
}
void display_list_start(struct node **st ){
    struct node*temp=(*st);
    printf("\nElements in LIST are:");

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
