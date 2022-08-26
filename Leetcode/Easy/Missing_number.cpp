class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,sum1=0;
    for(int i=1;i<=nums.size();i++){
    sum=sum+i;
        }
   for(int i=0;i<nums.size();i++){
            sum1=sum1+nums[i];
       }
        return sum-sum1;
    }
};