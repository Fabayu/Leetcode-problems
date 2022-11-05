class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int res=0;
        vector<int> v(3,-1);
        for(int i=0;i<n;i++){
           v[s[i]-'a']=i;
            res+=1+min({v[0],v[1],v[2]});
            
        }
        return res;
        
    }
};


// iteration 1:
// v[0]=0;
// res=-1;

// iteration 2:
// v[1]=1;

