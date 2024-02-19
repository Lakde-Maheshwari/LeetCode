class Solution {
public:
    int search(vector<int>& a, int target) {
        int low = 0;
        int n = a.size();
        int high = n-1;
        int mid = low + (high - low)/2;
        while(low<=high){
        if(a[mid] == target){
            return mid;
        }
        if(a[low] <= a[mid]){
            if(a[low] <= target && target < a[mid]){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else{
            if(target > a[mid] && target <= a[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        mid = low + (high - low)/2;
        }

        return -1;
    }
};