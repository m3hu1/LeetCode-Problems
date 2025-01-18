func orderlyQueue(s string, k int) string {
    if k > 1 {
        r := []rune(s)
        sort.Slice(r, func(i int, j int) bool {
            return r[i] < r[j]
        })
        return string(r)
    }

    ans := s

    for i := 1; i < len(s); i++ {
        ans = min(ans, s[i:] + s[:i])
    }

    return ans;
}