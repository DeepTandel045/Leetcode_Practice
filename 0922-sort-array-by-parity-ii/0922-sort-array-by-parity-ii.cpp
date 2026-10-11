class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int n = nums.size();

        vector<int>odd,even;

        for(int i =0;i<n;i++ ) {
            if(nums[i] % 2 ==0) {
                even.push_back(nums[i]);
            }
            else {

                odd.push_back(nums[i]);
            }
        }

        int j=0,k=0;
        for(int i = 0;i<n;i++) {
            if(i%2==0) {
                nums[i] = even[j];
                j++;
            }
            else {
                nums[i] = odd[k];
                k++;
            }
        }

        return nums;


        
    }
};