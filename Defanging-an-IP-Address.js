/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function (address) {
    let ans = "";
    for (var i = 0; i < address.length; i++) {
        if (address[i] == '.')
            ans += "[.]";
        else
            ans += address[i];
    }
    return ans;
};