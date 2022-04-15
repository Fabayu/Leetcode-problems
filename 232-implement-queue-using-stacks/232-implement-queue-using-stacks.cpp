
// class MyQueue {
// public:
// stack s1,s2;
// MyQueue() {

// }

// void push(int x) {
//     while(true){
        
        
//         if(s2.empty()){
//             break;
//         } else{
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     s1.push(x);
//     while(true){
       
//             if(s1.empty()){
//             break;
//         } else{
//             s2.push(s1.top());
//             s1.pop();
//         }
//     }
    
        
// }

// int pop() {
//     int res =0;
//     if(!s2.empty()){
//         res = s2.top();
//         s2.pop();
//     }
    
//     return res;
// }

// int peek() {
//     return s2.top();
// }

// bool empty() {
//     return s2.empty();
// }
// };



class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
        
    }
    
    void push(int x) 
    {
    if(s1.empty())
    {
        s1.push(x);
    }
        else
        {
            
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
            s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    }
    
    int pop() {
   int x=s1.top();
        s1.pop();
        return x;
        
    }
    
    int peek() {
        return s1.top();
        
    }
    
    bool empty() {
        return (s1.empty());
        
    }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */