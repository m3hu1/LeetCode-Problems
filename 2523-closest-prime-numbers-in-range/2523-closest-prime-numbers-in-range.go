
func soe(limit int) []bool {
	isPrime := make([]bool, limit+1)
	for i := range isPrime {
		isPrime[i] = true
	}

	isPrime[0], isPrime[1] = false, false

	for i := 2; i*i <= limit; i++ {
		if isPrime[i] {
			for j := i * i; j <= limit; j += i {
				isPrime[j] = false
			}
		}
	}

	return isPrime
}

func closestPrimes(left int, right int) []int {
	isPrime := soe(right)
	primes := []int{}

	for i := left; i <= right; i++ {
		if isPrime[i] {
			primes = append(primes, i)
		}
	}

	if len(primes) < 2 {
		return []int{-1, -1}
	}

	x := math.MaxInt32
	ans := []int{-1, -1}

	for i := 1; i < len(primes); i++ {
		diff := primes[i] - primes[i-1]
		if diff < x {
			x = diff
			ans = []int{primes[i-1], primes[i]}
		}
	}

	return 
}