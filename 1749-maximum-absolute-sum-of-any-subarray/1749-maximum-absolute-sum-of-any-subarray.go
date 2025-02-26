func maxAbsoluteSum(nums []int) int {
    var minPSum, maxPSum int = 0, 0
    var pSum int = 0

    for _, num := range nums {
        pSum += num
        maxPSum = max(maxPSum, pSum)
        minPSum = min(minPSum, pSum)
    }

    return maxPSum - minPSum
}