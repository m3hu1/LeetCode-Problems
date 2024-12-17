class Solution:
    def repeatLimitedString(self, s: str, rl: int) -> str:
        count = Counter(s)
        arr, ans = list(map(list, sorted(count.items(), reverse=True))), []
        i, j = 0, 1
        
        while j < len(arr):
            if arr[i][1] <= rl:
                ans.append(arr[i][0] * arr[i][1])
                i += 1
                while arr[i][1] == 0:
                    i += 1
                if i >= j:
                    j = i + 1
            else:
                ans.append(arr[i][0] * rl + arr[j][0])
                arr[j][1] -= 1
                arr[i][1] -= rl
                if arr[j][1] == 0:
                    j += 1
        
        ans.append(arr[i][0] * min(rl, arr[i][1]))

        return "".join(ans)