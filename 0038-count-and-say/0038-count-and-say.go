func helper(s string) string {
    ans := ""
    count := 0
    for i := 0; i < len(s); i++ {
        count++
        if i == len(s) - 1 || s[i] != s[i + 1] {
            ans += strconv.Itoa(count) + string(s[i])
            count = 0
        }
    }
    return ans
}

func countAndSay(n int) string {
    ans := "1"

    for n != 1 {
        ans = helper(ans)
        n--
    }
    
    return ans
}
