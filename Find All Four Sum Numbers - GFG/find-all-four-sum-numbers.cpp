// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    // 0 0 1 1 2
    vector<vector<int> > fourSum(vector<int> &s, int k) {
        int n = s.size();
        sort(s.begin(), s.end());
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0; i<n;i++){
            if(i>0 && s[i]==s[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j != i+1 && s[j] == s[j-1]) continue;
                int l = j+1;
                int r = n-1;
                while(l<r){
                    if(l != j+1 && s[l] == s[l-1]) l++;
                    else if(r+1<n && s[r] == s[r+1]) r--;
                    // cout<< s[i]<<" "<<s[j]<<" "<<s[l]<<" "<<s[r]<<"\n";
                    else if(s[i] + s[j] + s[l] + s[r] > k) r--;
                    else if(s[i] + s[j] + s[l] + s[r] < k) l++;
                    else if(s[i] + s[j] + s[l] + s[r] == k){  
                        // cout<<"Yes\n";
                        temp.clear();
                        temp.push_back(s[i]);
                        temp.push_back(s[j]);
                        temp.push_back(s[l]);
                        temp.push_back(s[r]);
                        ans.push_back(temp);
                        l++;
                        r--;
                    }
                }
            }
        }
        // cout<<ans.size()<<" ";
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends