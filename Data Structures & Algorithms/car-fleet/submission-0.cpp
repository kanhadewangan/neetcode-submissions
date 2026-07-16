class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>st;
        vector<pair<int, double>>v;
        int n = position.size();
        for(int i=0; i<n; i++){
            double time = (double)(target - position[i]) / speed[i];
            v.push_back({position[i], time});
        }
        sort(v.begin(), v.end());
        for(int i = n-1; i>=0; i--){
            if(st.empty() || v[i].second > st.top()){
                st.push(v[i].second);
            }
        }
        return st.size();
    }
};