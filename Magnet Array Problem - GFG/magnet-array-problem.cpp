// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    double check(int n, double magnets[], double mid){
        double lf = 0, rf = 0;
        int i=0;
        for(; magnets[i] <= mid; i++) lf += 1/(mid - magnets[i]);
        for(;magnets[i] > mid; i++) rf += 1/(magnets[i] - mid);
        // if(lf == rf) return 0;
        if(abs(lf - rf) < 0.000001) return 0;
        else if (lf < rf) return -1;
        return 1;
    }
    
    void nullPoints(int n, double magnets[], double getAnswer[])
    {
        double l=0, r=0;
        for(int i=1;i<n;i++){
            l=magnets[i-1];
            r=magnets[i];
            while(l<=r){
                double mid = l + (r-l)/2;
                double p = check(n, magnets, mid);
                // if(p == 2){
                //     getAnswer[i-1] = mid - 0.01;
                //     break;
                // }
                if(p == 0) {
                    getAnswer[i-1] = mid;
                    break;
                }
                else if(p == -1){
                    r = mid;
                } 
                else if(p == 1){
                    l = mid;
                }
            }
        }   
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends