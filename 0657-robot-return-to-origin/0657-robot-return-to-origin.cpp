class Solution {
public:
    bool judgeCircle(string moves) {

        int u=0,d=0,l=0,r=0;

        int n = moves.size();

        for(int i =0;i<n;i++) {
            if(moves[i] == 'R') {
                r++;
            }
            else if(moves[i] == 'L') {
                l++;
            }
            else if(moves[i] == 'U') {
                u++;
            }
            else {
                d++;
            }
        }

        return (l == r) && (u == d);
        
    }
};