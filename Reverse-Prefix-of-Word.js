/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function (word, ch) {
    let index = word.indexOf(ch);
    if (index === -1) {
        return word;
    }
    let temp = word.slice(0, index + 1).split('').reverse().join('');
    return temp + word.slice(index + 1);
};