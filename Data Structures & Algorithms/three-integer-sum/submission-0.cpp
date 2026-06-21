class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l =0;
        int r = nums.size() -1;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size(); i++){
            while(i>0 && i<nums.size() && nums[i]==nums[i-1]){
                i++;
            }
            l = i+1;
            r = nums.size()-1;
            while(l<r){
                int sum = nums[l]+ nums[r]+ nums[i];
                if(sum==0){
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]== nums[l+1]){
                        l++;
                    }
                    while(l<r && nums[r]== nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;

                }
                else if (sum<0){
                    l++;
                }
                else {
                    r--;
                }
            }

        }
        return ans;
    }
};
