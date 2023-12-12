/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    const n = nums.length;

    nums.sort((a, b) => a - b);

    const first = nums[n - 2] - 1;

    const second = nums[n - 1] - 1;

    return first * second;
};