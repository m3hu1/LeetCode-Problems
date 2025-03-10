func countOfSubstrings(word string, k int) int64 {
	f := func(k int) int {
		cnt := make(map[rune]int)
		ans, l, x := 0, 0, 0
		vowels := map[rune]bool{
			'a': true, 'e': true, 'i': true, 'o': true, 'u': true,
		}
		for _, c := range word {
			if vowels[c] {
				cnt[c]++
			} else {
				x++
			}
			for x >= k && len(cnt) == 5 {
				d := rune(word[l])
				if vowels[d] {
					cnt[d]--
					if cnt[d] == 0 {
						delete(cnt, d)
					}
				} else {
					x--
				}
				l++
			}
			ans += l
		}
		return ans
	}

	return int64(f(k) - f(k+1))
}