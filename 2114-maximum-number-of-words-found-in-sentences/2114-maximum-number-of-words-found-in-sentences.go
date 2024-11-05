func mostWordsFound(sentences []string) int {
    maxi := 0

    for _, sen := range sentences {
        word := strings.Split(sen, " ")
        if len(word) > maxi {
            maxi = len(word)
        }
    }

    return maxi
}