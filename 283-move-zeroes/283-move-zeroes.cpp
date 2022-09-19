class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        set<int> positions;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0)
                positions.insert(i);
        }
        
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0){
                auto found=positions.upper_bound(i);
                if (found==positions.end())
                    break;
                else{
                    swap(nums[i],nums[*found]);
                    positions.erase(found);
                }
            }
        }
        
    }
};