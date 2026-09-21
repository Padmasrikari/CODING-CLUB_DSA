class Solution {
public:
    bool isPalindrome(int x) {
        int n=0,t=x;
        if(x>=0){
        while(x!=0){
            int d=x%10;
            x=x/10;
            if(n>INT_MAX/10 || n==INT_MAX/10 && d>7) return 0;
            if(n<INT_MIN/10 || n==INT_MIN/10 && n<-8) return 0;
            n = (n*10) +d;
        }
        return (t==n);
    }
    return false;
    }
};