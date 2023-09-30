// LeetCode Problem
// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int val = 0;

        for(int k = 1 ; k < nums.size() ; k++){
            if(nums[k] != nums[val]){
                val++;
                nums[val] = nums[k];
            }
        }
        
        nums.resize(val+1);
        return val+1;
    }
};
