class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int ans=0;
        unordered_map<int,int> freq;
        for (int i=0;i<nums.size();i++){
            if (i!=0)
                nums[i]+=nums[i-1];
            if (nums[i]==k)
                ans++;
            if (freq.find(nums[i]-k)!=freq.end())
                ans+=(freq[nums[i]-k]);
            freq[nums[i]]++;
        }
        
        return ans;
    }
};