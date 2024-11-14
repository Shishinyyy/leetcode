class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int a = 0, b = 0;
        for (auto x : nums1) {
            if (find(nums2.begin(), nums2.end(), x) != nums2.end())
                a++;
        }
        for (auto y : nums2) {
            if (find(nums1.begin(), nums1.end(), y) != nums1.end())
                b++;
        }
        return {a, b};
    }
};