type FreqStack struct {
    f map[int]int
    g map[int][]int
    m int
}

func Constructor() FreqStack {
    return FreqStack {
        f: make(map[int]int),
        g: make(map[int][]int),
        m: 0,
    }
}

func (s *FreqStack) Push(x int) {
    s.f[x]++
    freq := s.f[x]
    if freq > s.m {
        s.m = freq
    }
    s.g[freq] = append(s.g[freq], x)
}

func (s *FreqStack) Pop() int {
    grp := s.g[s.m]
    x := grp[len(grp)-1]
    s.g[s.m] = grp[:len(grp)-1]
    if len(s.g[s.m]) == 0 {
        s.m--
    }
    s.f[x]--
    return x
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * param_2 := obj.Pop();
 */