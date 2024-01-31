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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* ptr = head;
        ListNode* fast = head->next;
        int cnt = 0 ;
        if(head == NULL){
            return NULL;
        }
        while(ptr!=NULL){
            ptr = ptr->next;
            cnt++;
        }
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(cnt % 2==0){
            return slow->next;
        }
        return slow;
    }

};