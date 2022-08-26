class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0,i=0;
        int e=nums.size();
 while(i<e){
     if(nums[i]!=val){
  nums[j]=nums[i];
         j++;
         }
     i++;
     }
        return j;
    }
};