func sumDigitDifferences(nums []int) int64 {
	var res int64
	var memo = make([]int64, len(strconv.Itoa(nums[0]))*10)
	for i, v := range nums {
		idx := 0
		for v > 0 {
			res += int64(i) - memo[idx*10+v%10]
			memo[idx*10+v%10]++
			idx++
			v /= 10
		}
	}
	return res
}
