class Solution {
public:

int sumByD(vector<int>& nums, int d) {
        int sum = 0;

        for (int num : nums) {
            sum += (num + d - 1) / d;
        }

        return sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {\

    int n = nums.size();

    int low=1,ans=-1;

    int high = *max_element(nums.begin(),nums.end());

    while(low<=high) {

        int mid = low + (high-low)/2;
      
      int g = sumByD(nums,mid);

        if(g<=threshold) {
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }

    }

    return ans;
        
    }
};