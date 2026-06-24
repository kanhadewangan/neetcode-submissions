class Solution {
public:
    bool isValid(string s) {
        string str = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                str+=s[i];
            }
            else{
                if(str.size()==0){
                    return false;
                }
                char c = str.back();
                if((c=='(' && s[i]==')') || (c=='{' && s[i]=='}') || (c=='[' && s[i]==']')){
                    str.pop_back();
                }
                else{
                    return false;
                }
            }
        } 
    return str.empty();

    }

};
