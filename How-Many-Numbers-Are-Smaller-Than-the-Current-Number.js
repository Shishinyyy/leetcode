/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
    let ans = [];
    let sortedNums = [...nums].sort((a, b) => a - b);
    for (let i = 0; i < nums.length; i++) {
        let index = sortedNums.indexOf(nums[i]);
        ans.push(index);
    }
    return ans;
};