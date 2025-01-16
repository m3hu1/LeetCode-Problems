func xorAllNums(n1 []int, n2 []int) int {
    ans := 0

    if len(n2) & 1 == 1 {
        for _, x := range n1 {
            ans = ans ^ x
        }
    }

    if len(n1) & 1 == 1 {
        for _, x := range n2 {
            ans = ans ^ x
        }
    }

    return ans
}