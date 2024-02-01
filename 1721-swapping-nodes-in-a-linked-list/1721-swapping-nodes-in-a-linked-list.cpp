/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* front = head;
        ListNode* back = head;
        int len = 0;
        while(temp!= NULL){
            temp = temp->next;
            len++;
        }
        for(int i = 0;i<k-1;i++){
            front = front->next;
        }
        int k2 = len - k;
        for(int i = 0;i<k2;i++){
            back = back->next;
        }

        int temp1 = front->val;
        front->val = back->val;
        back->val = temp1;

        return head;
    }
};