func satisfiesConditions(grid [][]int) bool {
	for j := range len(grid[0]) {
		if j > 0 {
			if grid[0][j] == grid[0][j-1] {
				return false
			}
		}
		for i := 1; i < len(grid); i++ {
			if grid[i][j] != grid[i-1][j] {
				return false
			}
		}
	}
	return true
}
