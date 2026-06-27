class Solution {
public:
    int minEatingSpeed(vector<int>& p, int x) {
        sort(p.begin(), p.end());
        long long l=1,h=p[p.size()-1];
        while(l<=h){
            long long sum=0;
            long long m=l+(h-l)/2;
            for(int x : p){
                sum+=(x+m-1)/m;
            }
            if(sum<=x){
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return l;
    }
};