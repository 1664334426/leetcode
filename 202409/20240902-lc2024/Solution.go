func maxConsecutiveAnswers(answerKey string, k int) int {
	var nxt, ts, fs, res int   //滑动窗口nxt为后指针
	for i := range answerKey { //i为前指针
		if answerKey[i] == 'T' {
			ts++
		} else {
			fs++
		}
		for min(ts, fs) > k { //获取当前窗口内T/F的最小值，超过k的话窗口缩小
			if answerKey[nxt] == 'T' {
				ts--
			} else {
				fs--
			}
			nxt++
		}
		res = max(res, ts+fs) //取过程中的合法窗口的最大值
	}
	return res
}
