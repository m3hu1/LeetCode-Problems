func doesValidArrayExist(d []int) bool {
    e := 0

    for _, n := range d {
        if n == 1 {
            e = ^e
        }
    }

    return e == 0
}