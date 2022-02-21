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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* last = head;
        ListNode* start = new ListNode();
        ListNode* curr = start;
        int a=0;
        while(head!=NULL){
            if(head->val == 0){
                ListNode *newnode = new ListNode(a);
                start->next = newnode;
                start = start->next;
                a=0;
            }
            else{
                a+=head->val;
            }
            head=head->next;
        }
        return curr->next->next;
    }
};