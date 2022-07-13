class Solution {
public:
    string removeDuplicateLetters(string s) {
    vector<int> lastindex(26,0);;
        for(int i=0;i<s.size();i++){
            lastindex[s[i]-'a']=i;
        }
        vector<bool> seen(26,false);
        stack<char> st;
        
        
        
        for(int i=0;i<s.size();i++)
        {
            int curr=s[i]-'a';
        if(seen[curr])continue;
            while(st.size()>0&&st.top()>s[i]&&i<lastindex[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
                
            }
            st.push(s[i]);
            seen[curr]=true;
        } 
          string ans="";
          while(st.size()!=0){
              ans+=st.top();
              st.pop();
          }  
        reverse(ans.begin(),ans.end());
            return ans;
        }
        
};
 
        
       
          // if seen continue as we need to pick one char only
            
//                 seen[st.top() - 'a'] = false; // pop out and mark unseen
//                 st.pop();
//             }
//             st.push(s[i]); // add into stack
//             seen[curr] = true; // mark seen
//         }
        
//         string ans = "";
//         while (st.size() > 0){
//             ans += st.top();
//             st.pop();
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
    
//    cbacdcbc
// -->stack to put characters
// --> bool area to mark seen       
// --> lastindex array to mark when last index is found      
// --> scan the array and check if 
//     ----stack is empty siply push
//     ----upcoming>top_stack  just push in stack and mark seen 
//     ----upcoming<top_stack  just pop but before popping 
//                       -->check if lindex is presnd in future -->if no then no pop
//                                                            if yes pop and mark unseen 
                                                               
//    --->keep dpong this and finally reverse                                                             
                                                               
                                                               