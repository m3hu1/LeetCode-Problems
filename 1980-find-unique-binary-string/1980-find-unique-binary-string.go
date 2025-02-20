func findDifferentBinaryString(nums []string) string {
	ans := make([]byte, len(nums))
    
	for i := 0; i < len(nums); i++ {
		if nums[i][i] == '0' {
			ans[i] = '1'
		} else {
			ans[i] = '0'
		}
	}

	return string(ans)
}