func minEnd(n int, x int) int64 {
    var (
        idx = 0
        res = int64(x)
    )
    for i := int64(n - 1); i > 0; i >>= 1 {
        for (res>>idx)%2 == 1 {
            idx++
        }
        res |= (i & 1) << idx
        idx++
    }
    return res
}
