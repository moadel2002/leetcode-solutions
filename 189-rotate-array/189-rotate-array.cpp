class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size=nums.size();
        vector<int> new_arr(size);
        
        for (int i=0;i<size;i++){
            int new_idx=(i+k)%size;
            new_arr[new_idx]=nums[i];
        }
        nums=new_arr;
    }
};