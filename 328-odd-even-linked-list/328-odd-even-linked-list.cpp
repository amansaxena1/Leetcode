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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode *e = head, *he = e;
        ListNode *o = head->next, *ho = o;
        
        while(e->next && o->next){
            if(e->next) {
                e->next = e->next->next;
                e = e->next;
            }
            if(o->next){
                o->next = o->next->next;
                o = o->next;
            }
        }
        
        e->next = ho;
        // if(o) o->next=NULL;
        return he;
    }
};