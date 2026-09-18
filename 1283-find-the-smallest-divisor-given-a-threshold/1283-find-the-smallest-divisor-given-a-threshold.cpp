class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            long long sum = 0;

            for (int x : nums) {
                sum += (x + mid - 1) / mid;
            }

            if (sum <= threshold) {
                high = mid;       // Try smaller divisor
            } 
            else {
                low = mid + 1;    // Need larger divisor
            }
        }

        return low;
    }
};