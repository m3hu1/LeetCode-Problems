func largestDivisibleSubset(nums []int) []int {
    sort.Ints(nums)
    ans, ss := []int{}, make([][]int, len(nums))

    for i := 0; i < len(nums); i++ {
        curr := []int{}
        for j := 0; j < i; j++ {
            if nums[i] % nums[j] == 0 {
                if len(ss[j]) > len(curr) {
                    curr = ss[j]
                }
            }
        }
        x := make([]int, len(curr) + 1)
        copy(x, curr)
        x[len(curr)] = nums[i]
        ss[i] = x
        if len(ss[i]) > len(ans) {
             ans = ss[i]
        }
    }

    return ans
}