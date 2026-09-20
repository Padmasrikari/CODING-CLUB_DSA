class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0,s=INT_MIN;
        for(int i:nums){
            currsum += i;
            s=max(s,currsum);
            if(currsum<0) currsum=0;
        }
        return s;
    }
};