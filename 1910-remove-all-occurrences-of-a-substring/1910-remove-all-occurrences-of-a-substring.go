func removeOccurrences(s string, p string) string {
    for i, n := 0, len(p); i + n <= len(s); i++ {
        if s[i : i + n] == p {
            s = s[:i] + s[i + n :]
            i = -1
        }
    }
    
    return s
}