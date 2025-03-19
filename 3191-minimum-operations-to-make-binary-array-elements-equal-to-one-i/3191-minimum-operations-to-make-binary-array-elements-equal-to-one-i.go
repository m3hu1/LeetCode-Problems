func minOperations(nums []int) int {
	ans, cur := 0, 0

	for i := 0; i < len(nums); i++ {
		if i >= 3 && nums[i-3] == 2 {
			curr--
		}
		if curr&1 == nums[i] {
			if i+3 > len(nums) {
				return -1
			}
			curr++
			ans++
			nums[i] = 2
		}
	}

	return ans
}