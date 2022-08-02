class Solution {
public:
    string entityParser(string text) {
        map<string, char>mp;
        mp["quot"] = '"';
        mp["apos"] = '\'';
        mp["amp"] = '&';
        mp["gt"] = '>';
        mp["lt"] = '<';
        mp["frasl"] = '/';
        int f = 0;
        string temp="",ans="";
        for(int i=0;i<text.size();i++){
            if(text[i] == '&') {
                if(f == 1) ans += "&" + temp;
                f = 1;
                temp = "";
            }
            else if(f == 1 && text[i] == ';'){
                f = 0;
                cout<<temp<<" ";
                if(mp.find(temp)!=mp.end()) ans += mp[temp];
                else ans+= "&" + temp+ ";";
                temp = "";
                
            }
            else if(f == 0) ans += text[i];
            else temp += text[i];
        }
        if(f==1) ans+= "&" + temp;
        return ans;
    }
};