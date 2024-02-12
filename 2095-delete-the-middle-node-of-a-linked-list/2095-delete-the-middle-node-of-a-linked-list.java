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
    public ListNode deleteMiddle(ListNode head) {
        ListNode ptr = head;
        ListNode traverse = head;
        ListNode temp = head;
        int count=1;
        if(head.next == null){
            return null;
        }
        while(ptr.next!=null){
            ptr = ptr.next;
            count++;
        }
        if(count%2==0){
            count = (count+1)/2;
        }
        else{
            count = count/2;
        }
        for(int i =0; i <count-1 ;i++){
            temp = temp.next;
        }
        temp.next = temp.next.next;
        while(traverse.next!=null){
            System.out.println(traverse.val);
            traverse = traverse.next;
        }
        return head;
    }
}