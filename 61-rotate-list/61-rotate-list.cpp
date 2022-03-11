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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int len=0;
        ListNode *temp = head, *ptr;
        
        while(temp){
            // cout<<temp->val<<" ";
            temp = temp->next;
            len++;
        }
        k%=len;
        if(!k) return head;
        // cout<<len<<" ";
        temp = head;
        len-=k;
        len--;
        
        while(len--){
            temp = temp->next;
        }
        
        ptr = temp->next;
        temp->next = NULL;
        temp = ptr;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head;
        
        return ptr;
        
    }
};