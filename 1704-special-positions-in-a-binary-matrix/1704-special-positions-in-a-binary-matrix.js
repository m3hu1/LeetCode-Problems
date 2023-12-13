/**
 * @param {number[][]} mat
 * @return {number}
 */
var numSpecial = function(mat) {
    let count = 0;
    for(let i=0; i<mat.length; i++){
        for(let j=0; j<mat[0].length; j++){
            if(mat[i][j] == 1){
                let tempCount = 0
                for (let k = 0; k < mat[0].length; k++) {
                    if (mat[i][k] === 0) tempCount++
                }
                for (let m = 0; m < mat.length; m++) {
                    if (mat[m][j] === 0) tempCount++
                }
                if (tempCount === mat[i].length + mat.length - 2) count++
            }
        }
    }
    return count
};