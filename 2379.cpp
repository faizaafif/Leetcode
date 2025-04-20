//https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int mincount=INT_MAX;
            for(int i=0; i<=blocks.length()-k; i++){
                int count=0;
                for(int j=i; j<k+i; j++){
                    if(blocks[j]=='W'){
                        count++;
                    }
                }
                mincount=min(mincount,count);
            }
            return mincount;
        }
    };