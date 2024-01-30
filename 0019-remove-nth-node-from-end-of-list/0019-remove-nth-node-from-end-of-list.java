/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode ptr = head;
        ListNode temp = head;
        int count = 1;
        while(ptr.next != null){
            ptr = ptr.next;
            count ++;
        }
        int t = count - n;
        if(t==0){
            head = head.next;
        }
        for(int i =0 ; i< t-1 ; i++){
            temp = temp.next;
        }
        if(temp.next==null){
            return null;
        }
        else{
        temp.next = temp.next.next;
        }
        return head;
    }
}