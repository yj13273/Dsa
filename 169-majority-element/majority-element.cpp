class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyer - Moore Voting Algorithm
        int n = nums.size();
        if (n == 1) return nums[0];
        int maj = nums[0];
        int count = 1;
        for (int i = 1; i < n; i++){
            if (count == 0){
                maj = nums[i];
            }
            if (nums[i] == maj){
                count++;
            }else{
                count--;
            }
        }
        return maj;
    }
};