class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0,ptr=0;
        for (int i=0;i<nums.size();i++){
            if (i==nums.size()-1){
                swap(nums[i],nums[ptr]);
                ans++;
            }
            else if (nums[i]!=nums[i+1]){
                swap(nums[i],nums[ptr]);
                ptr++,ans++;
            }
        }
        
        return ans;
    }
};