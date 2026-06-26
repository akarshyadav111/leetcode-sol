class Solution {
public:
    long long minimumTime(vector<int>& ti, int t) {
        long long mini=INT_MAX;
        for(long long x : ti){
            mini = min(mini, x);
        }
        long long l=1, h=t*mini;
        while(l<=h){
            long long m=l+(h-l)/2;
            long long sum=0;
            for(long long x : ti){
                sum+=m/x;
            }
            if(sum>=t){
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return l;
    }
};