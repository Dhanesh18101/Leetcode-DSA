class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int countZeros=0;
        int countOnes=0;
        int countTwos=0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0) {
                countZeros++;
            }else if(nums[i]==1) {
                countOnes++;
            }else {
                countTwos++;
            }
        }
        for(int i=0;i<countZeros;i++) {
            nums[i]=0;
        }
        for(int i=countZeros;i<countZeros+countOnes;i++) {
            nums[i]=1;
        }
        for(int i=countZeros+countOnes;i<n;i++) {
            nums[i]=2;
        } 
    }
};