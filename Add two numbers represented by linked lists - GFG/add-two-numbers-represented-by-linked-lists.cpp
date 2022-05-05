// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node* l){
        Node* prev = NULL;
        Node* curr = l;
        Node* temp;
        while(curr!=NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int curr = 0, carry = 0;
        Node *poi = l1;
        Node *last;
        while(l1 || l2 || carry){
            curr = 0;
            if(l2) {
                curr += l2->data;
                l2 = l2->next;
            }
            curr += carry;
            if(l1 && l1->next == NULL) last = l1;
            if(l1) {
                curr += l1->data;
                if(curr > 9){
                    carry = 1;
                    curr %= 10;
                }
                else carry = 0;
                l1->data = curr;
                l1 = l1->next;
            }
            else{
                if(curr > 9){
                    carry = 1;
                    curr %= 10;
                }
                else carry = 0;
                Node* t = new Node(curr);
                last -> next = t;
                last = last->next;
            }
        }
        return reverse(poi);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends