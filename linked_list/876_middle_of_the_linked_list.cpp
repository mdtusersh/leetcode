class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* one = head;
        ListNode* two = head;

        while (two != nullptr) {
            if (two->next != nullptr) {
                two = two->next;
            } else {
                break;
            }

            if (two->next != nullptr) {
                two = two->next;
            } else {
                one = one->next;
                break;
            }

            one = one->next;
        }

        return one;
    }
};