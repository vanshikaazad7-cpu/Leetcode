class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            if (seen.count(num)) {
                return true; // Duplicate found
            }
            seen.insert(num);
        }
        
        return false;
    }
};