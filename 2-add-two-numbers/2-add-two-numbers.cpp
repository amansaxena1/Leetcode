/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int curr = 0, carry = 0;
        ListNode *poi = l1;
        ListNode *last;
        while(l1 || l2 || carry){
            curr = 0;
            if(l2) {
                curr += l2->val;
                l2 = l2->next;
            }
            curr += carry;
            if(l1 && l1->next == NULL) last = l1;
            if(l1) {
                curr += l1->val;
                if(curr > 9){
                    carry = 1;
                    curr %= 10;
                }
                else carry = 0;
                l1->val = curr;
                l1 = l1->next;
            }
            else{
                if(curr > 9){
                    carry = 1;
                    curr %= 10;
                }
                else carry = 0;
                ListNode* t = new ListNode(curr);
                last -> next = t;
                last = last->next;
            }
        }
        return poi;
    }
};