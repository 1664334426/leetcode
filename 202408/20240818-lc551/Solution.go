func checkRecord(s string) bool {
    var bol bool
    for i := range s {
        if i < len(s)-2 { //判断连续三个L
            if s[i] == s[i+1] && s[i] == s[i+2] && s[i] == 'L' {
                return false
            }
        }
        if s[i] == 'A' { //判断是否超过一个A
            if !bol {
                bol = true
                continue
            }
            return false
        }
    }
    return true
}