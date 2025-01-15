func setBits(num int) int {
    cnt := 0
    for num != 0 {
        if num & 1 == 1 {
            cnt++
        }
        num = num >> 1
    }
    return cnt
}

func minimizeXor(num1 int, num2 int) int {
    x := 0
    t := setBits(num2)

    for i := 31; i >= 0 && t > 0; i-- {
        if (num1 & (1 << i)) != 0 {
            t--
            x |= (1 << i)
        }
    }

    for i := 0; i < 32 && t > 0; i++ {
        if (num1 & (1 << i)) == 0 {
            t--
            x |= (1 << i)
        }
    }

    return x
}