/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int n = 0;
        ListNode ptrA = headA;
        ListNode ptrB = headB;
        int sizeA = 0;
        int sizeB = 0;
        while(ptrA!=null){
            sizeA ++;
            ptrA = ptrA.next;
        }
        while(ptrB!=null){
            sizeB ++;
            ptrB = ptrB.next;
        }
        if(sizeA>sizeB){
        n = sizeA - sizeB;
        for(int i = 1;i<=n;i++){
            headA = headA.next;
        }
        }
        else if(sizeA < sizeB){
            n = sizeB - sizeA;
            for(int i =1;i<=n;i++){
                headB = headB.next;
            }
        }
        ptrA = headA;
        ptrB = headB;
        while(ptrA!=ptrB){
            ptrA = ptrA.next;
            ptrB = ptrB.next;
        }
        return ptrA;
        
    }
}