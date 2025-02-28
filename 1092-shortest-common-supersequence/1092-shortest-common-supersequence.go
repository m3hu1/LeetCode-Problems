func shortestCommonSupersequence(str1, str2 string) string {
    l1 := len(str1)
    l2 := len(str2

    prev := make([]string, l2 + 1)
    for col := range prev {
        prev[col] = str2[:col]
    }

    for row := 1; row <= l1; row++ {
        curr := make([]string, l2 + 1)
        curr[0] = str1[:row]

        for col := 1; col <= l2; col++ {
            if str1[row - 1] == str2[col - 1] {
                curr[col] = prev[col - 1] + string(str1[row - 1])
            } else {
                p1 := prev[col]
                p2 := curr[col - 1]

                if len(p1) < len(p2) {
                    curr[col] = p1 + string(str1[row - 1])
                } else {
                    curr[col] = p2 + string(str2[col - 1])
                }
            }
        }
        prev = curr
    }

    return prev[l2]
}
