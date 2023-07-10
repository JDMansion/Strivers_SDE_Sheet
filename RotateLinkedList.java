/****************************************************************

 Following is the class structure of the Node class:

 class Node {
     public int data;
     public Node next;

     Node()
     {
         this.data = 0;
         this.next = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
     }

     Node(int data, Node next)
     {
         this.data = data;
         this.next = next;
     }
 };

 *****************************************************************/

public class Solution {
    public static Node rotate(Node head, int k) {
        if(head == null || head.next == null || k == 0) return head;

        //compute the length
        Node cur = head;
        int len = 1;
        while(cur.next != null) {
            len++;
            cur = cur.next;
        }

        //got till that node
        cur.next = head;
        k = k%len;
        k = len - k;

        while(k-- > 0) {
            cur = cur.next;
        }

        //make the node head and break connection
        head = cur.next;
        cur.next = null;

        return head;
    }
}
