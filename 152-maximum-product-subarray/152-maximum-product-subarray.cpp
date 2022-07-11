class Solution {
public:
    int maxProduct(vector<int>& A) {
       int cpod=1;
        int sum=INT_MIN;
        for(int i=0;i<A.size();i++){
            cpod*=A[i];
            sum=max(sum,cpod);
            if(cpod==0){
                cpod=1;
            }
        }
        cpod=1;
        for(int i=A.size()-1;i>=0;i--){
            cpod*=A[i];
            sum=max(cpod,sum);
            if(cpod==0){
                cpod=1;
            }
        }
        return sum;
    } 
};



