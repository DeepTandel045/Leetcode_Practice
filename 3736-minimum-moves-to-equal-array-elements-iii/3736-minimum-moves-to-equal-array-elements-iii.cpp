class Solution {
public:
    int minMoves(vector<int>& nums) {

        int maxi = INT_MIN;

        int n = nums.size();

        int sum = 0;

        for(int i =0;i<n;i++) {
            sum += nums[i];
            if(nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        int sums = (  maxi*n  ) - sum;

        return sums;
        
    }
};