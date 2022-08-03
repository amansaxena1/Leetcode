class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        if(k==0) return 0;
        long a = 1, b = 1, c = 2;
        vector<int>v;
        v.push_back(1);
        while(c <= k){
            v.push_back(c);
            a = b;
            b = c;
            c = a+b;
        }
        
        // queue<int>q;
        // map<int,int>mp;
        // mp[k]++;
        // q.push(k);
        // int cnt = 0;
        // while(q.size()){
        //     int s = q.size();
        //     cnt++;
        //     for(int j=0;j<s;j++){
        //         int ele = q.front();
        //         q.pop();
        //         for(int i=0;i<v.size() && v[i] <= ele ;i++){
        //             if(ele-v[i] == 0) return cnt;
        //             if(mp.find(ele-v[i]) == mp.end()) {
        //                 mp[ele-v[i]]++;
        //                 q.push(ele-v[i]);
        //             }
        //         }
        //     }
        // }
        
        return 1 + findMinFibonacciNumbers(k-v[v.size()-1]);
    }
};