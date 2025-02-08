class NumberContainers:
    def __init__(self):
        self.num = {}
        self.sorted_ind = defaultdict(SortedList)

    def change(self, index: int, number: int) -> None:
        if index in self.num:
            self.sorted_ind[self.num[index]].remove(index)
        self.num[index] = number
        self.sorted_ind[number].add(index)

    def find(self, number: int) -> int:
        return self.sorted_ind[number][0] if self.sorted_ind[number] else -1