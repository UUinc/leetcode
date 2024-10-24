class MinStack {
public:
    MinStack() {
        c=0;
    }
    
    void push(int val) {
        if(c==0)
        {
            s.push_back({val, val});
        }
        else
        {
            int min = s[c-1].second;
            min = val < min ? val : min;
            s.push_back({val, min});
        }
        c++;
    }
    
    void pop() {
        s.pop_back();
        c--;
    }
    
    int top() {
        return s[c-1].first;
    }
    
    int getMin() {
        return s[c-1].second;
    }
private:
    vector<pair<int, int>> s;
    int c;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */