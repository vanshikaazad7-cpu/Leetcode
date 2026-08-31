class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit to the first
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0 and the carry continues to the left
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add a 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};