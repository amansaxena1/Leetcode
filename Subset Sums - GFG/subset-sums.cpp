// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    void aman(vector<int>v, int ind, int sum, vector<int>&st){
        int n = v.size();
        if(ind == n){
            st.push_back(sum);
            return;
        }
        aman(v,ind+1, sum, st);
        // st.insert(sum + v[ind]);
        aman(v,ind+1,sum+v[ind], st);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>temp;
        vector<int>st;
        aman(arr, 0, 0, st);
        // for(auto i:st){
        //     temp.push_back(i);
        // }
        return st;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends