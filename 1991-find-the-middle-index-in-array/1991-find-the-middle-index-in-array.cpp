class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int n = nums.size();

        int k =0;
        
        while(k<n) {

            long long lsum=0,rsum=0;

        for(int i =0;i<k;i++) {
            lsum += nums[i];
        }

        for(int i = k+1;i<n;i++) {
            rsum += nums[i];
        } 
        
        k++;


        if(lsum == rsum ) return k-1;

        }
        
        return -1;
    }
};