/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function(matrix) {
  let transposed = new Array(matrix[0].length).fill(0).map(() => new Array(matrix.length));
  for (let r = 0; r < matrix.length; r++) {
    for (let c = 0; c < matrix[0].length; c++) {
      transposed[c][r] = matrix[r][c];
    }
  }
  return transposed;
};