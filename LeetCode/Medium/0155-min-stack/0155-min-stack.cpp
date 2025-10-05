class MinStack {
public:
    stack<long long> s;
    long long mina=LLONG_MAX, temp;

    MinStack() {}    
    void push(int val) {
       if (s.empty()) { s.push(val); mina = val; }
        else if (val < mina) { s.push(2LL*val - mina); mina = val; }
        else s.push(val);
    }
    
    void pop() {
        temp = s.top(); s.pop();
        if (temp < mina) mina = 2*mina - temp;
    }
    
    int top() {
        return s.top() < mina ? (int)mina : (int)s.top();
    }
    
    int getMin() {
        return int(mina);
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */