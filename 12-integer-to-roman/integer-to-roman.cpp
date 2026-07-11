class Solution {
public:
    string ret(int n){
        string t="";
        while(n>999){ n-=1000; t+="M";}
        while(n>899){ n-=900; t+="CM";}
        while(n>499){ n-=500; t+="D";}
        while(n>399){ n-=400; t+="CD";}
        while(n>99){ n-=100; t+="C";}
        while(n>89){ n-=90; t+="XC";}
        while(n>49){ n-=50; t+="L";}
        while(n>39){ n-=40; t+="XL";}
        while(n>9){ n-=10; t+="X";}
        while(n>8){ n-=9; t+="IX";}
        while(n>4){ n-=5; t+="V";}
        while(n>3){ n-=4; t+="IV";}
        while(n>0){ n-=1; t+="I";}
        return t;
    }
    string intToRoman(int num) {
        string x = ret(num);
        return x;
    }
};