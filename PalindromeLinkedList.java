import java.util.* ;
import java.io.*; 
/****************************************************************

    Following is the class structure of the LinkedListNode class:
	
	class LinkedListNode<T> {
    	T data;
    	LinkedListNode<T> next;

    	public LinkedListNode(T data) {
        	this.data = data;
    	}
	}

*****************************************************************/

public class Solution {

	public static boolean isPalindrome(LinkedListNode<Integer> head) {
		if(head == null || head.next == null) return true;

		LinkedListNode slow = head;
		LinkedListNode fast = head;

		//find middle of the linked list
		while(fast.next != null && fast.next.next != null) {
			slow = slow.next; 
			fast = fast.next.next;
		}

		//reverse the right half
		slow.next = reverseList(slow.next);

		//move slow to right half
		slow = slow.next;

		//check for left half right half equal or not
		while(slow != null) {
			if(!head.data.equals(slow.data)) {
				return false;
			}
			head = head.next;
			slow = slow.next;
		}
		return true;
	}

	static LinkedListNode reverseList(LinkedListNode head) {
		LinkedListNode pre = null;
		LinkedListNode next = null;
		while(head != null) {
			next = head.next;
			head.next = pre;
			pre = head;
			head = next;
		}
		return pre;
	}
}
