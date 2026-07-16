class Solution {
public:
    int minimumLength(string st) {
        vector<int> v(26);
        for(int i=0; i<st.length(); i++){
            v[st[i]-'a']++;
        }
        int s{};
        for(int i=0; i<v.size(); i++){
            if(v[i] > 2){
                if((v[i] & 1) == 0){
                    v[i] = 2;
                    s+=2;
                }else{
                    v[i] = 1;
                    s+=1;
                }
            }else{
                s+=v[i];
            }
        }
        return s;
    }
};