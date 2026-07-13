class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        
        int c1 = 0,c2=0;
        
        vector<int>a;
        
        for(int i =0;i<n;i++) {
            if(nums[i] == target) {
                a.push_back(i);
                c1++;
                break;
            }
        }
        
        for(int i = n-1;i>=0;i--) {
            if(nums[i] == target) {
                a.push_back(i);
                c2++;
                break;
            }
        }
        
        if(c1 == 0 && c2 == 0) {
            a.push_back(-1);
            a.push_back(-1);
            
            
        }
        
        return a;
        
    }
};