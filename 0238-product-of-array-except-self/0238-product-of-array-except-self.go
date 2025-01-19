func productExceptSelf(nums []int) []int {
    px := 1
    sx := 1
    ans := make([]int, len(nums))

    for i := range nums {
        ans[i] = px
        px *= nums[i]
    }

    for i := len(nums) - 1; i >= 0; i-- {
        ans[i] *= sx
        sx *= nums[i]
    }

    return ans
}