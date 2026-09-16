class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p = nums[0], t = 1;

        for(int i = 0; i < nums.size(); i++) {
            t *= nums[i];
            p = max(p, t);

            if(t == 0)
                t = 1;
        }

        t = 1;

        for(int i = nums.size() - 1; i >= 0; i--) {
            t *= nums[i];
            p = max(p, t);

            if(t == 0)
                t = 1;
        }

        return p;
    }
};