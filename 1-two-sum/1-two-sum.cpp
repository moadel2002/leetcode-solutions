class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int,int>> pairs;
        for (int i=0;i<nums.size();i++){
            pairs.push_back({nums[i],i});
        }
        sort(pairs.begin(),pairs.end());
        int first=0,second=nums.size()-1;
        while(first<second){
            if (pairs[first].first+pairs[second].first<target) first++;
            else if (pairs[first].first+pairs[second].first>target) second--;
            else{
                ans.push_back(pairs[first].second);
                ans.push_back(pairs[second].second);
                break;
            }
        }
        return ans;
    }
};