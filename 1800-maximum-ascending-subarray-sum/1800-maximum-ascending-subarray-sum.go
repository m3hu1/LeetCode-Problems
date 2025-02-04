func maxAscendingSum(nums []int) int {
    maxi, x := nums[0], nums[0]

    for i := 1; i < len(nums); i++ {
        if nums[i] > nums[i-1] {
            x += nums[i]
            if x > maxi {
                maxi = x
            }
        } else {
            x = nums[i]
        }
    }

    return maxi
}