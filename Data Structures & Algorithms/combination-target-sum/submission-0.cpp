class Solution {
public:

void back(int idx, vector<int>&nums, vector<int>&temp, vector<vector<int>>&result, int target){
    if(target ==0){
        result.push_back(temp);
        return;
    }
    for(int i =idx; i<nums.size(); i++){
        if(nums[i]>target) continue;
        temp.push_back(nums[i]);
        back(i, nums, temp, result, target-nums[i]);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        vector<vector<int>>result;
        back(0,nums, temp, result, target);
        return result;
        
    }
};
