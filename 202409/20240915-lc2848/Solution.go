func numberOfPoints(nums [][]int) int {
	sort.Slice(nums, func(i, j int) bool {
		return nums[i][0] < nums[j][0]
	})
	for i := 0; i < len(nums); {
		var j int
		for j = i + 1; j < len(nums); j++ {
			if nums[i][1] >= nums[j][0] {
				nums[i][1] = max(nums[i][1], nums[j][1])
				nums[j][0] = 0
				nums[j][1] = 0
			} else {
				break
			}
		}
		i = j
	}
	var res int
	for _, v := range nums {
		res += v[1] - v[0]
		if v[1] != 0 {
			res++
		}
	}
	return res
}
