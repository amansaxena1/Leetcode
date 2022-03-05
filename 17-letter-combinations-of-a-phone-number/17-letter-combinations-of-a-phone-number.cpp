class Solution {
public:
    
    void combinations(map<char, vector<char>>mp, int mapInd, string &curr, vector<string>&ans, string given, int currInd){
        
        if(mapInd >= mp[given[currInd]].size()) {
            if(currInd >= given.size()) ans.push_back(curr);
            return;
        }
        string temp = curr + mp[given[currInd]][mapInd];
        combinations(mp, 0, temp, ans, given, currInd+1);
        combinations(mp, mapInd + 1, curr, ans, given, currInd);
        
    }
    
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>>mp;
        mp.insert(pair<char,vector<char>>('2',{'a','b','c'}));
        mp.insert(pair<char,vector<char>>('3',{'d','e','f'}));
        mp.insert(pair<char,vector<char>>('4',{'g','h','i'}));
        mp.insert(pair<char,vector<char>>('5',{'j','k','l'}));
        mp.insert(pair<char,vector<char>>('6',{'m','n','o'}));
        mp.insert(pair<char,vector<char>>('7',{'p','q','r','s'}));
        mp.insert(pair<char,vector<char>>('8',{'t','u','v'}));
        mp.insert(pair<char,vector<char>>('9',{'w','x','y','z'}));
        
        vector<string>v;
        string str="";
        if(!digits.length()) return v;
        combinations(mp, 0, str, v, digits, 0);
        return v;
    }
};