class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int insert_position=nums.size();
   for(int i=0;i<nums.size();i++){
         if(nums[i]>=target){
            insert_position=i; 
            break; 
             }
     }  
        return insert_position;
    }
};