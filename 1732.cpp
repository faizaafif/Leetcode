//https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int pref[n];
        pref[0] = gain[0];
        int maxi = 0;
        maxi = max(pref[0], maxi);
        for(int i = 1; i < n; i++){
            pref[i] = pref[i - 1] + gain[i];
            maxi = max(pref[i], maxi);
        }
        return maxi;
    }
};