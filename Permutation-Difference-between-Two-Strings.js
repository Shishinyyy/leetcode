/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var findPermutationDifference = function (s, t) {
    let ans = 0;
    for (let i = 0; i < s.length; i++) {
        let ltr = t.indexOf(s[i]);
        ans += Math.abs(i - ltr);
    }
    return ans;
};