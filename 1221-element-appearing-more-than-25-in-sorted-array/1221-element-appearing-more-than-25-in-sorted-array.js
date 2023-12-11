/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function(arr) {
    let count = 0, gap = Math.floor(arr.length/4)-1, i = 0
    while(count<=gap && i<arr.length) {
        if(arr[i]===arr[i+1]) count += 1
        else count = 0
        i += 1
    }
    return arr[i]
};