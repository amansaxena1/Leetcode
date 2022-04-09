class Solution {
public:
    // string conv(int i){
    //     string t = "";
    //     while(i>0){
    //         int a = i%10;
    //         i/=10;
    //     }
    //     return t;
    // }
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        string t="";
        for(int i=1;i<=n;i++){
            t = "";
            if(i%3==0) t+=("Fizz");
            if(i%5==0) t+=("Buzz");
            if(t=="") t += to_string(i);
            s.push_back(t);
        }
        return s;
    }
};