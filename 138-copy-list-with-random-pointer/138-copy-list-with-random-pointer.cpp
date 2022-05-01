/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        Node *l = head;
        while(l){
            Node *n = new Node(l->val);
            n->next = l->next;
            l->next = n;
            l = l->next->next;
        }
        l = head;
        while(l){
            if(l->random){
                l->next->random = l->random->next;
            }
            l = l->next->next;
        }
        l = head;
        Node *h = l->next;
        Node *r = l->next;
        while(l){
            r = l->next;
            l->next = r->next;
            if(r->next){
                r->next = r->next->next;
            }
            l = l->next;
        }
        return h;
    }
};