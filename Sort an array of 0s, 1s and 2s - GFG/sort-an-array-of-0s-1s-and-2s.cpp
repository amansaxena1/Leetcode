// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int l=0, r=n-1;
        // for(int i=0;i<n;i++){
        //     if(a[i] == 0) l++;
        //     else break;
        // }
        // for(int i=n-1;i>=0;i--){
        //     if(a[i] == 2) r--;
        //     else break;
        // }
        int c = l;
        while(c<=r){
            if(a[c] == 1) c++;
            else if(a[c] == 0) {
                // if(c>l){
                    swap(a[c],a[l]);
                    l++;
                    c++;
                    // for(int i=l;i<r;i++){
                    //     if(a[i] == 0) l++;
                    //     else break;
                    // }
                // }
                // else c++;
            }
            else if(a[c] == 2){
                // if(c<r){
                swap(a[c],a[r]);
                //     for(int i=r;i>=l;i--){
                //         if(a[i] == 2) r--;
                //         else break;
                //     }
                // }
                r--;
                // else c++;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends