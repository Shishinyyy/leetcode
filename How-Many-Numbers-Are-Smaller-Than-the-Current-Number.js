/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
    let ans = [];
    let originalNums = nums.slice();
    nums.sort((a, b) => a - b);
    for (let i = 0; i < nums.length; i++) {
        let index = nums.indexOf(originalNums[i]);
        ans.push(index);
    }
    return ans;
};