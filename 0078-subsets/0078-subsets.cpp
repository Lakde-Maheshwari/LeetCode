class Solution {
public:
    void Subseq(vector<int> &arr,int index,int n,vector<vector<int >>&ans,vector<int> &temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }
    // ek to hum us element ko lenge vrna nhi lenge do hi ho skta hai
    // no ke case mein ye aayega
    Subseq(arr,index+1,n,ans,temp);
    // yes ke case mein pehle wo number ko add kro fir uskko call lagao
    temp.push_back(arr[index]);
    Subseq(arr,index+1,n,ans,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int> temp;
        Subseq(nums,0,n,ans,temp);
        return ans;
    }
};