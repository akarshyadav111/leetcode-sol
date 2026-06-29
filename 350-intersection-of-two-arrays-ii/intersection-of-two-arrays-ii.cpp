// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         int l=0, r=0, i=0;
//         while(i<nums2.size()){
//             if(nums1[l] == nums2[i]){
//                 r++;
//                 i++;
//             }else{
                
//             }
//         }
//     }
// };
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        multiset<int> s;
        int l=0, r=0;
        while(l<nums1.size() && r<nums2.size()){
            if(nums1[l] == nums2[r]){
                s.insert(nums1[l]);
                l++;
                r++;
            }else if(nums1[l] > nums2[r]){
                r++;
            }else{
                l++;
            }
        }
        vector<int> temp;
        for(int n : s){
            temp.push_back(n);
        }
        return temp;
    }
};