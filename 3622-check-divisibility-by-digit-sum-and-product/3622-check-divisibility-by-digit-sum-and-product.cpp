class Solution {
public:
    bool checkDivisibility(int n) {

        int s=0,m=1;

        for(int x = n;x>0;x/=10) {
            int r = x%10;
            s+=r;
            m*=r;
        }

        return n%(s+m)==0;
    }
};