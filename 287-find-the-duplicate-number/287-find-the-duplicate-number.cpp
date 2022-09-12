class Solution {
public:
    int findDuplicate(vector<int>& n) {
        map<int,int> m;
        int as;
        for(auto x:n){
            m[x]++;
        }
    for(auto it : m){
            if(it.second>1){
                as=it.first;
            }
        }
        return as;
    }
};