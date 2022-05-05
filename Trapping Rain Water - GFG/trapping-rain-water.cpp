// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        long long k=n;
        for(long long i=0;i<n-1;i++){
            if(a[i]!=0&&a[i+1]<a[i]){
                k=i;
                break;
            }
        }
        long long ans=0,temp=0;
        for(long long i=k+1;i<n;i++){
           if(a[i]>=a[k]){
               ans+=temp;
               temp=0;
               k=i;
           }
            else{
                temp+=a[k]-a[i];
            }
        }
        long long p=k;
        for(long long i=n-1;i>k;i--){
            if(a[i]!=0&&a[i-1]<a[i]){
                p=i;
                break;
            }
        }
        long long ans1=0,temp1=0;
        for(long long i=p-1;i>=k;i--){
           if(a[i]>=a[p]){
               ans1+=temp1;
               temp1=0;
               p=i;
           }
            else{
                temp1+=a[p]-a[i];
            }
        }
        return (ans+ans1);
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends