/**
 * @param {string} num
 * @return {string}
 */
var largestGoodInteger = function(nums) {
    newArr = []

    nums = nums.split('')

    for(let i = 0; i < nums.length; i++) {
        if(nums[i] === nums[i + 1] && nums[i] === nums[i + 2]) {
            newArr.push(nums[i])   
        }
    }
    newArr = newArr.map((item) => parseInt(item)).sort((a, b) => b - a)
    return Array(3).fill(newArr[0]).join('')
};