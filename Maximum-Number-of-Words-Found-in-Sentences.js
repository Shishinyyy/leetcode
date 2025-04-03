/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function (sentences) {
    let num = 0, maxNum = 0;
    for (const s of sentences) {
        num = s.split(' ').length;
        maxNum = Math.max(num, maxNum);
    }
    return maxNum;
};