class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>p;
        if(a) p.push({a,'a'});
        if(b) p.push({b,'b'});
        if(c) p.push({c,'c'});
        string ans = "";
        while(p.size() > 1 ){
            pair<int,char> p1,p2;
            p1 = p.top();
            p.pop();
            p2 = p.top();
            p.pop();
            if(p1.first>1){
                ans += (p1.second);
                ans += (p1.second);
                p1.first-=2;
            }
            else{
                ans += (p1.second);
                p1.first--;
            }
            if(p2.first >= p1.first && p2.first > 1){
                ans += (p2.second);
                ans += (p2.second);
                p2.first-=2;
            }
            else{
                // cout<<p2.second<< " ";
                ans += (p2.second);
                p2.first--;
            }
            // cout<<p1.first<<" - "<<p1.second<<"\n";
            // cout<<p2.first<<" - "<<p2.second<<"\n";

            if(p1.first) p.push(p1);
            if(p2.first) p.push(p2);
        }
        // cout<<p.top().first<<" "<<p.top().second<<" "<<p.size()<<"\n";
        for(int i=0;p.size() && i<min(p.top().first,2);i++) ans += (p.top().second);
        return ans;
    }
};
