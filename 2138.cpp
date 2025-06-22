//https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/description/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string> ans;
        string str;
        for(int i = 0; i < n; i += k){
            str = s.substr(i,k);
            while(str.length() < k){
                str += fill;
            }
            ans.push_back(str);
        }
        return ans;
    }
};