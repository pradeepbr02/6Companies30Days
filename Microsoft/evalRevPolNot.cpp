
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="/" and tokens[i]!="*"){
                st.push(stoi(tokens[i]));
                continue;
            }
            else{
               long long int m = st.top();
                st.pop();
                long long int n = st.top();
                st.pop();

                if(tokens[i]=="+"){
                    st.push(m+n);
                }
                else if(tokens[i]=="-"){
                    st.push(n-m);
                }
                else if(tokens[i]=="*"){
                    st.push(n*m);
                }
                else if(tokens[i]=="/"){
                    st.push(n/m);
                }



            }
        }
        return st.top();
    }
};