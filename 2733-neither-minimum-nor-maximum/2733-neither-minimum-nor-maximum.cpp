class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(),nums.end());

        int a = nums[0],b=nums[n-1];

        for(int i =1;i<n;i++) {
            if(nums[i]!=b) {
                return nums[i];
            }
        }

        return -1;
        
    }
};