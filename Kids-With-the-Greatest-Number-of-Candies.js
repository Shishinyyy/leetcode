/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let ans = [];
    let max = Math.max(...candies);
    for(const candy of candies) {
        ans.push(candy + extraCandies >= max);
    }
    return ans;
};