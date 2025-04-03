/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {
    let ans = 0, count = 0;
        for(const ltr of s) {
            if(ltr == 'R') ans++;
            else ans--;
            if(ans == 0) count++;
        }
        return count;
};