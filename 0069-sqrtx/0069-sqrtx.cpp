class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        
        long long left = 0, right = x;
        long long ans = 0;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                ans = mid; // Store potential answer
                left = mid + 1; // Try to find a larger integer root
            } else {
                right = mid - 1; // Try a smaller range
            }
        }
        
        return ans;
    }
};