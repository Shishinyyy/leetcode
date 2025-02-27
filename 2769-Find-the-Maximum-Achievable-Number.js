/**
 * @param {number} num
 * @param {number} t
 * @return {number}
 */
var theMaximumAchievableX = function(num, t) {
    for(let i = 0; i < t; i++) {
        num++;
    }
    return num + t;
};