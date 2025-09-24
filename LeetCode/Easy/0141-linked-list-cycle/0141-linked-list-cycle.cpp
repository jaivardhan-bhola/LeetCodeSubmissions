
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ListNode* a = head;
        ListNode* b = head;
        while (a != nullptr && a->next != nullptr) {
            a = a->next->next;
            b = b->next;
            if (a == b)
                return true;
        }
        return false;
    }
};