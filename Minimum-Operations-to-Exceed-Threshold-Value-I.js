/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function (nums, k) {
    let count = 0;
    nums.sort((a, b) => a < b);
    for (const num of nums) {
        if (num < k) {
            count++;
        }
    }
    return count;
};