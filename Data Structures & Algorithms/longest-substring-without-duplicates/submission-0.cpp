class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int>   mp;
      int l =0;
      int len =0;
      for(int i =0; i<s.size(); i++){
        mp[s[i]]++;
        while(mp[s[i]]>1){
            mp[s[l]]--;
            l++;
        }
        len= max(len, i-l+1);

      }
      return len;
        
    }
};
