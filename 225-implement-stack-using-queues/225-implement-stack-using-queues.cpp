#define llint int
class MyStack {
public:
    queue<llint> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    // 1 2 3 4 5 6 7
    // 1 2 3 4 5 6 7 8
    // 
    int pop() {
        llint a = q.front();
        llint n = q.size();
        while(n--){
            if(n==0){
                a = q.front();
                q.pop();
                break;
            }
            a = q.front();
            q.pop();
            q.push(a);
        }
        return a;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */