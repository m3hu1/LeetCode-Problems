class Solution:
    def buildMatrix(self, k: int, rc: List[List[int]], cc: List[List[int]]) -> List[List[int]]:
        def helper(args): 
            g = [[] for _ in range(k)]
            i = [0] * k

            for src, dest in args: 
                g[src - 1].append(dest - 1) 
                i[dest - 1] += 1 
            
            q = deque(nid for nid, num in enumerate(i) if num == 0)
            vis_nid = set() 
            sorted_nid = [] 
            
            while q: 
                nid = q.popleft()
                if nid in vis_nid: 
                    break
                else: 
                    vis_nid.add(nid) 
                sorted_nid.append(nid + 1) 
                for dest in g[nid]: 
                    i[dest] -= 1 
                    if i[dest] == 0: 
                        q.append(dest) 
            return sorted_nid 
        
        a = helper(rc)
        b = helper(cc)

        if len(a) != k:
            return []
        elif len(b) != k:
            return []
        else: 
            m = [[0] * k for _ in range(k)] 
            rows = {nid: idx for idx, nid in enumerate(a)}
            cols = {nid: idx for idx, nid in enumerate(b)}

            for nid in range(1, k + 1): 
                m[rows[nid]][cols[nid]] = nid

            return m