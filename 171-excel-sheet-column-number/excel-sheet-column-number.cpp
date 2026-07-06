class Solution {
public:
    int titleToNumber(string s) {
        int sum=0, x=0;
        for(int i=s.length()-1; i>=0; i--){
            // sum += pow((s[i]-'A' + 1), x++);
            sum += pow(26, x++) * (s[i] - 'A' + 1);
            // 26^x*s[i];
        }
        // while(i>=0){
        //     if(i==s.length()-1){
        //         sum += s[i--] - 'B';
        //     }else{
        //         sum+= 26 * s[i--] - 'B';
        //     }
        // }
        // for(int i=0; i<s.length(); i++){
        //     if(i!=0){
        //         sum+=26;
        //     }
        //     sum += s[i] - 'A';
        // }
        return sum;
    }
};