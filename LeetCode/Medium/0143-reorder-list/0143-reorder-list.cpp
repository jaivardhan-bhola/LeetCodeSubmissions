class Solution {
public:
    void reorderList(ListNode* head) {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        if (!head) return;
        ListNode* s = head;
        ListNode* f = head;
        while (f && f->next) {
            s = s->next;
            f = f->next->next;
        }

        ListNode* l2 = s->next;
        s->next = nullptr;
        ListNode* node = nullptr;

        while (l2) {
            ListNode* temp = l2->next;
            l2->next = node;
            node = l2;
            l2 = temp;
        }

        ListNode* l1 = head;
        l2 = node;

        while (l2) {
            ListNode* temp1 = l1->next;
            ListNode* temp2 = l2->next;
            l1->next = l2;
            l2->next = temp1;
            l1 = temp1;
            l2 = temp2;
        }
    }
};