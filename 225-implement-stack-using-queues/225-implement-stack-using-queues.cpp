
class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    void push(int x) {
        
        if(!q1.empty()){
            q2.push(x);
            while(!q1.empty()){
                int v=q1.front();
                q2.push(v);
                q1.pop();
            }
        }
        
        else if(!q2.empty()){
            q1.push(x);
            while(!q2.empty()){
                int v=q2.front();
                q1.push(v);
                q2.pop();
            }
        }
        else if(q1.empty()&&q2.empty()){
            q1.push(x);
        }
    }
    
    int pop() {
        int v;
        if(!q1.empty()){
            v=q1.front();
            q1.pop();
            return v;
        }
        else{
            v=q2.front();
            q2.pop();
            return v;
        }
    }
    
    int top() {
        int v;
        if(!q1.empty()){
            v=q1.front();
        }
        else{
            v=q2.front();
        }
        return v;
    }
    
    bool empty() {
        if(q1.empty()&&q2.empty())
            return true;
        else 
            return false;
    }
};

