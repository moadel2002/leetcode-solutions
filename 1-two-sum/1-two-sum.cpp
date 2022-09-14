class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pos;
        vector<int> ans(2);
        for (int i=0;i<nums.size();i++){
            int wanted=target-nums[i];
            if (pos.find(wanted)!=pos.end()){
                ans={i,pos[wanted]};
                return ans;
            }
            pos[nums[i]]=i;
        }
        return ans;
    }
};