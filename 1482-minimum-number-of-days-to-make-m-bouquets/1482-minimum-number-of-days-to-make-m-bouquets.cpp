class Solution {
public:

    bool possible(vector<int>& bloomDay,int day, int m, int k) {

        int n = bloomDay.size();
        int c =0,ans=0;

        for(int i =0;i<n;i++) {
            if(bloomDay[i]<=day) {
                c++;
            }
            else {
                ans += c/k;
                c = 0;
            }

        }

        ans += c/k;

        if(ans>=m) return true;

        return false;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if((long long)m*k > n)  return -1; 

        int maxi = *max_element(bloomDay.begin(),bloomDay.end());
        int mini = *min_element(bloomDay.begin(),bloomDay.end());

        

        int low= mini,high = maxi,ans=-1;

        while(low<=high) {

            int mid = low + (high - low)/2;

            if(possible(bloomDay,mid,m,k) == true) {
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