class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();

        int low = *max_element(weights.begin(),weights.end());
        int high=0;

        for(int i =0;i<n;i++) {
            high += weights[i];
        }

        int ans = high;

        while(low<=high) {

            int mid = low + (high - low) / 2;
            int c=1;
            int sum =0;

            for(int i =0;i<n;i++) {

                 if(sum + weights[i] > mid) {
                c++;
                sum = 0;
            } 

            sum += weights[i];

            }

            if(c<=days) {
                ans=mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }

        }   

        return ans;
        
    }
};