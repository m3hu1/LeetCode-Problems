func minOperations(nums []int, k int) int {
	sort.Slice(nums, func(i, g int) bool {
		return nums[i] > nums[g]
	})
    
	if nums[len(nums)-1] < k {
		return -1
	}

	h := nums[0]
	ans := 0

	for r := 0; r < len(nums); r++ {
		if nums[r] < h {
			h = nums[r]
			ans += 1
		}
	}

	if h == k {
		return ans
	}

	return ans + 1
}