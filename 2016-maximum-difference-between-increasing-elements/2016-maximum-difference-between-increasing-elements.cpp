class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mn=nums[0],ans=-1;
        for (int i=0;i<nums.size();i++){
            ans=max(ans,nums[i]-mn);
            mn=min(mn,nums[i]);
        }
        
        if (ans==-1 or ans==0)
            return -1;
        else
            return ans;
    }
};