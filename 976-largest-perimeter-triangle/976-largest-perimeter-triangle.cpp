class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        // int n =nums.size();
        // int i=0;
        // int s;
        // s=a[i]+a[i+1]+a[i+2];
        // int a=sqrt(s(s-a[i])(s-a[i+1])(s-a[i+2]));
        // r
                sort(A.begin(), A.end());
        for (int i = A.size() - 1 ; i > 1; --i)
            if (A[i] < A[i - 1] + A[i - 2])
                return A[i] + A[i - 1] + A[i - 2];
        return 0;

    }    
    
};