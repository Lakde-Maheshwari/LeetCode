class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isMonotonic=0;
        int f=0;

        for(int i=1;i<nums.size();i++){    //for monotonic increasing
            if(nums[i]<nums[i-1]){        //if curr value is less than previous value
                f=1;
                break;
            }
        }

        if(f==0)
        return 1;

        f=0;

        for(int i=1;i<nums.size();i++){   //for monotonic decreasing
            if(nums[i]>nums[i-1]){        //if curr value is greater than previous value
                f=1;
                return 0;
            }
        }

        return 1;

    }
};