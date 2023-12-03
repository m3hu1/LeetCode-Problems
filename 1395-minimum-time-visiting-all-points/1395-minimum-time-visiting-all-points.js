/**
 * @param {number[][]} points
 * @return {number}
 */
var minTimeToVisitAllPoints = function (points) {
  let ans = 0;
  const n = points.length;

  for (let i = 0; i < n - 1; i++) {
    const [ci, cj] = points[i];
    const [ni, nj] = points[i + 1];
    ans += Math.max(Math.abs(ci - ni), Math.abs(cj - nj));
  }

  return ans;
};