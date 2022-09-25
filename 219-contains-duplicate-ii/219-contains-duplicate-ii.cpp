class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> idx;
        for (int i=0;i<nums.size();i++){
            
            if (idx.find(nums[i])!=idx.end()){
                if (i-idx[nums[i]]<=k)
                    return true;
                idx[nums[i]]=i;
            }
            
            idx[nums[i]]=i;
        }
        
        return false;
    }
};