class Solution {
public:

    int gcd(int a, int b){
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        while(a != b){
            if(a>b)
                a = a - b;
            else
                b = b - a;
        }
    return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL)
            return head;

        ListNode* temp = head;
        while(temp->next != NULL){
            int a = gcd(temp->val, temp->next->val);
            ListNode* gcd = new ListNode(a);
            
            gcd->next = temp->next;
            temp->next = gcd;
            temp = temp->next->next;
        }
        return head;
    }
};