func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

func maxSubArray(nums []int) int {
    sum := 0
    res := nums[0]

    for i := range nums {
        sum += nums[i]
        res = max(res, sum)
        if sum < 0 {
            sum = 0
        }
    }

    return res
}