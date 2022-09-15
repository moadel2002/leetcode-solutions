class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int freq[n+1];
        memset( freq, 0, sizeof(freq) );
        for (int i:nums){
            freq[i]++;
        }
        
        vector<int> ans;
        for (int i=1;i<=n;i++){
            if (!freq[i]) ans.push_back(i);
        }
        return ans;
    }
};