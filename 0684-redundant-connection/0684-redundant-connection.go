func findRedundantConnection(es [][]int) []int {
    papa := make(map[int]int)

    var f func(int) int
    f = func(a int) int {
        if _, ok := papa[a]; !ok {
            papa[a] = a
        }
        if papa[a] != a {
            papa[a] = f(papa[a])
        }
        return papa[a]
    }

    for _, e := range es {
        a, b := e[0], e[1]
        if f(a) != f(b) {
            papa[f(a)] = f(b)
        } else {
            return e
        }
    }
    
    return nil
}