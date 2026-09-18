class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;

        for (int x : bloomDay) {
            if (x <= day) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required = 1LL * m * k;

        if (required > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                high = mid;       // possible, try smaller day
            }
            else {
                low = mid + 1;    // not possible, need more days
            }
        }

        return low;
    }
};