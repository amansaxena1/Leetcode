#define llint long long int
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,string>mp;
        vector<pair<string,string>>v;
        for(llint i=0;i<messages.size();i++) mp[senders[i]] += (' ' + messages[i]);
        llint maxi = -1;
        string ans;
        for(auto i:mp){
            llint cnt = count(i.second.begin(), i.second.end(), ' ');
            if(cnt >= maxi) {
                ans = i.first;
                maxi = cnt;
            }
        }
        return ans;
    }
};