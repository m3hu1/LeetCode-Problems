func getHappyString(n int, k int) string {
    var bt func(x string) []string
    
    bt = func(x string) []string {
        if len(x) == n {
            return []string{x}
        }
        res := []string{}
        for _, ch := range "abc" {
            if len(x) == 0 || x[len(x) - 1] != byte(ch) {
                res = append(res, bt(x + string(ch))...)
            }
        }
        return res
    }
    
    ans := bt("")
    
    if len(ans) > k - 1 {
        return ans[k - 1]
    }

    return ""
}