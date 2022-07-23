


class Solution {
public:
    void merge(vector<int> &count, vector<pair<int, int> > &vayu, int left, int mid, int right) {
        vector<pair<int, int> > tmp(right-left+1);
        int i = left;
        int j = mid+1;
        int k = 0;

        while (i <= mid && j <= right) {
            //  we're sorting in descending order
            if (vayu[i].first <= vayu[j].first) { 
                tmp[k++] = vayu[j++];
            }
            else {
                // line responsible to update count, related to problem constraint, 
                //just regular mergeSort 
                count[vayu[i].second] += right - j + 1;
                tmp[k++] = vayu[i++];
            }
        }
        while (i <= mid) {
            tmp[k++] = vayu[i++];
        }
        while (j <= right) {
            tmp[k++] = vayu[j++];
        }
        for (int i = left; i <= right; i++)
            vayu[i] = tmp[i-left];
    }        

    void mergeSort(vector<int> &count, vector<pair<int, int> > &vayu, int left, int right) {
        if (left >= right) 
            return;

        int mid = left + (right-left)/2;
        mergeSort(count, vayu, left, mid);
        mergeSort(count, vayu, mid+1, right);
        merge(count, vayu, left, mid, right);
    }

    vector<int> countSmaller(vector<int>& nums) {
        int N = nums.size();

        vector<pair<int, int> > vayu(N);
        for (int i = 0; i < N; i++)   
            vayu[i] = make_pair(nums[i], i);

        vector<int> count(N, 0);
        // sorting in descending order
        mergeSort(count, vayu, 0, N-1);

        return count;
    }
};