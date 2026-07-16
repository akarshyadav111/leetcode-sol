class Solution {
public:
    int calPoints(vector<string>& o) {
        vector<int> d;
        for(int i=0; i<o.size(); i++){
            if(o[i] == "+"){
                int n = d.back();
                d.pop_back();
                int m = d.back();
                d.push_back(n);
                d.push_back(n+m);
            }else if(o[i] == "D"){
                d.push_back(d.back() * 2);
            }else if(o[i] == "C"){
                d.pop_back();
            }else{
                d.push_back(stoi(o[i]));
            }
        }
        int s{};
        for(int i=0; i<d.size(); i++) s+=d[i];
        return s;
    }
};