func dSum(n int) int {
	var sum int
	for n != 0 {
		sum += n % 10
		n /= 10
	}
	return sum
}

func countLargestGroup(n int) int {
	mp := make(map[int][]int)
	maxi, ans := 0, 0

	for i := 1; i <= n; i++ {
		d := dSum(i)
		mp[d] = append(mp[d], i)
		if len(mp[d])>maxi{ maxi = len(mp[d]) }
	}

	for _, x := range mp {
		if maxi == len(x) { ans++ }
	}

	return ans
	
}

