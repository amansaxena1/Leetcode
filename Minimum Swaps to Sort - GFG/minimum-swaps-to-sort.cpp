// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#define llint long long int
class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums){
	    vector<int>v = nums;
	    sort(v.begin(),v.end());
	    map<llint,llint>mp;
	    for(llint i=0;i<nums.size();i++) mp[v[i]] = i;
	    llint ans = 0;
	    vector<llint>vis(v.size(), 0);
	    for(llint i=0;i<v.size();i++){
	        if(v[i] != nums[i] && !vis[i]){
	            llint ele = nums[i];
	            llint cnt = 0;
	            llint curr = nums[i];
	            llint ind;
	            while(true){
	                cnt++;
	                ind = mp[curr];
	                curr = nums[ind];
	                vis[ind] = 1;
	                if(curr == ele){
	                    ans += cnt-1;
	                    break;
	                }
	            }
	        }
	        
	    }
	    
	    return (int)ans;
	}
// 	4 5 3 1 2
// 	1 2 3 4 5
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends