/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let ans = [];
    for(var i = 0; i < n; i++) {
        ans.push(nums[i], nums[i + n]);
    }
    return ans;
};