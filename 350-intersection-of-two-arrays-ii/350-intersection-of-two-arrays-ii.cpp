class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        multiset<int> elements;
        for (int i:nums1)
            elements.insert(i);
        
        vector<int> ans;
        for (int i:nums2){
            auto found=elements.find(i);
            if (found!=elements.end()){
                ans.push_back(i);
                elements.erase(found);
            }
        }
        
        return ans;
        
    }
};