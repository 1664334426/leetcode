func maxStrength(nums []int) int64 {
	var res int64 = 1
	var mi int64 = math.MinInt64
	var tag bool = true
	var funums []int
	for _, v := range nums {
		mi = max(mi, int64(v))
		if v > 1 {
			if tag {
				tag = false
			}
			res *= int64(v)
		} else if v < 0 {
			funums = append(funums, v)
		}
	}
	sort.Ints(funums)
	for i := 0; i+1 < len(funums); i += 2 {
		if tag {
			tag = false
		}
		res *= int64(funums[i] * funums[i+1])
	}
	if tag {
		return mi
	}
	return res
}
