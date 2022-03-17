// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void findCombination(int ind, vector<int> &arr, vector<vector<int>>&ans, vector<int>ds, int target){
        if(ind == arr.size()){
            if(target == 0) ans.push_back(ds);
            return;
        }
        if(target<0) return;
        findCombination(ind+1,arr,ans,ds,target);
        ds.push_back(arr[ind]);
        findCombination(ind,arr,ans,ds,target - arr[ind]);
    }
    vector<vector<int> > combinationSum(vector<int> &arr, int target) {
        set<int>st;
        for(int i=0;i<arr.size();i++) st.insert(arr[i]);
        
        vector<int>v;
        for(auto i:st) v.push_back(i);
        
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0, v, ans, ds, target);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends