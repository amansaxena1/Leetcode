// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    int maxCandy(int v[], int n) 
    { 
        int area = 0;
        int l = 0, r = n-1;
        while(l<r){
            int a = min(v[l],v[r]) * (r-l-1);
            area = max(a, area);
            if(v[l] > v[r]) r--;
            else l++;
        }
        return area;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends