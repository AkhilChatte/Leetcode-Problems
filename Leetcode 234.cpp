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
    ListNode* getMiddle(ListNode *head)
        {
            ListNode* slow = head;
            ListNode* fast = head->next;
            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        
        //get middle of LL
        ListNode* mid = getMiddle(head);
        
        //Reverse later half of LL
        ListNode* temp = mid->next;
        mid->next = reverse(temp);
        
        //Declare two pointers for two halves of LL
        ListNode* head1 = head;
        ListNode* head2 = mid->next;
        
        //Comparing
        while(head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
    }
};