/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let ans = [];
    nums.sort((a, b) => a - b);
    for(var i = 0; i < nums.length - 1; i++) {
        if(nums[i] == nums[i+1])
            ans.push(nums[i]);
    }
    return ans;
};