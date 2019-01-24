import java.util.Scanner;//importing the scanner
public class linkedlist {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = 0;//declaring temporary variable to store data;
        link head = new link();//defining the class which stores the value of the linked list
        head.value = scan.nextInt();//creating the head which tracks information of the latest value
        linkedlist list=new linkedlist();
        list.print(head);

        while (true) {
            n = scan.nextInt();
            link name = new link();//new link element
            name.value = n;//storing the data in the name link created
            name.node = head;//setting the node of the list element to the adress of the prevoius element
            head = name;

            list.print(name);


        }

    }

    void print(link obj) {
        while (obj.node != null) {
            System.out.printf("%d ",obj.value);
            obj=obj.node;

        }
        System.out.printf("%d ",obj.value);
        System.out.println("");
    }
}

class link {
    int value;
    link node;
    link(){
        node=null;
    }

}


