func pivotArray(nums []int, p int) []int {
    a1, a2 := []int{}, []int{}
    pc := 0

    for _, num := range nums {
        if num < p {
            a1 = append(a1, num)
        } else if num > p {
            a2 = append(a2, num)
        } else {
            pc++
        }
    }

    for i := 0; i < pc; i++ {
        a1 = append(a1, p)
    }

    return append(a1, a2...)
}