func canConstruct(s string, k int) bool {
    if k > len(s) {
        return false
    }

    mp := make(map[rune]int)

    for _, ch := range s {
        mp[ch]++
    }

    o := 0

    for _, cnt := range mp {
        if cnt % 2 != 0 {
            o++
        }
    }

    return o <= k
}