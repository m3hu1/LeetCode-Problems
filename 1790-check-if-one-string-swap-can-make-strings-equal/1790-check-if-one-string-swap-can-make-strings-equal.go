func areAlmostEqual(s1 string, s2 string) bool {
    if len(s1) != len(s2) {
        return false
    }

    mp := [26]int{}
    x := 0 

    for i := 0; i < len(s1); i++ {
        mp[s1[i] - 'a']++; mp[s2[i] - 'a']--
        if s1[i] != s2[i] {
            x++
        }
    }

    return (x < 3 && mp == [26]int{})
}