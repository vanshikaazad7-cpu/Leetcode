class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; 
        
        for (int j = 1; j < nums.size(); j++) {
            // If we find a new unique element
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        
        // Return the number of unique elements
        return i + 1;
    }
};