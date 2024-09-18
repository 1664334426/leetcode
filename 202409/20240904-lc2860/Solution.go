func countWays(nums []int) int {
	sort.Ints(nums)
	res := 0
	if nums[0] > 0 {
		res++
	}
	if len(nums) > nums[len(nums)-1] {
		res++
	}
	for i := 1; i < len(nums); i++ {
		if i > nums[i-1] && i < nums[i] {
			res++
		}
	}
	return res
}
