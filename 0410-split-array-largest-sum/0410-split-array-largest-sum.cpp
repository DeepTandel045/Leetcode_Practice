class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();

        int maxi=0,c=0;

        for(int i =0;i<n;i++) {
            if(maxi<nums[i]) {
                maxi = nums[i];
            }
            c += nums[i];
        }

        int low = maxi , high = c,sum=0;

        while(low<=high) {

            
            int mid = low + (high - low)/2;

           int groups = 1;
            int currentSum = 0;

            for(int x : nums) {

              if(currentSum + x <= mid) {
                 currentSum += x;
                     }
                  else {
                    groups++;
                   currentSum = x;
                 }
                }

                if(groups>k) {
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }

        }

        return low;
    }
};