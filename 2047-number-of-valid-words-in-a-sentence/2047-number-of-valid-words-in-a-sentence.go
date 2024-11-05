func countValidWords(sentence string) int {
    ans := 0

    for _, word := range strings.Fields(sentence) {
        if isValid(word) {
            ans++
        }
    }

    return ans
}

func isValid(word string) bool {
        vis := false

        for i, ch := range word {
            if unicode.IsDigit(ch) || (ch == '!' || ch == '.' || ch == ',') && i != len(word) - 1 {
                return false
            } else if ch == '-' {
                if vis || i == 0 || i == len(word) - 1 || !unicode.IsLetter(rune(word[i + 1])) {
                    return false
                }
                vis = true
            }
        }

        return true
}