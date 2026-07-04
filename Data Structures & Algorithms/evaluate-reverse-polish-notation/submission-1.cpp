class Solution {
public:
   
    int evalRPN(vector<string>&s){
        stack<int>st;
        for(string str: s){
            if(str=="+" || str=="-" || str=="*" || str=="/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                switch(str[0]){
                    case '+':
                        st.push(a+b);
                        break;
                    case '-':
                        st.push(a-b);
                        break;
                    case '*':
                        st.push(a*b);
                        break;
                    case '/':
                        st.push(a/b);
                        break;
                }
        }
        else{
                st.push(stoi(str));
            }
        }
        return st.top();
    }
};
