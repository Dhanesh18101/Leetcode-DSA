class Solution {
public:
    int sumOfsq(int n) {
        int ans=0;
        int rem;
        while(n!=0) {
            rem=n%10;
            ans+=rem*rem;
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do {
            slow=sumOfsq(slow);
            fast=sumOfsq(sumOfsq(fast));
        }while(slow!=fast);
        return slow==1;
    }
};