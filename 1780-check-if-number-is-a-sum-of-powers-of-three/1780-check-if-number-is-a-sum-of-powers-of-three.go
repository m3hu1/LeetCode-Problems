func checkPowersOfThree(n int) bool {
    var pow int
    pow = 1

    for 3 * pow <= n {
        pow *= 3
    }

    for n > 0 {
        if n >= pow {
            n -= pow
        }
        if n >= pow {
            return false
        }
        pow /= 3
    }

    return true
}