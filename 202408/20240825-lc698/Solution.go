var (
	ns   []int                // 数组
	avg  int                  //平均值
	memo map[int]map[int]bool //记忆
)

func get_lowbit_index(n int) int { //获取最低位1到最低位的长度
	idx := 0
	n = (n & -n) >> 1
	for n > 0 {
		n >>= 1
		idx++
	}
	return idx
}
func dfs(status, s int) bool { //深搜， 使用lowbit枚举每一个存在的位
	if v1, ok1 := memo[status]; ok1 { //记忆化
		if v2, ok2 := v1[s]; ok2 {
			return v2
		}
	}
	if status == 0 && s == 0 { //base case
		return true
	}
	if s == 0 {
		s = avg
	}
	res := false
	for i := status; i > 0; i -= (i & -i) { //枚举每一个存在的位
		tmp := get_lowbit_index(i)
		if s >= ns[tmp] { //当前数字少于等于期望数字再加入
			res = res || dfs(status-(1<<tmp), s-ns[tmp]) //短路剪枝
		}
	}
	if _, ok := memo[status]; !ok { //记忆化
		memo[status] = make(map[int]bool)
	}
	memo[status][s] = res //记忆化
	return res
}
func canPartitionKSubsets(nums []int, k int) bool {
	memo = make(map[int]map[int]bool)
	ns = nums //把数组赋值给全局作用域
	var sum = 0
	for _, v := range nums {
		sum += v
	}
	if sum%k != 0 { //无法平分为k份直接返回
		return false
	}
	avg = sum / k
	var status int = (1 << len(nums)) - 1 //造一个长度为len(nums)，位全是1的数字
	return dfs(status, avg)
}
