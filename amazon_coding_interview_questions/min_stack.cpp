#include<bits/stdc++.h>
using namespace std;
    vector< pair<int,int> > s;
    void push(int val) {
        if(s.empty())
            s.push_back({val,val});
        else
            s.push_back({val,min(s.back().second,val)});    
    }
    
    void pop() { s.pop_back(); }
    
    int top() { return s.back().first; }
    
    int getMin() { return s.back().second; }

class MinStack {
public:
    stack<int> reg;
    stack<int> smal;
    MinStack() {
    }
    
    void push(int val) {
        reg.push(val);
        if(smal.empty() || smal.top()<val) smal.push(smal.top());
        else smal.push(val);
    }
    
    void pop() {
        smal.pop();
        reg.pop();
    }
    
    int top() {
        return reg.top();
    }
    
    int getMin() {
        return smal.top();
    }
};
class MinStack {
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x) {
	    s1.push(x);
	    if (s2.empty() || x <= getMin())  s2.push(x);	    
    }
    void pop() {
	    if (s1.top() == getMin())  s2.pop();
	    s1.pop();
    }
    int top() {
	    return s1.top();
    }
    int getMin() {
	    return s2.top();
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