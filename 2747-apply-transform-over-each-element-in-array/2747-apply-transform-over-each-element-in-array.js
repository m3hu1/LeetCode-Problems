/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var x=[];
    for(let i=0;i<arr.length;i++){
        let y=fn(arr[i],i);
        x.push(y);
    }
    return x;
};