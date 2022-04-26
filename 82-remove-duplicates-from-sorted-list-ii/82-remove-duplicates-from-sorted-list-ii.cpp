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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* n = new ListNode(-101);
        ListNode* temp = n;
        int f=0;
        while(head!=NULL){
            f=0;
            while(head && head->next && head->val == head->next->val){
                head = head->next;
                f=1;
            }
            if(f) head = head->next;
            else{
                if(head){
                    n->next = new ListNode(head->val);
                    n = n->next;
                    head = head->next;
                }
            }
        }
        return temp->next;
    }
};