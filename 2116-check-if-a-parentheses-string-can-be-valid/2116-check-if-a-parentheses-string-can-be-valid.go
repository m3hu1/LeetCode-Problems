func canBeValid(s string, l string) bool {
    if len(s) % 2 != 0 {
        return false
    }

    a, b := 0, 0

    for i := range s {
        if l[i] == '0' {
            if a > 2 * b {
                b++
            }
            a++
        } else if s[i] == '(' {
            a++
        } else {
            if a == 0 {
                return false
            }
            a--
            if a < 2 * b {
                b--
            }
        }
    }

    if a > 0 && a > 2 * b {
        return false
    }

    return true
}