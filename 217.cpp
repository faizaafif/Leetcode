//https://leetcode.com/problems/contains-duplicate/description/

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int c = 0;
//         for(int i = 0; i < n-1; i++){
//             if(nums[i] == nums[i+1]) c++;
//         }
//         return c > 0;
//     }
// };

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i : nums){
            if(st.find(i) != st.end()){
                return true;
            }
            st.insert(i);
        }
        return false;
    }
};