class Solution:
    def minMovesToSeat(self, seats: List[int], stu: List[int]) -> int:
        seats.sort()
        stu.sort()
        ans = 0

        # for i in range(len(seats)):
        #     ans += abs(stu[i] - seats[i])

        for seat, student in zip(seats, stu):
            ans += abs(seat - student)

        return ans