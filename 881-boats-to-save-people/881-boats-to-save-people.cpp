class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0,r=people.size()-1,cnt=0;
        while(l<=r){
            if(people[l] + people[r] <= limit){
                l++;
                r--;
                cnt++;
            }
            else{
                r--;
                cnt++;
            }
        }
        return cnt;
    }
};