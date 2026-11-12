class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {

        int n = arrivalTime + delayedTime;

        return n%24;
        
    }
};