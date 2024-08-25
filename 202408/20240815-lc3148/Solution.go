func maxScore(grid [][]int) int {//其实是枚举当前节点与节点的右下角最大值取差值，从后往前枚举即可
    var res = math.MinInt32
    for i := len(grid) - 1; i >= 0; i--{
        for j := len(grid[0]) - 1; j >= 0; j--{
            var tmp = math.MinInt32;
            if i + 1 < len(grid){
                tmp = max(tmp, grid[i + 1][j])
            }
            if j + 1 < len(grid[0]){
                tmp = max(tmp, grid[i][j + 1])
            }
            res = max(res, tmp - grid[i][j])
            grid[i][j] = max(grid[i][j], tmp)
        }
    }
    return res
}