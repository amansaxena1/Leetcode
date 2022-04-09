#define llint long long int
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {        
        llint l = 0;
        llint r = arr.size() - k;
        vector<int>ans;
        while(l<r){
            llint mid = (l+r)/2;
            if(x - arr[mid] > arr[mid+k]-x){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        for(llint i=0;i<k;i++) ans.push_back(arr[l+i]);
        return ans;
    }
};