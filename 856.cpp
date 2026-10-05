//https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(0);
            } 
            else{
                int curr = st.top();
                st.pop();

                if(curr == 0) curr = 1;
                else curr *= 2;
                
                st.top() += curr;
            }
        }
        return st.top();
    }
};