/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode = function (encoded, first) {
    let ans = new Array(encoded.length + 1);
    ans[0] = first;
    for (let i = 0; i < encoded.length; i++) {
        ans[i + 1] = ans[i] ^ encoded[i];
    }
    return ans;
};