func distanceBetweenBusStops(distance []int, start int, destination int) int {
	var min1, min2 int
	for i := start; i != destination; i = (i + 1) % len(distance) {
		min1 += distance[i]
	}
	for i := destination; i != start; i = (i + 1) % len(distance) {
		min2 += distance[i]
	}
	return min(min1, min2)
}
