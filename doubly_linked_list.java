import java.util.Scanner;//importing scanner for user input

public class doubly_linked_list {
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);//creating the object for scanner
        System.out.println("enter the values");
        node head=new node();//creating the head node for the linked list
        node iter=null;//defining a reference variable
        print printer=new print();//defining an object to print the linked list

        int counter=1;//checking the condition to be the head
        while(true){
            node nextitem=new node();//generating node in the list
            if(counter==1){//going for head condition
                head.data=scan.nextInt();//scanning data to the head
                head.prev=null;//head is first element so its previous element in the list is null
                iter=head;//creating a reference variable for the head
                printer.printforward(head);//printing the list
                counter++;//countering the condition for the element to be the head
            }
            else{
                nextitem.data=scan.nextInt();//scanning the data in the node of the list
                iter.next=nextitem;//storing the address of the new node in the previous node
                nextitem.prev=iter;//storing the previous element address in the new node
                iter=nextitem;//creating the reference of the new node in the list
                printer.printforward(head);//printing the list by iterating the list in the forward direction
                System.out.println(" ");
                printer.printbackward(nextitem);//printing the list backward;



            }
        }
    }
}
class node{//class which defines the node
    int data;
    node next;
    node prev;
    node(){
        next=null;
        prev=null;
    }
}
class print{//class to print the list in forward as well as backward direction
    void printforward(node head){
        while(head.next!=null){
            System.out.printf("%d ",head.data);
            head=head.next;
        }
        System.out.printf("%d\n",head.data);
    }
    void printbackward(node tail){
        do{
            System.out.printf("%d ",tail.data);
            tail=tail.prev;

        }while(tail.prev!=null);
        System.out.printf("%d\n",tail.data);



    }
}
