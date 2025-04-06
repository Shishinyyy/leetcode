/**
 * @param {number[]} nums
 * @return {number}
 */
var subarraySum = function (nums) {
    let start = 0, ans = 0;
    for (let i = 0; i < nums.length; i++) {
        let num = 0;
        start = Math.max(0, i - nums[i]);
        for (let j = start; j <= i; j++) {
            num += nums[j];
        }
        ans += num;
    }
    return ans;

};