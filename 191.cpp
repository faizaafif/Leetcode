//https://leetcode.com/problems/number-of-1-bits/description/

class Solution {
public:
    int hammingWeight(int n) {
        // int count=0;
        // string s="";
        // while(n !=0 ){
        //     if( n%2 == 0) s+= '0';
        //     else s+= '1';
        //     n/=2;
        // }
        // int len = s.length();
        // for(int i=0; i<len; i++){
        //     if(s[i] == '1') count++;
        // }
        // return count;
        int count = 0;
        while(n != 0){
            if(n & 1) count++;
            n = n>>1;
        }
        return count;
    }
};