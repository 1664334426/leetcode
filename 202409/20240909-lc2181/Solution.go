func mergeNodes(head *ListNode) *ListNode {
	var res *ListNode = head
	tmp := 0
	for head != nil {
		if head.Val != 0 {
			tmp += head.Val
			head.Val = 0
		} else {
			if tmp > 0 {
				head.Val = tmp
				tmp = 0
			}
		}
		if head != nil && head.Next == nil {
			head.Val += tmp
		}
		head = head.Next
	}
	for res != nil && res.Val == 0 {
		res = res.Next
	}
	head = res
	for head.Next != nil {
		if head.Next.Val == 0 {
			head.Next = head.Next.Next
		} else {
			head = head.Next
		}
	}
	return res
}
