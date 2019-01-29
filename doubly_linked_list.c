#include<stdio.h>
#include<stddef.h>//importing library
struct node{//structure of the node in list
int data;
struct node *next;
struct node *prev;
};
void printforward(struct node *head);//printing the list in forward direction
void printbackward(struct node *item);//printing the list in the backward direction
struct node *head=NULL;//defining a head
struct node *iter=NULL;//defining a iter for the printing and assigning the value of the node
int main(){
    int counter=1;
    printf("enter the values\n");
    while(1==1){
        struct node *list=(struct node*)malloc(sizeof(struct node));//generating the node
        if(counter==1){
                //checking the head condition

                head=list;
                //creating the reference to the first node in the list
        head->next=NULL;//removing the garbage values from the pointers
            scanf("%d",&head->data);
            head->prev=NULL;//assigning the null to the previous pointer
        iter=head;
        counter++;//removing the head condition
        printf("\n");
        printforward(head);//printing the list
        }
        else{
                scanf("%d",&list->data);//value scanned in the node
                list->next=NULL;
            iter->next=list;//assigning the address of the node to the previous node
            list->prev=iter;//assigning  and storing the address of the previous node in the current node
            iter=list;//creating the new reference of the current node
        printf("\n");
            printforward(head);//printing the list in forward direction
            printbackward(list);//printing the list in the backward direction


        }

    }



}
void printforward(struct node *head){
while(head->next!=NULL){
    printf("%d ",head->data);
head=head->next;

}
printf("%d\n",head->data);
}

void printbackward(struct node *item){
do{
    printf("%d ",item->data);
    item=item->prev;

}while(item->prev!=NULL);
printf("%d\n",item->data);

}
