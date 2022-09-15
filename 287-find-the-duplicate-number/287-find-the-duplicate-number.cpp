class Solution {
public:
    int findDuplicate(vector<int>& nums) {    
        vector<int> sorted;
        int ans;
        for (int i:nums)
            sorted.push_back(i);
        sort(sorted.begin(),sorted.end());
        for (int i=0;i<sorted.size()-1;i++){
            if (sorted[i]==sorted[i+1]){
                ans=sorted[i];
                break;
            }
        }
        return ans;
    }
};