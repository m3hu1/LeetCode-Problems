// m3hu1
/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
var countCharacters = function(words, chars) {
    let lengthSum = 0;
    const charCounts = new Array(26).fill(0);
    
    for (let c of chars) {
        charCounts[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    
    for (let word of words) {
        let tempCharCounts = Array.from(charCounts);
        let validCharCounts = 0;
        
        for (let c of word) {
            if (tempCharCounts[c.charCodeAt(0) - 'a'.charCodeAt(0)] > 0) {
                validCharCounts++;
                tempCharCounts[c.charCodeAt(0) - 'a'.charCodeAt(0)]--;
            }
        }
        
        if (validCharCounts === word.length) {
            lengthSum += word.length;
        }
    }
    
    return lengthSum;
};