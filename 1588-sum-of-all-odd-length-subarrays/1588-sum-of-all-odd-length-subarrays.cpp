class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int sum=0;
        for(int i=0;i<arr.size();i++){
            int start=arr.size()-i;
            int end=i+1;
            int total=start*end;
            int odd=(total+1)/2;
            sum+=odd*arr[i];
        }
        return sum;
    }
};