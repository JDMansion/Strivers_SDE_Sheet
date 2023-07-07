import java.io.*;
import java.util.* ;

/************************************************************

    Following is the linked list node structure:
    
    class LinkedListNode<T> {
        T data;
        LinkedListNode<T> next;

        public LinkedListNode(T data) {
            this.data = data;
        }
    }

************************************************************/

public class Solution {
	public static LinkedListNode<Integer> sortTwoLists(LinkedListNode<Integer> first, LinkedListNode<Integer> second) {
        
        if(first == null) return second;
        if(second == null) return first;

        if(first.data > second.data) {
            LinkedListNode temp = first;
            first = second;
            second = temp;
        }

        LinkedListNode res = first;

        while(first != null && second != null) {
            LinkedListNode tmp = null;

            while(first != null && first.data <= second.data) {
                tmp = first;
                first = first.next;
            }
            tmp.next = second;

            //swap
            tmp = first;
            first = second;
            second = tmp;
        }
        return res;
	}
}
