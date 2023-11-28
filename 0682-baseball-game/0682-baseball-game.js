// m3hu1
/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function(operations) {
  record = [];
  score = 0;
  console.log(operations);
  for (let i=0; i<operations.length; i++) {
      if (parseInt(operations[i]) % 1 === 0) {
          record.push(parseInt(operations[i]));
      }
      if (operations[i] === "C") {
          record.pop();
      }
      if (operations[i] === "D") {
          record.push(record[record.length-1] * 2);
      }
      if (operations[i] === "+") {
          record.push(parseInt(record[record.length-2]) + parseInt(record[record.length-1]))
      }
  }
  for (let i=0; i<record.length; i++) {
      score += record[i];
  }
  return score;
};