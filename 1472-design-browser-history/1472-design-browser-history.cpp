class BrowserHistory {
    vector<string>v;
    int ind = 0; 
public:
    int min(int a, int b){ return a<b?a:b;}
    BrowserHistory(string homepage) {
        v.clear();
        v.push_back(homepage);
    }
    
    void visit(string url) {
        v.erase(v.begin()+ind+1,v.end());
        ind++;
        v.push_back(url);
    }
    
    string back(int steps) {
        string str = v[max(0, ind - steps)];
        ind = max(0, ind - steps);
        return str;
    }
    
    string forward(int steps) {
        string str = v[min(v.size()-1, ind + steps)];
        ind = min(v.size()-1, ind + steps);
        return str;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */