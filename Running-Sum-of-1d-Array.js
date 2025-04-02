/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function (nums) {
    let sum = 0;
    let arr = [];
    for (var num of nums) {
        sum += num;
        arr.push(sum);
    }
    return arr;
};