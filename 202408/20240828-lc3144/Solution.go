func minimumSubstringsInPartition(s string) int {
	memo := make([]int, len(s)) //记忆化
	for i := range memo {       //赋初值
		memo[i] = -1
	}
	var dfs func(int) int
	dfs = func(i int) (res int) { //dp
		if i >= len(s) {
			return 0
		}
		if memo[i] != -1 {
			return memo[i]
		}
		res = math.MaxInt32
		mp := make([]int, 26)
		begin := i
		maxChar := 0            //字符数量最大值
		sumChars := 0           //字符种类数
		for ; i < len(s); i++ { //枚举选那个
			if mp[s[i]-'a'] == 0 {
				sumChars++
			}
			mp[s[i]-'a']++
			maxChar = max(maxChar, mp[s[i]-'a'])
			if i-begin+1 == sumChars*maxChar { //O(1)的平衡计算
				res = min(res, dfs(i+1)+1)
			}
		}
		memo[begin] = res
		return
	}
	return dfs(0)
}
