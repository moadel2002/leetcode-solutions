class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> distinct;
        for (auto &i:nums){
            distinct.insert(i);
        }
        
        if (distinct.size()!=nums.size()) return true;
        else return false;
    }
};