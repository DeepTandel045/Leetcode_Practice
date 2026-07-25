class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();

        int sum =0, minl=INT_MAX,left=0;

        for(int i =0;i<n;i++) {

            sum += nums[i];

            while(sum>=target) {
                minl = min(i-left+1,minl);
                sum -= nums[left];
                left++;
            }

        }

    if(minl!=INT_MAX) return minl;

        return 0;
        
    }
};