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
#define llint long long int
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        double size = 0;
        ListNode *h = head;
        while(h){
            h=h->next;
            size++;
        }
        // size /= k;
        // cout<<size<<" "<<ceil(size)<<" "<<floor(size);
        bool t = false;
        h = head;
        for(llint i=0;i<k;i++){
            
            llint a = ceil(size / (k - i));
            size -= a;
            // t = !t;
            // if(t) a = ceil(size);
            // else a = floor(size);
            ListNode *p = h, *l = NULL;
            // cout<<a<<"\n";
            while(h && a--){
                // cout<<i<<"\n";
                l = h;
                h = h->next;
            }
            if(l) {
                l->next = NULL;
                ans.push_back(p);        
            }
            else{
                ans.push_back(l);
            }
        }
        return ans;
    }
};
// 10 - 3
// 4 
// 

