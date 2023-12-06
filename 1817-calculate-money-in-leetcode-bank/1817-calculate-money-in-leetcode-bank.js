/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    const weekCount = Math.floor(n / 7),
        dayLeft = n % 7
    return 28 * weekCount + (weekCount * (weekCount - 1) * 3.5) + weekCount * dayLeft + dayLeft * (dayLeft + 1) / 2
};