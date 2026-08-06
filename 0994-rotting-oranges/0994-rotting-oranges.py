class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        grid_copy = deepcopy(grid)

        fresh = 0 
        queue = deque()

        for i in range(m):
            for j in range(n):
                if grid_copy[i][j] == 2:
                    queue.append((i , j))
                elif grid_copy[i][j] == 1:
                     fresh += 1 
        
        minu = 0 
        while len(queue) != 0 and fresh > 0:
            minu += 1 
            total = len(queue)

            for _ in range(total):
                i, j = queue.popleft()
                for dx , dy in [(1 , 0) , (-1 , 0) , (0, 1) , (0, -1)]:
                    i_ , j_ = i + dx , j + dy 
                    if i_ < 0 or i_ == m or j_ < 0 or j_ == n:
                        continue
                    if grid_copy[i_][j_] == 0 or grid_copy[i_][j_] == 2:
                         continue 
                    
                    fresh -= 1 
                    grid_copy[i_][j_] = 2 
                    queue.append((i_,j_))

        if fresh > 0:
            return -1
        return minu