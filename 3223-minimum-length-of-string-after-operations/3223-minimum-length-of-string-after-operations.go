func minimumLength(s string) int {
    res := 0
    mp := make(map[byte]int)

    for i := range s {
        mp[s[i]]++
    }

    for i := range mp {
        res += 2 - (mp[i] % 2)
    }

    return res
}