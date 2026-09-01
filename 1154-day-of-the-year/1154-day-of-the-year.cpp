class Solution {
public:
    int dayOfYear(string date) {

        vector<int>a = {31,28,31,30,31,30,31,31,30,31,30,31};

        int  y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));

        if((y%4 == 0 && y%100 != 0) || (y % 400 == 0) ) {
            a[1] = 29;
        }
        

        int ans = 0;

        for(int i =0;i<m-1;i++) {
            ans += a[i];
        }

        ans +=d;

        return ans;

        
    }
};