class Solution {
public:
    int mySqrt(int x) {

        int ans = 1;

        for(long long  i =0;i*i<=x;i++) {
            ans = i;
        }
        return ans;

    }
};