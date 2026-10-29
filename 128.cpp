//https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }
        int maxi = 0;
        for(auto it : st){
            if(st.find(it - 1) == st.end()) {
                int c = 1;
                int num = it;
                while(st.find(num + 1) != st.end()) {
                    c++;
                    num++;
                }
                maxi = max(maxi, c);
            }
        }
        return maxi;
        
    }
};