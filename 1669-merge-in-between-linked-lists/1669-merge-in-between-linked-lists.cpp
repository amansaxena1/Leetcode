class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head = list1, *left = list1, *right = list1, *last;
        while(list1) {
            last = list1;
            list1 = list1 -> next;
            a--;
            b--;
            if(a == 0) left = last;
            if(b == 0) right = list1;
        }
        left->next = list2;
        while(left!=NULL){
            last = left;
            left=left->next;
        }
        last->next = right->next;
        return head;
    }
};