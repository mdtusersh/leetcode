class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto ans = head;

        while(head) {
            auto current = head;

            while(true) {
                if(!current->next) break;
                if(current->val != current->next->val) break;
                current->next = current->next->next;
            }

            head = current->next;
        }

        return ans;
    }
};