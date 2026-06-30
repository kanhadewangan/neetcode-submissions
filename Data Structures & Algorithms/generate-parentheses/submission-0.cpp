class Solution {
public:
    
void back(int opn, int cls , string temp, vector<vector<string>>&result,int n ){
    if(opn==n && cls ==n){
        result.push_back({temp});
        return;

    }
    if(opn<n){
        back(opn+1, cls, temp+'(', result, n);
    }
    if(cls<opn){
        back(opn, cls+1, temp+')', result, n);
    }
    return;

}
vector<string> generateParenthesis(int n) {
    int opn = 0;
    int cls = 0;
    vector<vector<string>> result;
    back(opn, cls, "", result, n);
    vector<string> res;
    for(auto &x: result){
        res.push_back(x[0]);
    }
    return res;
}
};
