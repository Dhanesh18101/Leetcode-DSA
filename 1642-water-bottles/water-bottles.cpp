class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink=numBottles;
        int empty=numBottles;
        while(empty>=numExchange) {
            int newbottles=empty/numExchange;
            drink+=newbottles;
            empty=empty%numExchange+newbottles;
        }
        return drink;
    }
};