class Solution {
public:
    int dayOfYear(string date) {

        vector<int>a = {31,28,31,30,31,30,31,31,30,31,30,31};

        int  y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));

        int ans = 0;

        
        
        if(m == 1)  ans = d;
        else if(m == 2)  ans = 31 + d;
        else if(m == 3)  ans = 59 + d;
        else if(m == 4)  ans = 90 + d;
        else if(m == 5)  ans = 120 + d;
        else if(m == 6)  ans = 151 + d;
        else if(m == 7)  ans = 181 + d;
        else if(m == 8)  ans = 212 + d;
        else if(m == 9)  ans = 243 + d;
        else if(m == 10) ans = 273 + d;
        else if(m == 11) ans = 304 + d;
        else                 ans = 334 + d;

if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m > 2) {
           ans += 1;
        }

        return ans;

        
    }
};