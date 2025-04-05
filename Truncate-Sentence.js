/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function (s, k) {
    let ans = "";
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        if (s[i] === ' ') {
            count++;
            if (count === k) {
                ans = s.slice(0, i);
                return ans;
            }
        }
    }
    return s;
};