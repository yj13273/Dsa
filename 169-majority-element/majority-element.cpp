class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        int req = n / 2;
        map<int, int> m;
        for (int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        
        int max_val = INT_MIN;
        int max_key;
        for (const auto &i: m){
            if ((i.second > max_val) && (i.second > req)){
                max_val = i.second;
                max_key = i.first;
            }      
        }
        return max_key;
    }
};