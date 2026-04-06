class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        for(int n: nums){
            elementSum+=n;
            int temp=n;
            while(temp>0){
                digitSum+=(temp%10);
                temp/=10;
            }
        }
        return abs(elementSum-digitSum);
    }
};