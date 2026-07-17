class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        for(int i =0; i<s1.size(); i++){
            mp1[s1[i]]++;
        }
        int windows = s1.size();
        unordered_map<char,int>mp2;
        for(int i =0; i<s2.size(); i++){
            mp2[s2[i]]++;
            if(i>=windows){
                mp2[s2[i-windows]]--;
                if(mp2[s2[i-windows]]==0){
                    mp2.erase(s2[i-windows]);
                }
            }
            if(mp1==mp2){
                return true;
            }
        }
        return false;
    }
};
