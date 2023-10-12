class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> vals;
        
        int max = INT_MIN;
        
		// traversing the linked list and pushing the node values to the vector
        while (head) {
            vals.push_back(head -> val);
            head = head -> next;
        }
        
        int size = vals.size();
        
		// storing the max value
        for (int i = 0; i < size / 2; i++) {
            if (vals[i] + vals[size - i - 1] > max) {
                max = vals[i] + vals[size - i- 1];
            }
        }
        
        return max;
    }
};