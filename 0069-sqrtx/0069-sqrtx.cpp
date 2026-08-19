class Solution {
public:
    int mySqrt(int x) {

        int c = 0;

        long long n = x;

        for(long long i =1;i*i<=n;i++) {
            if(i*i<=n) {
               c = i;
            }
            //c = i;
        }

        return c;

        
    }
};