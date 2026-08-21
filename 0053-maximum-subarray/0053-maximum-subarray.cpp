class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int csum = nums[0];
        int maxsum = nums[0];

        for(int i =1;i<n;i++) {
            csum = max(nums[i],csum+nums[i]);
            maxsum = max(maxsum,csum);
        }
        return maxsum;
    }
};