// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends

#define llint int
int chocolates(int arr[], int n)
{
    llint mini = INT_MAX;
    for(int i=0;i<n;i++) mini = min(mini, arr[i]);
    return mini;
    
}
