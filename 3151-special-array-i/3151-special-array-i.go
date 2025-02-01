func isArraySpecial(nums []int) bool {
    for i := 1; i < len(nums); i++ {
        if nums[i - 1] & 1 == nums[i] & 1 {
            return false
        }
    }
    return true
}