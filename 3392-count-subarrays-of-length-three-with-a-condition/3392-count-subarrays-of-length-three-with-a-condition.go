func countSubarrays(nums []int) int {
	ans := 0

	for i := 0; i < len(nums)-2; i++ {
		if (nums[i]+nums[i+2])*2 == nums[i+1] { ans++ }
	}

	return ans
}