func getImportance(employees []*Employee, id int) int {
	memo := make(map[int]*Employee)
	var dfs func(int) int
	dfs = func(id int) int {
		res := memo[id].Importance
		for _, v := range memo[id].Subordinates {
			res += dfs(v)
		}
		return res
	}
	for _, v := range employees {
		memo[v.Id] = v
	}
	return dfs(id)
}
