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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }

        // Calculating length of LL
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        ListNode* next= NULL;
        ListNode* curr= head;
        ListNode* prev= NULL;
        int count = 0;
        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        

        if(next != NULL){
            if(k <= len-k){
                head->next = reverseKGroup(next, k);
            }
            else{
                head->next = next;
            }
        }

        return prev;
    }
};