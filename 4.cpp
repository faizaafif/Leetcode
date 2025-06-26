//https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num = nums1;
        for(int i = 0; i < nums2.size(); i++){
            num.push_back(nums2[i]);
        }
        sort(num.begin(),num.end());
        int n = num.size();
        if(n % 2 == 0) return (num[n/2 - 1] + num[n/2]) / 2.0;
        else return (num[n/2]);
    }
};