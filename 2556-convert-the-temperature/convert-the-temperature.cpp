class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> t(2);
        t[0] = celsius + 273.15;
        t[1] = celsius * 1.80 + 32.00;
        return t;
    }
};