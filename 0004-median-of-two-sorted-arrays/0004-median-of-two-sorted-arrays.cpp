class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i<n && j<m){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i<n){
        while(i<n){
            ans.push_back(nums1[i]);
            i++;
        }
        }
        if(j<m){
        while(j<m){
            ans.push_back(nums2[j]);
            j++;
        }
        }
        int sum =  m + n;
        double median = 0;
        if(sum % 2 == 0){
            int idx = sum/2;
            median = (ans[idx] + ans[idx - 1])/2.0;
        }
        else{
            int idx = sum/2.0;
            median = ans[idx];
        }
        return median;
    }
};