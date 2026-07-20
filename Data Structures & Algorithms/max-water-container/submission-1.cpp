class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l =0;
        int maxi = 0;
        int r = nums.size()-1;
        while(l<r){
            int area = min(nums[l], nums[r])*(r-l);
             maxi = max(maxi,area);
            if(nums[l]<nums[r]){
                l++;
            }
            else {
                r--;
            }
        }
        return maxi;
    }
};
