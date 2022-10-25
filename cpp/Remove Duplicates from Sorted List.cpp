class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* cur = head;
        while(cur) {
        	while(cur->next && cur->val == cur->next->val) {
        		cur->next = cur->next->next;
        	}
        	cur = cur->next;
        }
        return head;
    }
};
