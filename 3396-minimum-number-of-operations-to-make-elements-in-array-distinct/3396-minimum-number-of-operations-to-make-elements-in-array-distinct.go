func check(nums []int) bool {
	seen := make(map[int]bool)
	for _, val := range nums {
		if seen[val] {
			return false
		}
		seen[val] = true
	}
	return true


func minimumOperations(nums []int) int {
	ans := 0

	for len(nums) > 0 {
		if !check(nums) {
			ans++
			if len(nums) > 3 {
				nums = nums[3:]
			} else {
				nums = []int{}
			}
		} else { break }
	}

	return ans
}