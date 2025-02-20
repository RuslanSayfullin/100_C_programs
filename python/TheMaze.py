"""
В лабиринте есть шар, который может перемещаться по пустым пространствам (представленным как 0) и стенам (представленным как 1). 
Шар может катиться по пустым пространствам вверх, вниз, влево или вправо, но он не остановится до тех пор, пока не наткнется на стену. 
Когда шар останавливается, он может выбрать следующее направление.
Дан лабиринт размером m x n, начальная позиция шара и место назначения, где start = [startrow, startcol] и destination = [destinationrow, destinationcol]. 
Верните true, если шар может остановиться в месте назначения, иначе верните false.
Вы можете предположить, что границы лабиринта представляют собой стены. 
В приведённом ниже примере они не указаны.
"""

# Input: maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [4,4]
# Output: true

from typing import List

class Solution:
    def hasPath(self, maze: List[List[int]], start: List[int], destination: List[int]) -> bool:
        def dfs(m, n, maze, curr, destination, visit):
            if visit[curr[0]][curr[1]]:
                return False
            if curr == destination:
                return True
            visit[curr[0]][curr[1]] = True
            for dx, dy in directions:
                r, c = curr
                while 0 <= r < m and 0 <= c < n and maze[r][c] == 0:
                    r += dx
                    c += dy
                if dfs(m, n, maze, [r - dx, c - dy], destination, visit):
                    return True
            return False

        m, n = len(maze), len(maze[0])
        visit = [[False] * n for _ in range(m)]
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        return dfs(m, n, maze, start, destination, visit)
    
if __name__ == "__main__":
    example = Solution()
    res = example.hasPath(maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [4,4])
    print(res)

