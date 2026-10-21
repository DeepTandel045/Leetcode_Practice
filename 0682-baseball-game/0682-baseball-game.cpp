class Solution {
public:
    int calPoints(vector<string>& operations) {

        int n = operations.size();
        stack<int>a;

        for(int i =0;i<n;i++) {

            if(operations[i] == "C") {
                a.pop();
            }
            else if(operations[i] == "D") {
                a.push(a.top() * 2);
            }
            else if(operations[i] == "+" ) {
                int s = 0;
                int temp = a.top();
                a.pop();
                s  = temp + a.top();
                a.push(temp);
                a.push(s);
            }
            else {
                a.push(stoi(operations[i]));
            }


        }

        long long sum = 0;

        stack<int>ans = a;

        while(!ans.empty()) {
            sum += ans.top();
            ans.pop();
        }

        return sum;
        
    }
};