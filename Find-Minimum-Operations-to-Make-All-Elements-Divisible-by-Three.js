/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function(nums) {
    let ans = 0;
    for(var i = 0; i < nums.length; i++) {
        if(nums[i] % 3 != 0)
            ans++;
    }
    return ans;
};