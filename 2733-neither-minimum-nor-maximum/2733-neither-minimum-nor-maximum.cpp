class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        int n = nums.size();

        if(n<=2) return -1;

        int a = -1,b = 101;

        for(int i =0;i<n;i++) {
            a = max(a,nums[i]);
            b = min(b,nums[i]);
        }

        for(int i = 0;i<n;i++) {
            if((nums[i] != b ) && (nums[i] != a)) return nums[i];
        }

        return -1;
        
    }
};