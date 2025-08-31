//https://leetcode.com/problems/fruit-into-baskets/description/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int first = 0;
        int x = 0;
        unordered_map<int,int> basket;
        for(int last = 0; last < n; last++){
            basket[fruits[last]]++;
            while(basket.size() > 2){
                basket[fruits[first]]--;
                if(basket[fruits[first]] == 0) basket.erase(fruits[first]);
                first++;
            }
            x = max(last - first + 1, x);
        }
        return x;
    }
};