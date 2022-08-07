

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        long long sum = mean*(m+n);
        for(auto it : rolls){
            sum -= it;
        }
        vector<int> ans;
        int num = 6;
        while(n){
            if(sum-num>=n-1){
                ans.push_back(num);
                sum -= num;
                n--;
            }
            else{
                num--;
            }
        }
        if(sum!=0) return {};
        return ans;
    }
};