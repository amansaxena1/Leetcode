// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

#define llint long long int
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        llint l=0, r=n;
        while(l<r){
            llint mid = (l+r)/2;
            if(arr[mid] > k) r = mid;
            else if(arr[mid] < k) l = mid+1;
            else return mid;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends