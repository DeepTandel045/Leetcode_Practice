class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();

        if (n==1) return nums[0];

        for(int i =1;i<n;i+=2) {
            if(nums[i-1] != nums[i]) {
                return nums[i-1];
            }
        } 

        return nums[n-1];

    }
};