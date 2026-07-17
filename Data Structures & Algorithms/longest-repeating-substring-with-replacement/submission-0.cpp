class Solution {
public:
    int characterReplacement(string s, int k) {
          unordered_map<char,int>mp;
           int l =0;
           int len =0;
           int maxFreq=0;
           for(int i =0; i<s.size(); i++){
            mp[s[i]]++;
            maxFreq = max(maxFreq, mp[s[i]]);
            while(i-l+1 -maxFreq>k){
                mp[s[l]]--;
                l++;
            }
            len = max(i-l+1, len);
           }
           return len;

        
    }
};
