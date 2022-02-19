class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> q;
        int mini = INT_MAX;
        for(auto i:nums){
            if(i%2!=0){
                i*=2;
            }
            q.push(i);
            mini = min(mini, i);
        }
        int res=INT_MAX;
        while(q.top()%2==0){
            res = min(res, q.top() - mini);
            int a = q.top();
            q.pop();
            q.push(a/2);
            mini = min(mini, a/2);
        }
        return min(res, q.top() - mini);
    }
};