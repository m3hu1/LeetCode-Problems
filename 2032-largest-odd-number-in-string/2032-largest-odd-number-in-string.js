/**
 * @param {string} num
 * @return {string}
 */
var largestOddNumber = function(num) {
    const n=num.length
    let odd=-1
    for(let i=0;i<n;i++){
        char=num[i]
        if(char%2){
            odd=i
        }
    }
    if(odd==-1){
        return ""
    }
    return num.substring(0,odd+1)
};