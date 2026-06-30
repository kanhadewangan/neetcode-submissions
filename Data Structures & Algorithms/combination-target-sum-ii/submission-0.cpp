class Solution {
public:

void back(int idx , vector<int>&v ,vector<int>&temp, vector<vector<int>>&result, int target){
    if(target==0){
        result.push_back(temp);
        return;
    }
    for(int i = idx; i<v.size(); i++){
        if(i>idx && v[i]==v[i-1]) continue;
        if(v[i]>target) break;
        temp.push_back(v[i]);
        back(i+1, v, temp, result, target-v[i]);
        temp.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> result;
    vector<int> temp;
sort(candidates.begin(), candidates.end());
    back(0, candidates, temp, result, target);
    return result;
        
    }
};
