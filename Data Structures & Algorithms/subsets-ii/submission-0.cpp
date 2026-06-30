class Solution {
public:
     void back(int idx , vector<int>&nums, vector<int>&temp, vector<vector<int>>&result){
    result.push_back(temp);

    for(int i = idx; i<nums.size(); i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        back(i+1, nums, temp, result);
        temp.pop_back();
    }
 }
 vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> temp;
    back(0, nums, temp, result);
    return result;
        
    }
};
