class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,zeros=0;
        int len=nums.size();

        for (int i:nums){
            if (i==0) zeros++;
            else product*=i;
        }

        vector<int> ans;
        if (zeros==0){
           for (int i:nums){
                ans.push_back(product/i) ;
            }
        }

        else if (zeros==1){
            for (int i:nums){
                if (i==0) ans.push_back(product);
                else ans.push_back(0);
            }
        }

        else{
            for (int i=0;i<len;i++)
                ans.push_back(0);
        }

        return ans;
    }
};