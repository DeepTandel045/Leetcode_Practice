class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size(),mini=0,c=0;

        for(int i =0;i<n;i++) {
            
                mini = max(mini,weights[i]);
            
            c+=weights[i];
        }

        int low = mini , high = c;

        while(low<=high) {

            int mid = low + (high - low)/2;

           int groups = 1;
            int currentSum = 0;

            for(int x : weights) {

              if(currentSum + x <= mid) {
                 currentSum += x;
                     }
                  else {
                    groups++;
                   currentSum = x;
                 }
                }

                if(groups>days) {
                    low = mid+1;
                }
                else {
                    high = mid-1;
                }
         }

         return low;


    }
};