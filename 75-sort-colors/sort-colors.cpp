class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                cnt0++;
            }else if(nums[i] == 1){
                cnt1++;
            }else if(nums[i] == 2){
                cnt2++;
            }
        }
        cout << cnt0 << " " << cnt1 << " " << cnt2;
        int j = 0;
        while(cnt0 > 0){
            nums[j] = 0;
            cnt0--;
            j++;
        }   
        while(cnt1 > 0){
            nums[j] = 1;
            cnt1--;
            j++;
        }  
        while(cnt2 > 0){
            nums[j] = 2;
            cnt2--;
            j++;
        }  
    }
};