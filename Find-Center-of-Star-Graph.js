/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function (accounts) {
    let count = 0, ans = 0;
    for (let i = 0; i < accounts.length; i++) {
        for (let j = 0; j < accounts[i].length; j++) {
            count += accounts[i][j];
        }
        if (count > ans) {
            ans = count;
        }
        count = 0;
    }
    return ans;
};