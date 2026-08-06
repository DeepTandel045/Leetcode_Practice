class Solution {
public:
    int findMin(vector<int>& nums) {

        int n = nums.size();
        int smallest = INT_MAX;

        int low = 0, high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[mid]) {

                smallest = min(smallest,nums[low]);
                low = mid+1;
               
            } else {

                smallest = min(smallest,nums[mid]);
                high = mid-1;

            }
        }

        return smallest;
    }
};