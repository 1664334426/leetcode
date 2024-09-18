func removeStars(s string) string {
	var bs []byte
	for i := range s {
		if s[i] == '*' {
			bs = bs[:len(bs)-1]
		} else {
			bs = append(bs, s[i])
		}
	}
	return string(bs)
//}
