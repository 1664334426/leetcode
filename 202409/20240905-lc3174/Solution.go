func clearDigits(s string) string {
	stk := make([]byte, 0)
	for i := range s {
		if s[i] >= '0' && s[i] <= '9' {
			if len(stk) > 0 {
				stk = stk[:len(stk)-1]
			}
		} else {
			stk = append(stk, s[i])
		}
	}
	return string(stk)
}
