type MagicDictionary struct {
    arr []string
}

func Constructor() MagicDictionary {
    return MagicDictionary{}
}

func (this *MagicDictionary) BuildDict(dictionary []string) {
    this.arr = dictionary
}

func (this *MagicDictionary) Search(searchWord string) bool {
    lens := len(searchWord)
    for _, v := range this.arr {
        cut := 0
        if len(v) == lens {
            for i := 0; i < lens; i++ {
                if v[i] != searchWord[i] {
                    cut++
                }
            }
        }
        if cut == 1 {
            return true
        }
    }
    return false
}