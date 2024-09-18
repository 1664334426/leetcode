func busyStudent(startTime []int, endTime []int, queryTime int) int {
	res := 0
	for i := range startTime {
		if queryTime >= startTime[i] && queryTime <= endTime[i] {
			res++
		}
	}
	return res
}
