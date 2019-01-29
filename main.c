#include<stdio.h>
#include<stddef.h>//importing libraries
void print();//defining function to print the linked list;
struct node
{
    int data;
    struct node *next;

};//constructed the structure of the node which will hold data;
struct node *head=NULL;//defining a head for first element
struct node *iter=NULL;//defining the iterator which will take care of the iterations through the loop
int main()
{
    printf("enter the values>>");//initial message
    int counter=1;//condition to check weather first iteration
    while(1==1)
    {
        struct node *nod=(struct node*)malloc(sizeof(struct node));//allocating the memory to the node


        printf(">>");
        scanf("%d",&(nod->data));//scanning the node data;
        nod->next=NULL;
        if(counter==1)
        {
            head=nod;//assigning the first element in the list to the head
            iter=head;//assigning the iter to the head
            counter++;//
        }
        else
        {
            iter->next=nod;//storing the previous node data to the first node
            iter=nod;//assigning the iterator to the first node

        }




        print();//printing the list to the console


    }


}
void print()
{
    struct node *printer=(struct node*)malloc(sizeof(struct node));
    printer=head;//staring from the head
    while(printer->next!=NULL)
    {
        printf("%d ",printer->data);
        printer=printer->next;//printing all the elements while iterating from the list
    }
    printf("%d\n",printer->data);

}
