class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode head(0);
        ListNode *t = &head;
        while(c || l1 || l2) {
            c += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            t->next = new ListNode(c % 10);
            t = t->next;
            c /= 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        t->next = NULL;
        return head.next;
    }
};
