func check(s string, i int, x int) bool {
    m := len(s)

    if i >= m {
        return x == 0
    }

    y := 0
    
    for j := i; j < m; j++ {
        y = y * 10 + int(s[j]-'0')
        if y <= x && check(s, j+1, x-y) {
            return true
        }
    }

    return false
}

func punishmentNumber(n int) (res int) {
    for i := 1; i <= n; i++ {
        x := i * i
        if check(strconv.Itoa(x), 0, i) {
            res += x
        }
    }

    
}