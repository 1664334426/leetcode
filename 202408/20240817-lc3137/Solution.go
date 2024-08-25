func minimumOperationsToMakeKPeriodic(word string, k int) int {
    var mp = make(map[string]int)
    for i := 0; i < len(word); i += k { //算段数
        mp[word[i:i+k]]++
    }
    var res = 0
    for _, v := range mp { // 保留段数最多的
        res = max(res, v)
    }
    return (len(word) / k) - res
}