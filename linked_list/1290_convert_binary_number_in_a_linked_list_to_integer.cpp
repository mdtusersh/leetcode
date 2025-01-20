class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s = "";

        while (head != nullptr) {
            s += to_string(head->val);
            head = head->next;
        }

        bitset<32> n(s);

        return (int)n.to_ulong();
    }
};