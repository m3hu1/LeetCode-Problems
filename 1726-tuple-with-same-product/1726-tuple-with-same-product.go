func tupleSameProduct(nums []int) int {
    prod := make(map[int]int)
    ans := 0

    for i := 0; i < len(nums) - 1; i++ {
        for j := i + 1; j < len(nums); j++ {
            ans += 8 * prod[nums[i] * nums[j]]
            prod[nums[i] * nums[j]]++
        }
    }

    return ans
}