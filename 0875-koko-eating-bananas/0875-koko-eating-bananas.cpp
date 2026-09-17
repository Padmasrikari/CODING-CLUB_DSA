class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid;
            }

            if (hours <= h) {
                // Speed works, try a smaller speed
                high = mid - 1;
            } else {
                // Speed is too slow
                low = mid + 1;
            }
        }

        return low;
    }
};