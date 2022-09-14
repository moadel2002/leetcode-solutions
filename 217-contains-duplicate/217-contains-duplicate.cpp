class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> distinct;
        for (int i=0;i<nums.size();i++){
            distinct.insert(nums[i]);
        }
        
        if (distinct.size()!=nums.size()) return true;
        else return false;
    }
};