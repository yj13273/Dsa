class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[write] = nums[i];
                write++;
            }
        }
        for (int i = write; i < n; i++){
            nums[i] = 0;
        }
    }
};