class LRUCache {
public:
    queue<int>q;
    map<int,int>ele;
    map<int,int>rep;
    int cap;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(ele.find(key) != ele.end()){
            cap++;
            q.push(key);
            rep[key]++;
            return ele[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        
        if(ele.find(key) == ele.end()){
            if(q.size()<cap) {
                q.push(key);
            }
            else{
                while(rep[q.front()] > 0 && q.size()>=cap){
                    rep[q.front()]--;
                    if(rep[q.front()] < 1){
                        rep.erase(q.front());
                    }
                    cap--;
                    q.pop();
                }
                ele.erase(q.front());
                q.pop();
                q.push(key);
            }
            ele[key] = value;
        }
        else{
            cap++;
            ele[key] = value;
            q.push(key);
            rep[key]++;
        }
        // cout<<q.size()<<"\n";
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */