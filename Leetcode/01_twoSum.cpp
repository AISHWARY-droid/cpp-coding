class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();;
    
    //iterating over all the first and second number
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++)
        
        /*checking whether the elements sum 
        is equal to the target or not*/
        
        if(nums[i] + nums[j] == target){
            
            /* if the sum is equal to target
             then return the indices of the elements*/
            
            return {i, j};
        }
    } return{};
}
};