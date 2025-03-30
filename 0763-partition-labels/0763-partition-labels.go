func partitionLabels(s string) []int {
    l := make([]int, 26)
    for i, ch := range s {
        l[ch-'a'] = i
    }
    
    var ans []int
    st, e := 0, 0
    
    for i, ch := range s {
        if l[ch-'a'] > e {
            e = l[ch-'a']
        }
        if i == e {
            ans = append(ans, e-st+1)
            st = e + 1
        }
    }
    
    return ans
}