//https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int count = 0;
            int n = dominoes.size();
            int a, b, c, d;
            for(int i=0; i<n; i++){
                for (int j=i+1; j<n; j++){
                    a = dominoes[i][0];
                    b = dominoes[i][1];
                    c = dominoes[j][0];
                    d = dominoes[j][1];
                    if ((a == c and b == d) or (a == d and b ==c)){
                        count++;
                    }
                }
            }
            return count;
        }
    };