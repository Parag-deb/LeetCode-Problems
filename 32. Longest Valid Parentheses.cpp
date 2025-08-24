class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); //initial insert -1
        int maxLen = 0;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                st.push(i);
            }else {
                st.pop();
                if(st.empty()){
                    st.push(i); // it's kind of reset the stack
                } else {
                    maxLen = max(maxLen , i - st.top());
                }
            }
        }
        return maxLen;
    }
};