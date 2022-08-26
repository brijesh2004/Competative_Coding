class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1,b=-1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            a=i;
            break;
            }
      
         }
  for(int j=nums.size()-1;j>=0;j--){
         if(nums[j]==target){
             b=j;
             break;
             }
            }
        return {a,b};
    }
};