func differenceOfSum(nums []int) int {
	var sum, nsum int
	for _, v := range nums {
		sum += v
		for v > 0 {
			nsum += v % 10
			v /= 10
		}
	}
	if sum > nsum {
		return sum - nsum
	}
	return nsum - sum
}
