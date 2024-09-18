func canMakeSquare(grid [][]byte) bool {
	for i := range grid {
		for j := range grid[i] {
			if i-1 >= 0 && j-1 >= 0 {
				if grid[i][j] == grid[i-1][j] && grid[i][j] == grid[i][j-1] {
					return true
				}
			}
			if i+1 < len(grid) && j-1 >= 0 {
				if grid[i][j] == grid[i+1][j] && grid[i][j] == grid[i][j-1] {
					return true
				}
			}
			if i+1 < len(grid) && j+1 < len(grid[0]) {
				if grid[i][j] == grid[i+1][j] && grid[i][j] == grid[i][j+1] {
					return true
				}
			}
			if i-1 >= 0 && j+1 < len(grid[0]) {
				if grid[i][j] == grid[i-1][j] && grid[i][j] == grid[i][j+1] {
					return true
				}
			}
		}
	}
	return false
}
