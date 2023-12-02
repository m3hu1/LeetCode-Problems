/**
 * @param {number} candies
 * @param {number} num_people
 * @return {number[]}
 */
var distributeCandies = function(candies, num_people) {
    let cand = 1;
    let result = new Array(num_people).fill(0);
    let pointer = 0; 
    while (candies > 0){
        if(pointer === num_people){
            pointer = 0;
        }
        result[pointer] += Math.min(cand,candies);
        candies -= cand;
        pointer++;
        cand++;
    }
    return result;
};