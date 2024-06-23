package org.example;

import java.io.IOException;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) throws IOException {
        //System.out.println(new Solution().minimumJumps(new int[]{162, 118, 178, 152, 167, 100, 40, 74, 199, 186, 26, 73, 200, 127, 30, 124, 193, 84, 184, 36, 103, 149, 153, 9, 54, 154, 133, 95, 45, 198, 79, 157, 64, 122, 59, 71, 48, 177, 82, 35, 14, 176, 16, 108, 111, 6, 168, 31, 134, 164, 136, 72, 98}, 29, 98, 80));

//        StreamTokenizer st = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
//        for (int i = 0; i < 4; i++) {
//            st.nextToken();
//            int nval = (int) st.nval;
//            System.out.println(nval);
//        }

    }
}
//class Solution {//1572. 矩阵对角线元素的和
//    public int diagonalSum(int[][] mat) {
//        int sum = 0;
//        int n = mat.length;
//        for (int i = 0; i < n; i++) {
//           sum+=mat[i][i];
//           sum+=mat[i][n-i-1];
//        }
//        if (n%2==1) sum -= mat[n/2][n/2];
//        return sum;
//
//    }
//}
//class Solution {//2099. 找到和最大的长度为 K 的子序列
//    static HashMap<Integer,Integer> map = new HashMap<>();
//    public int[] maxSubsequence(int[] nums, int k) {
//        if (nums == null) {
//            return null;
//        }
//        int len = nums.length;
//        int[] temp = Arrays.copyOf(nums,nums.length);
//        Arrays.sort(nums);
//        int idx = 0,rtu[] = new int[k];
//
//        for (int j = 1; j <= k; j++) {
//            int tmp = nums[len-j];
//            if (map.containsKey(tmp)) {
//                map.put(tmp,map.get(tmp)+1);
//            }else
//                map.put(tmp,1);
//
//        }
//        for (int i : temp) {
//            System.out.println(Arrays.toString(temp));
//            if (map.containsKey(i)) {
//                map.put(i,map.get(i)-1);
//                rtu[idx++] = i;
//                if (map.get(i)==0) {
//                    map.remove(i);
//                }
//            }
//        }
//        return rtu;
//    }
//}


//class ListNode {//23. 合并 K 个升序链表
//    int val;
//    ListNode next;
//    ListNode() {}
//    ListNode(int val) { this.val = val; }
//    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//}
//
//class Solution {//23. 合并 K 个升序链表
//    public ListNode mergeKLists(ListNode[] lists) {
//
//        PriorityQueue<ListNode> queue = new PriorityQueue<>(new Comparator<ListNode>() {
//            @Override
//            public int compare(ListNode o1, ListNode o2) {
//                return o1.val - o2.val;
//            }
//        });
//        for (ListNode list : lists) {
//            if (list != null) {
//                queue.add(list);
//            }
//
//        }
//
//        ListNode jk,ln =null;
//        if (!queue.isEmpty()) {
//            ln=queue.poll();
//            if (ln.next != null) {
//                queue.add(ln.next);
//            }
//        }
//        jk=ln;
//        while (!queue.isEmpty()){
//            ListNode poll = queue.poll();
//            ln.next=poll;
//            if (poll.next != null) {
//                queue.add(poll.next);
//            }
//            ln=ln.next;
//
//        }
//        if (ln != null) {
//            ln.next=null;
//        }
//        return jk;
//    }
//}
//class Solution {//6939. 数组中的最大数对和
//
//    public int maxSum(int[] nums) {
//        HashMap<Character,PriorityQueue<Integer>> map =new HashMap<>();
//        int rtu = -1;
//        for (int i = 0; i < nums.length; i++) {
//            char tmp = 0;
//            for (char c : (nums[i] + "").toCharArray()) {
//                if (c>tmp) {
//                    tmp=c;
//                }
//            }
//            if (!map.containsKey(tmp)) {
//                map.put(tmp,new PriorityQueue<>((x,y)->y-x));
//            }
//            map.get(tmp).add(nums[i]);
//        }
//        for (Character c : map.keySet()) {
//            if (map.get(c).size()>=2) {
//                int tp = map.get(c).poll();
//                tp+=map.get(c).poll();
//                if (tp>rtu) {
//                    rtu=tp;
//                }
//            }
//        }
//        return rtu;
//
//
//    }
//}

//class ListNode {//6914. 翻倍以链表形式表示的数字
//    int val;
//    ListNode next;
//    ListNode() {}
//    ListNode(int val) { this.val = val; }
//    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
//}
//
//class Solution {//6914. 翻倍以链表形式表示的数字
//    public ListNode doubleIt(ListNode head) {
//        int dp = dp(head);
//        if (dp>0) {
//            head = new ListNode(dp,head);
//        }
//        return head;
//
//    }
//    int dp (ListNode ln){
//        if (ln == null) return 0;
//        int tmp=ln.val*2+dp(ln.next);
//        int h=tmp/10,p=tmp%10;
//        ln.val=p;
//        return h;
//    }
//}
//class Solution {//7022. 限制条件下元素之间的最小绝对差
//    public int minAbsoluteDifference(List<Integer> nums, int x) {
//
//        TreeMap<Integer, Integer> end = new TreeMap<>();
//        int i=0;
//        int arr[] = new int[nums.size()];
//        for (Integer num : nums) {
//            if (i>=x){
//                if (end.containsKey(num)) {
//                    end.put(num,end.get(num)+1);
//                }else end.put(num,1);
//            }
//            arr[i++]=num;
//
//        }
//        int rtu = Integer.MAX_VALUE;
//        for (int j = 0; j < arr.length-x; j++) {
//            Integer ceilingKey = end.ceilingKey(arr[j]);
//            Integer floorKey = end.floorKey(arr[j]);
//            if (ceilingKey != null) {
//                if (ceilingKey-arr[j]<rtu) {
//                    rtu=ceilingKey-arr[j];
//                }
//            }
//            if (floorKey != null) {
//                if (arr[j]-floorKey<rtu) {
//                    rtu=arr[j]-floorKey;
//                }
//            }
//            end.put(arr[j+x],end.get(arr[j+x])-1);
//            if (end.get(arr[j+x])==0) end.remove(arr[j+x]);
//            if (rtu==0) return 0;
//
//        }
//        return rtu;
//    }
//}
//class Solution {//7023. 操作使得分最大
//    public int maximumScore(List<Integer> nums, int k) {
//        int i=0,arr[]=new int[nums.size()];
//        for (Integer num : nums) {
//            arr[i++]=num;
//        }
//        Arrays.sort(arr);
//        int rtu = 1;
//        for (int j = arr.length - 1; j >= arr.length -k; j--) {
//            rtu*=arr[j];
//            rtu%=(1000000000+7);
//        }
//        return rtu;
//    }
//}
//class Solution {//88. 合并两个有序数组
//    public void merge(int[] nums1, int m, int[] nums2, int n) {
//        int[] ints = Arrays.copyOf(nums1, 1 << 25);
//        int i=0,j=0,idx=0;
//        while (i<m&&j<n){
//            if (ints[i]>nums2[j]){
//                nums1[idx++]=nums2[j++];
//            }else {
//                nums1[idx++]=ints[i++];
//            }
//        }
//        System.out.println(Arrays.toString(nums1));
//        if (i==m) {
//            while (j<n) nums1[idx++]=nums2[j++];
//        }
//        if (j==m) {
//            while (i<m) nums1[idx++]=ints[i++];
//        }
//
//    }
//}


//class TreeNode {
//    int val;
//    TreeNode left;
//    TreeNode right;
//    TreeNode() {}
//    TreeNode(int val) { this.val = val; }
//    TreeNode(int val, TreeNode left, TreeNode right) {
//        this.val = val;
//        this.left = left;
//        this.right = right;
//    }
//}
//
//class Solution {//617. 合并二叉树
//    public TreeNode mergeTrees(TreeNode root1, TreeNode root2) {
//        return dfs(root1,root2);
//    }
//    TreeNode dfs(TreeNode root1, TreeNode root2){
//        if (root1==null && root2 ==null)return null;//base case
//        if (root1 == null) {
//            return root2;
//        }
//        if (root2 == null) {
//            return root1;
//        }
//        root1.val = root1.val + root2.val;
//        root1.left=dfs(root1.left,root2.left);
//        root1.right=dfs(root1.right,root2.right);
//        return root1;
//
//
//    }
//
//}
//class Solution {//849. 到最近的人的最大距离
//    public int maxDistToClosest(int[] seats) {
//        int len=-1;
//        int tmp=0;
//        for (int i = 0; i < seats.length; i++) {//
//            if (seats[i]==0){
//                tmp++;
//                seats[i]=1;
//            }
//            else {
//                tmp=0;
//                break;
//            }
//            len=Math.max(len,tmp*2);
//        }
//        for (int i = seats.length - 1; i >= 0; i--) {
//            if (seats[i]==0){
//                tmp++;
//                seats[i]=1;
//            }
//            else {
//                tmp=0;
//                break;
//            }
//            len=Math.max(len,tmp*2);
//        }
//        for (int i = 0; i < seats.length; i++) {
//            if (seats[i]==1) tmp=0;
//            else tmp++;
//            len=Math.max(len,tmp);
//        }
//        return (len+1)/2;
//    }
//}
//class Node{
//    public Node(char c){
//        this.c=c;
//    }
//    public Character c;
//    public String s = null;
//
//}
//class Solution {
//    public String findReplaceString(String s, int[] indices, String[] sources, String[] targets) {
//        ArrayList<Node> al = new ArrayList<>();
//        for (char c : s.toCharArray()) {
//            al.add(new Node(c));
//        }
//        for (int i = 0; i < indices.length; i++) {
//            boolean bol =true;
//            int idx = indices[i];
//            for (int j = 0; j < sources[i].length(); j++) {
//                if (al.get(idx+j).c!=sources[i].charAt(j)) {
//                    bol = false;
//                    break;
//                }
//            }
//            if (bol) {
//                al.get(idx).s=sources[i];
//                for (int k = 1; k < sources[i].length(); k++) {
//                    al.get(idx+k).s="";
//                }
//            }
//
//        }
//        String rtu="";
//        for (Node node : al) {
//            if (node.s==null)rtu+=node.c;
//            else rtu+=node.s;
//        }
//
//        return rtu;
//    }
//}
//class Solution {
//    public int[] circularGameLosers(int n, int k) {
//        int[] ints = new int[n];
//        int kk=1;
//        for(int i = 0;ints[i] == 0;i += (k*(kk++)),i%=n){
//            ints[i]=1;
//        }
//        int num=0;
//        for (int anInt : ints) {
//            if (anInt==0) {
//                num++;
//            }
//        }
//        int []rtu = new int[num];
//        int idx=0;
//        for (int i = 0; i < ints.length; i++) {
//            if (ints[i]==0){
//                rtu[idx++] = i+1;
//            }
//        }
//        return rtu;
//    }
//}
//class Solution {
//    public long putMarbles(int[] weights, int k) {
//       int [] w = new int[weights.length-1];
//        for (int i = 0; i < weights.length-1; i++) {
//            w[i]=weights[i]+weights[i+1];
//        }
//        Arrays.sort(w);
//        int rtu=0;
//        for (int i = 0; i < k; i++) {
//            rtu+=(w[w.length-1-i]-w[i]);
//        }
//        return rtu;
//    }
//
//}
//class Solution {//1388
//    static int arr1[]=null,arr2[]=null;
//    static int jyh1[][]=null,jyh2[][]=null;
//    public int maxSizeSlices(int[] slices) {
//        int dep = slices.length/3;
//        arr1=Arrays.copyOfRange(slices,0,slices.length-1);
//        arr2=Arrays.copyOfRange(slices,1,slices.length);
//        jyh1=new int[501][170];
//        jyh2=new int[501][170];
//        return Math.max(dp1(slices.length-2,dep),dp2(slices.length-2,dep));
//    }
//    int dp1(int i,int deep){
//        if (i<0 || deep==0) {
//            return 0;
//        }
//        if (jyh1[i][deep]!=0) {
//            return jyh1[i][deep];
//        }
//
//        int max = Math.max(dp1(i - 1, deep), dp1(i - 2, deep - 1) + arr1[i]);
//        jyh1[i][deep]=max;
//        return max;
//    }
//    int dp2(int i,int deep){
//        if (i<0 || deep==0) {
//            return 0;
//        }
//        if (jyh2[i][deep]!=0) {
//            return jyh2[i][deep];
//        }
//
//        int max = Math.max(dp2(i - 1, deep), dp2(i - 2, deep - 1) + arr2[i]);
//        jyh2[i][deep]=max;
//        return max;
//    }
//}
//class Solution {
//    static int [][]pz = null;
//    public int ways(String[] pizza, int k) {
//        pz=new int [pizza.length][pizza[0].length()];
//        for (int i = 0; i < pz.length; i++) {
//            for (int j = 0; j < pz[i].length; j++) {
//                if (pizza[i].charAt(j)=='A')pz[i][j]=1;
//            }
//        }
//
//    }
//}
//class Solution {
//    public int lengthOfLongestSubstring(String s) {
//        HashSet<Character> set = new HashSet<>();
//        int rtu=0,j=0;
//        for (int i = 0; i < s.length(); i++) {
//            if (set.contains(s.charAt(i))) {
//               while (s.charAt(j)!=s.charAt(i)){
//                   set.remove(s.charAt(j++));
//               }
//               j++;
//            }
//            set.add(s.charAt(i));
//            rtu=Math.max(rtu,set.size());
//        }
//        return rtu;
//    }
//}
//class Solution {
//    public boolean canChange(String start, String target) {
//        char[] chars = start.toCharArray();
//        if (chars[0]=='L') {
//            if (target.charAt(0)!='L') {
//                return false;
//            }
//        }
//        if (chars[chars.length-1]=='R') {
//            if (target.charAt(chars.length-1)!='R') {
//                return false;
//            }
//        }
//        int sumsR=0,sumsL=0,sumtR=0,sumtL=0;
//        for (int i = 0; i < chars.length; i++) {
//            if (chars[i]=='R') {
//                sumsR++;
//            }
//            if (chars[i]=='L') {
//                sumsL++;
//            }
//            if (target.charAt(i)=='R') {
//                sumtR++;
//            }
//            if (target.charAt(i)=='L') {
//                sumtL++;
//            }
//        }
//        if (sumsR!=sumtR || sumsL!=sumtL)return false;
//        List<Character> list = new LinkedList<>();
//
//        for (int i = 0; i < chars.length; i++) {
//            if (chars[i] != '_') {
//                list.add(chars[i]);
//            }
//        }
//        for (int i = 0; i < chars.length; i++) {
//            if (target.charAt(i) != '_') {
//                if (list.get(0)==target.charAt(i)){
//                    list.remove(0);
//                }else {
//                    System.out.println("ssss");
//                    return false;
//                }
//            }
//        }
//        boolean bol=false;
//        if (chars[0]=='R') {
//            bol=true;
//            chars[0]='r';
//        }
//
//
//
//        for (int i = 1; i < chars.length; i++) {
//            if (chars[i]=='L') bol=false;
//            else if (chars[i]=='R') {
//                bol=true;
//                chars[i]='r';
//            }
//            else if (bol) chars[i]='R';
//        }
//        if (bol=chars[chars.length-1]=='L') {
//            chars[chars.length-1]='l';
//        }
//        for (int i = chars.length - 2; i >= 0; i--) {
//            if (chars[i]=='L') {
//                bol=true;
//                chars[i]='l';
//            }
//            else if (chars[i]=='r') {
//                bol=false;
//            }
//            else if (bol){
//                if (chars[i]=='R')chars[i]='K';
//                else chars[i]='L';
//            }
//        }
//        for (int i = 0; i < target.length(); i++) {
//            if (chars[i]!='K'){
//                if (target.charAt(i)=='R'){
//                    if (chars[i]=='L' ||chars[i]=='_' ||chars[i]=='l') {
//                        return false;
//                    }
//                }
//                if (target.charAt(i)=='L'){
//                    if (chars[i]=='r' ||chars[i]=='R'||chars[i]=='_') {
//                        return false;
//                    }
//                }
////                if (target.charAt(i)=='_'){
////                    if (chars[i]=='r' ||chars[i]=='l') {
////                        return false;
////                    }
////                }
//
//            }
//
//        }
//        return true;
//    }
//}
//class Solution {
//    public boolean canChange(String start, String target) {
//        char[] startCharArray = start.toCharArray();
//        char[] targetCharArray = target.toCharArray();
//        int i=0,j=0;
//
//        while (i<start.length() && j<target.length()){
//            while (i<startCharArray.length && startCharArray[i]=='_')i++;
//            while (j<targetCharArray.length && targetCharArray[j]=='_')j++;
//            if (i<startCharArray.length ^ j<targetCharArray.length) return false;
//            if (i == j && j == targetCharArray.length) return true;
//            if (startCharArray[i]!=targetCharArray[j]) return false;
//            if (startCharArray[i]=='R') {
//                if (i>j) {
//                    return false;
//                }
//            }
//            if (startCharArray[i]=='L') {
//                if (i<j) {
//                    return false;
//                }
//            }
//            i++;j++;
//        }
//        return true;
//    }
//}
//class ListNode {
//    int val;
//    ListNode next;
//    ListNode(int x) {
//        val = x;
//        next = null;
//    }
//}
//
//
//public class Solution {
//    public ListNode detectCycle(ListNode head) {
//        ListNode kuai = head,man = head;
//        do {
//            if (kuai.next!=null){
//                kuai=kuai.next;
//            }else return null;
//            if (kuai.next!=null){
//                kuai=kuai.next;
//            }else return null;
//            man=man.next;
//        }while (kuai!=man);
//        while (head!=man){
//            man=man.next;
//            head=head.next;
//        }
//        return head;
//    }
//}
//class Solution {
//
//    public int[] countPairs(int n, int[][] edges, int[] queries) {
//        //build tu
//        HashMap<Integer,Integer> map = new HashMap<>();
//        int [] nums = new int[n+1];
//        for (int i = 0; i < edges.length; i++) {
//            nums[edges[i][0]]++;
//            nums[edges[i][1]]++;
//            int x=edges[i][1] ,y=edges[i][0];
//            if (y < x){
//                x=edges[i][0];
//                y=edges[i][1];
//            }
//            if (map.containsKey(x*n+y)) {
//                map.put(x*n+y,map.get(x*n+y)+1);
//            }else map.put(x*n+y,1);
//        }
//        int  arr[] = new int[(n*(n-1))/2],idx = 0;
//        for (int i = 1; i < n; i++) {
//            for (int j = i+1; j <= n; j++) {
//                int ns = 0;
//                if (map.containsKey(i*n+j)) {
//                    ns = map.get(i*n+j);
//                }
//                arr[idx++] = nums[i]+nums[j]-ns;
//            }
//        }
//        int []rtu = new int[queries.length];
//        Arrays.sort(arr);
//        for (int i = 0; i < queries.length; i++) {
//            int l = 0 , r = arr.length-1;
//            while (l<r){
//                int mid = (l + r + 1) / 2;
//                if(arr[mid] <= queries[i]) {
//                    l = mid;
//                }else{
//                    r= mid - 1;
//                }
//            }
//            if(queries[i]<arr[0]){
//                rtu[i]=arr.length;
//            }else if(queries[i]>=arr[arr.length-1]){
//                rtu[i]=0;
//            }else rtu[i] = arr.length-r-1;
//        }
//        return rtu;
//
//    }
//}
//public class Solution {
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 返回满足题意的最小操作数
//     * @param str string字符串 给定字符串
//     * @return int整型
//     */
//    public int minOperations (String str) {
//        // write code here
//        int rtu = 0;
//        HashSet<Character> map = new HashSet<>();
//        for (char c : str.toCharArray()) {
//            if (map.contains(c)) {
//                map.remove(c);
//                rtu++;
//            }else map.add(c);
//        }
//        if (str.length()>=52) {
//            return str.length()-26;
//        }
//        return rtu;
//    }
//}
//class Solution {
//
//    public int[] countPairs(int n, int[][] edges, int[] queries) {
//        //超时间代码
//        HashMap<Integer,Integer> map = new HashMap<>();
//        int [] nums = new int[n+1];
//        for (int i = 0; i < edges.length; i++) {
//            nums[edges[i][0]]++;
//            nums[edges[i][1]]++;
//            int x=edges[i][1] ,y=edges[i][0];
//            if (y < x){
//                x=edges[i][0];
//                y=edges[i][1];
//            }
//            if (map.containsKey(x*n+y)) {
//                map.put(x*n+y,map.get(x*n+y)+1);
//            }else map.put(x*n+y,1);
//        }
//        TreeMap<Integer,Integer> map1 =new TreeMap<>();
//        for (int i = 1; i < n; i++) {
//            for (int j = i+1; j <= n; j++) {
//                int ns = 0;
//                if (map.containsKey(i*n+j)) {
//                    ns = map.get(i*n+j);
//                }
//                int tmp = nums[i]+nums[j]-ns;
//                if (!map1.containsKey(tmp)) {
//                    map1.put(tmp,1);
//                }else map1.put(tmp,map1.get(tmp)+1);
//            }
//        }
//        int []rtu = new int[queries.length];
//        int t=map1.firstKey();
//        while (null!=map1.higherKey(t))
//        {
//            map1.put(map1.higherKey(t),map1.get(map1.higherKey(t))+map1.get(t));
//            t=map1.higherKey(t);
//        }
//        for (int i = 0; i < queries.length; i++) {
//            if (map1.floorKey(queries[i]) != null) {
//                rtu[i]=(n*(n-1))/2 - map1.get(map1.floorKey(queries[i]));
//            }else rtu[i] = (n*(n-1))/2;
//        }
//        return rtu;
//
//    }
//}
//class Solution {
//
//    public int[] countPairs(int n, int[][] edges, int[] queries) {
//        //超内存代码
//        HashMap<Integer,Integer> map = new HashMap<>();
//        int [] nums = new int[n+1];
//        for (int i = 0; i < edges.length; i++) {
//            nums[edges[i][0]]++;
//            nums[edges[i][1]]++;
//            int x=edges[i][1] ,y=edges[i][0];
//            if (y < x){
//                x=edges[i][0];
//                y=edges[i][1];
//            }
//            if (map.containsKey(x*n+y)) {
//                map.put(x*n+y,map.get(x*n+y)+1);
//            }else map.put(x*n+y,1);
//        }
//        HashMap<Integer,Integer> map1 = new HashMap<>();
//        for (int i = 1; i < n; i++) {
//            for (int j = i+1; j <= n; j++) {
//                int ns = 0;
//                if (map.containsKey(i*n+j)) {
//                    ns = map.get(i*n+j);
//                }
//                int tmp = nums[i]+nums[j]-ns;
//                if (!map1.containsKey(tmp)) {
//                    map1.put(tmp,1);
//                }else map1.put(tmp,map1.get(tmp)+1);
//            }
//        }
//        int  arr[] = new int[map1.size()],idx=0;
//        int []rtu = new int[queries.length];
//        for (Integer i : map1.keySet()) {
//            arr[idx++]=i;
//        }
//        Arrays.sort(arr);
//        for (int i = 1; i < arr.length; i++) {
//            map1.put(arr[i],map1.get(arr[i])+map1.get(arr[i-1]));
//        }
//        for (int i = 0; i < queries.length; i++) {
//            int l = 0 , r = arr.length-1;
//            while (l<r){
//                int mid = (l + r + 1) / 2;
//                if(arr[mid] <= queries[i]) {
//                    l = mid;
//                }else{
//                    r= mid - 1;
//                }
//            }
//            if(queries[i]<arr[0]){
//                rtu[i]=(n*(n-1))/2;
//            }else if(queries[i]>=arr[arr.length-1]){
//                rtu[i]=0;
//            }else rtu[i] = ((n*(n-1))/2)-map1.get(arr[r]);
//        }
//        return rtu;
//
//    }
//}
//class Solution {
//    public int minAreaRect(int[][] points) {
//        Arrays.sort(points, new Comparator<int[]>() {
//            @Override
//            public int compare(int[] o1, int[] o2) {
//                if (o1[0]!=o2[0]) return o1[0]-o2[0];
//                else return o1[1]-o2[1];
//            }
//        });
//        HashMap<Integer,HashSet<Integer>> map = new HashMap<>();
//        for (int[] point : points) {
//            if (!map.containsKey(point[0])) map.put(point[0],new HashSet<>());
//            map.get(point[0]).add(point[1]);
//        }
//        int rtu = Integer.MAX_VALUE;
//        for (int i = 0; i < points.length-1; i++) {
//            for (int j = i+1; j < points.length; j++) {
//                if (points[i][0]==points[j][0]||points[j][1]==points[i][1])continue;
//                if (map.get(points[i][0]).contains(points[j][1])&&map.get(points[j][0]).contains(points[i][1])){
//                    rtu=Math.min(rtu,Math.abs((points[j][0]-points[i][0])*(points[j][1]-points[i][1])));
//
//                }
//            }
//        }
//        return rtu==Integer.MAX_VALUE?0:rtu;
//    }
//}
//class Solution {
//    public int[][] merge(int[][] intervals) {
//        Arrays.sort(intervals,(x,y)->{
//            if (x!=y) {
//                return x[0]-y[0];
//            }else return x[1]-y[1];
//        });
//        LinkedList<int []> list = new LinkedList<>();
//        list.add(intervals[0]);
//        for (int i = 1; i < intervals.length; i++) {
//            if (list.getLast()[1]>=intervals[i][0]) {
//                list.getLast()[1]=Math.max(list.getLast()[1],intervals[i][1]);
//            }else {
//                list.add(intervals[i]);
//            }
//        }
//        return list.toArray(new int[0][0]);
//    }
//}
//class Solution {
//    public int[][] insert(int[][] intervals, int[] newInterval) {
//        ArrayList<int[]> list = new ArrayList<>();
//        if (intervals.length==0) {
//            return new int[][]{newInterval};
//        }
//        if (intervals.length==1) {
//            if (intervals[0][1]<newInterval[0])return new int[][]{intervals[0],newInterval};
//            if (intervals[0][0]>newInterval[1])return new int[][]{newInterval,intervals[0]};
//            return new int[][]{{Math.min(intervals[0][0],newInterval[0]),Math.max(intervals[0][1],newInterval[1])}};
//        }
//        int i=0;
//        for (i = 0; i < intervals.length; i++) {
//            if (intervals[i][1]<newInterval[0]) {
//                list.add(intervals[i]);
//                continue;
//            }
//            intervals[i][0]=Math.min(intervals[i][0],newInterval[0]);
//            int idx=i;
//            while (intervals[idx][1]<newInterval[1])idx++;
//            if (intervals[idx][0]>newInterval[1]){
//                intervals[i][1]=Math.max(intervals[i][1],newInterval[1]);
//                list.add(intervals[i]);
//                i=idx;
//            }else {
//                intervals[i][1]=Math.max(intervals[idx][1],newInterval[1]);
//                list.add(intervals[i]);
//                i=idx+1;
//            }
//            break;
//
//        }
//        for (; i < intervals.length; i++) {
//            list.add(intervals[i]);
//        }
//        return list.toArray(new int[0][0]);
//    }
//}
//class Solution {
//    public int[][] insert(int[][] intervals, int[] newInterval) {
//        boolean bol = true;
//        ArrayList<int[]> list = new ArrayList<>();
//        int i=0;
//        for (; i < intervals.length; i++) {
//            if (intervals[i][1]<newInterval[0]) {
//                list.add(intervals[i]);
//            }else break;
//        }
//        for (; i < intervals.length; i++) {
//            if (intervals[i][0]<=newInterval[1]) {
//                newInterval[0]=Math.min(newInterval[0],intervals[i][0]);
//                newInterval[1]=Math.max(newInterval[1],intervals[i][1]);
//            }else break;
//        }
//        list.add(newInterval);
//        for (; i < intervals.length; i++) {
//            if (intervals[i][1]<newInterval[0]) {
//                list.add(intervals[i]);
//            }
//        }
//
//        return list.toArray(new int[0][0]);
//    }
//}
//class Solution {
//    public int numFactoredBinaryTrees(int[] arr) {
//        Arrays.sort(arr);
//        final long mod = 1000000007;
//        HashMap<Integer,Long> map = new HashMap<>();
//        for (int i : arr) map.put(i,1l);
//        for (int i = 0; i < arr.length; i++) {
//            for (int j = 0; j <= i; j++) {
//                if (arr[i]*arr[j]<=arr[arr.length-1]) {
//                    if (map.containsKey(arr[i]*arr[j])) {
//                        if (i==j) {
//                            map.put(arr[i]*arr[j],(map.get(arr[i])*map.get(arr[j])+map.get(arr[i]*arr[j]))%mod);
//                        }else {
//                            map.put(arr[i]*arr[j],(2*map.get(arr[i])*map.get(arr[j])+map.get(arr[i]*arr[j]))%mod);
//                        }
//                    }
//                }
//            }
//        }
//        long rtu = 0;
//        for (int i : arr) {
//            rtu+=map.get(i);
//            rtu%=mod;
//        }
//        return (int)rtu;
//    }
//}
//class Solution {
//    public int[] minOperations(String boxes) {
//
//        int n = boxes.length();
//        int l=0,r=0;
//        int [] arr = new int[n];
//        for (int i = 0; i < n; i++) {
//            if (boxes.charAt(i)=='1') {
//                arr[0] += i;
//                r++;
//            }
//        }
//        for (int i = 1; i < arr.length; i++) {
//            if (boxes.charAt(i-1)=='1') {
//                l++;
//                r--;
//            }
//            arr[i]=arr[i-1]-r+l;
//        }
//        return arr;
//
//    }
//}
//class Solution {
//    public long waysToBuyPensPencils(int total, int cost1, int cost2) {
//        long rtu = 0;
//        for (int i = 0; cost1*i<=total; i++) {
//            int tmp = total-cost1*i;
//            rtu+=(i+1)*((tmp/cost2)+1);
//        }
//        return rtu;
//    }
//}
//class Solution {
//    int forbidden[],a, b,x,end;
//    HashSet<Integer> set = null;
//    HashMap <Integer,Integer> map = null;
//    public int minimumJumps(int[] forbidden, int a, int b, int x) {
//        set=new HashSet<>();
//        map=new HashMap<>();
//        this.forbidden=forbidden;
//        this.a=a;
//        this.b=b;
//        this.x=x;
//
//        int fmax=-1;
//        for (int i : forbidden) {
//            fmax=Math.max(fmax,i);
//            map.put(i,Integer.MAX_VALUE);
//        }
//
//        int dfs = dfs(0);
//        return dfs==Integer.MAX_VALUE?-1:dfs;
//    }
//    int dfs(int i){
//
//        if (map.containsKey(i)) {
//            return map.get(i);
//        }
//        if (set.contains(i)){
//            System.out.println(123);
//            return Integer.MAX_VALUE;
//        }else set.add(i);
//        if (i>end){
//            return Integer.MAX_VALUE;
//        }
//        if (i==x) {
//            return 0;
//        }
//        int l=Integer.MAX_VALUE,r=Integer.MAX_VALUE;
//        if (i+a<end){
//            int dfs = dfs(i + a);
//            if (dfs==Integer.MAX_VALUE) {
//                r = dfs;
//            }else {
//                r = 1+ dfs;
//            }
//        }
//        if (i-b>=0){
//            if (i-b==x) l = 1;
//            else {
//                int dfs = dfs(i - b + a);
//                if (dfs==Integer.MAX_VALUE) {
//                    l=dfs;
//                }else {
//                    l = 2+ dfs;
//                }
//            }
//        }
//
//        int min = Math.min(r, l);
//        map.put(i,min);
//        set.remove(i);
//        return min;
//    }
//
//}
//class Solution {
//    int forbidden[],a, b,x,end;
//    HashSet<Integer> set=null;
//    HashSet<Integer> set1 = null;
//    HashMap <Integer,Integer> map = null;
//    public int minimumJumps(int[] forbidden, int a, int b, int x) {
//        map=new HashMap<>();
//        this.forbidden=forbidden;
//        this.a=a;
//        this.b=b;
//        this.x=x;
//        set = new HashSet<>();
//        set1 = new HashSet<>();
//        int fmax=-1;
//        for (int i : forbidden) {
//            fmax=Math.max(fmax,i);
//            set.add(i);
//        }
//        end=x;
//        if (a>b) {
//            end=x+b;
//        }else if (b>a){
//            end=Math.max(fmax+a+b,x);
//        }
//        int dfs = dfs(0);
//        return dfs==Integer.MAX_VALUE?-1:dfs;
//    }
//    int dfs(int i){
//        if (map.containsKey(i)) {
//            return map.get(i);
//        }
//        if (set1.contains(i)) {
//            return Integer.MAX_VALUE;
//        }else set1.add(i);
//        if (i>end||set.contains(i)){
//            return Integer.MAX_VALUE;
//        }
//        if (i==x) {
//            return 0;
//        }
//        int l=Integer.MAX_VALUE,r=Integer.MAX_VALUE;
//        if (!set.contains(i+a)){
//            int dfs = dfs(i + a);
//            if (dfs==Integer.MAX_VALUE) {
//                r=dfs;
//            }else {
//                r = 1+ dfs;
//            }
//        }
//        if (i-b>=0&&!set.contains(i-b)){
//            if (i-b==x) l = 1;
//            else {
//                int dfs = dfs(i - b + a);
//                if (dfs==Integer.MAX_VALUE) {
//                    l=dfs;
//                }else {
//                    l = 2+ dfs;
//                }
//
//            }
//        }
//
//        int min = Math.min(r, l);
//        map.put(i,min);
//        set1.remove(i);
//        return min;
//    }
//
//}
//class Solution {
//    public int captureForts(int[] forts) {
//        int i=0,rtu=0;
//        for (int j = 0; j < forts.length; j++) {
//            if (forts[j]!=0) {
//                i=j;break;
//            }
//        }
//        if (i==0) {
//            return 0;
//        }
//
//        int tmp=0,pre=i;
//        for (i++; i < forts.length; i++) {
//            if (forts[i]==0) {
//                tmp++;
//            }else if (forts[i]==-forts[pre]){
//                rtu=Math.max(rtu,tmp);
//                pre=i;
//                tmp=0;
//                i++;
//            }else {
//                pre=i;
//                tmp=0;
//                i++;
//            }
//        }
//        return rtu;
//
//    }
//}
//class Solution {
//    public int eliminateMaximum(int[] dist, int[] speed) {
//        TreeMap<Integer,Integer> map = new TreeMap<>();
//        for (int i = 0; i < dist.length; i++) {
//            int time = dist[i] / speed[i];
//            int yu = dist[i] % speed[i];
//            if (yu!=0) time++;
//            if (map.containsKey(time)) {
//                map.put(time,map.get(time)+1);
//            }else map.put(time,1);
//        }
//        Integer tmp = map.firstKey();
//        if (map.get(tmp)>tmp){
//            return tmp;
//        }
//        Integer t=null;
//        while ((t=map.higherKey(tmp))!=null){
//            map.put(t,map.get(t)+map.get(tmp));
//            if (map.get(t)>t){
//                return t;
//            }
//            tmp=t;
//        }
//        return map.get(tmp);
//
//    }
//}

//class TreeNode {
//    int val;
//    TreeNode left;
//    TreeNode right;
//    TreeNode(int x) { val = x; }
//}
//
//class Codec {
//
//    // Encodes a tree to a single string.
//    public String serialize(TreeNode root) {
//        if (root==null) return "";
//        return root.val+"{"+serialize(root.left)+"}{"+serialize(root.right)+"}";
//    }
//
//    // Decodes your encoded data to tree.
//    public TreeNode deserialize(String data) {
//        if (data=="") {
//            return null;
//        }
//        int indexOf = data.indexOf("{");
//        TreeNode node = new TreeNode(Integer.parseInt(data.substring(0, indexOf)));
//        int d=1;
//        boolean bol=false;
//        int n=0;
//        for (int i = indexOf+1; i < data.length(); i++) {
//            if (data.charAt(i)=='{') d++;
//            if (data.charAt(i)=='}') d--;
//            if (!bol&&d==0) {
//                n=i;
//                bol=true;
//            }
//        }
//        node.left=deserialize(data.substring(indexOf+1,n));
//        node.right=deserialize(data.substring(n+2,data.length()-1));
//        return node;
//    }
//}
//
//// Your Codec object will be instantiated and called as such:
//// Codec ser = new Codec();
//// Codec deser = new Codec();
//// String tree = ser.serialize(root);
//// TreeNode ans = deser.deserialize(tree);
//// return ans;

//class TreeNode {
//    int val;
//    TreeNode left;
//    TreeNode right;
//    TreeNode() {}
//    TreeNode(int val) { this.val = val; }
//    TreeNode(int val, TreeNode left, TreeNode right) {
//        this.val = val;
//        this.left = left;
//        this.right = right;
//    }
//}
//
//class Solution {
//    Queue<TreeNode> que= new LinkedList<>();
//    Queue<TreeNode> tmp;
//    public TreeNode lcaDeepestLeaves(TreeNode root) {
//        que.add(root);
//        while (!que.isEmpty()) {
//            tmp=new LinkedList<>();
//            for (TreeNode node : que) {
//                //世上无难事，只要肯放弃
//            }
//        }
//    }
//}
//class Solution {
//    int rs[]= null;
//    int c;
//    public long repairCars(int[] ranks, int cars) {
//        rs = ranks;
//        c = cars;
//        long l=1,r=ranks[0]*cars*cars;
//        while (r>l){
//            long mid = (r+l)/2;
//            if (getCarsByTime(mid)>cars){
//                r=mid;
//            }else {
//                l=mid+1;
//            }
//        }
//        return l;
//
//    }
//    long getCarsByTime(long time){
//        long sum = 0;
//        for (int pw : rs){
//            sum+=(long)Math.sqrt(time/pw);
//        }
//        return sum;
//    }
//}
//class Solution {
//    static List<int []> bigone;
//    static List<int []> tmp=null;
//    int nn=0;
//    int tp=0;
//    static List<int []> ttt = new ArrayList<>();
//    static List<List<int []>> forar = new ArrayList<>();
//    public int minimumMoves(int[][] grid) {
//        int rtu=Integer.MAX_VALUE;
//        ArrayList<int []> nuls = new ArrayList<>();
//        bigone = new ArrayList<>();
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                if (grid[i][j]==0) {
//                    nuls.add(new int[]{i,j});
//                }else if (grid[i][j]!=1) {
//                    bigone.add(new int[]{i,j});
//                }
//            }
//        }
//
//        nn=bigone.size();
//        forar = new ArrayList<>();
//        fr();
//        for (List<int[]> list : forar) {
//            System.out.println(11);
//            for (int[] ints : list) {
//                System.out.println(Arrays.toString(ints));
//            }
//        }
//        for (List<int[]> list1 : forar) {
//
//            for (int[] ints : list1) {
//                nuls.sort((x,y)->{
//                    return (Math.abs(x[0]-ints[0])+Math.abs(x[1]-ints[1]))-(Math.abs(y[0]-ints[0])+Math.abs(y[1]-ints[1]));
//                });
//                int i = grid[ints[0]][ints[1]];
//                i--;
//                for (int j = 0; j < i; j++) {
//                    int[] remove = nuls.remove(0);
//                    tp+=Math.abs(remove[0]-ints[0])+Math.abs(remove[1]-ints[1]);
//                    ttt.add(remove);
//                    System.out.println("sss:"+tp);
//                }
//            }
//            for (int[] ints : ttt) {
//                nuls.add(ints);
//            }
//            ttt= new ArrayList<>();
//            rtu=Math.min(tp,rtu);
//            tp=0;
//        }
//
//        return rtu;
//    }
//    void fr(){
//        if (bigone.size()==0) {
//            System.out.println(222);
//            forar.add(tmp);
//            return;
//        }
//
//        for (int i = 0; i < bigone.size(); i++) {
//            if (bigone.size()==nn) {
//                tmp = new ArrayList<>();
//            }
//            int[] remove = bigone.remove(i);
//            tmp.add(remove);
//            fr();
//            bigone.add(i,remove);
//        }
//    }
//
//}
//class Solution {
//    Queue<int []> queue = new PriorityQueue<>((x,y)->y[0]-x[0]);
//    public int scheduleCourse(int[][] courses) {
//        Arrays.sort(courses,(x,y)->x[1]-y[1]);
//        int sumTime = 0;
//        for (int[] cours : courses) {
//            if (sumTime+cours[0]<=cours[1]) {
//                sumTime+=cours[0];
//                queue.add(cours);
//            }else if (!queue.isEmpty() && queue.peek()[1] > cours[0]){
//                sumTime -=queue.poll()[1] - cours[0];
//                queue.add(cours);
//            }
//
//        }
//        return queue.size();
//
//    }
//}
//class Solution {
//    public int countPairs(List<List<Integer>> coordinates, int k) {
//        int rtu=0;
//        coordinates.sort((x,y)->{
//            if (x.get(0)!=y.get(0)) {
//                return x.get(0)-y.get(0);
//            }
//            return x.get(1)-y.get(1);
//        });
//        for (int i = 0; i < coordinates.size()-1; ++i){
//            for (int j = (i + 1); j < coordinates.size(); ++j){
//                if ((coordinates.get(i).get(0)^coordinates.get(j).get(0))+(coordinates.get(i).get(1)^coordinates.get(j).get(1))>k)break;
//                if ((coordinates.get(i).get(0)^coordinates.get(j).get(0))+(coordinates.get(i).get(1)^coordinates.get(j).get(1))==k){
//                    rtu++;
//                }
//            }
//        }
//        return rtu;
//    }
//}
//class NumArray {
//    class Node{
//        Node(int b, int e){
//            begin = b;
//            end = e;
//        }
//        Node r,l;
//        int begin,end,val;
//    }
//    void build(Node root,int[] nums){
//        if (root.begin == root.end) {
//            root.val = nums[root.begin];
//            return;
//        }
//        int mid = (root.begin + root.end)/2;
//        root.l = new Node(root.begin ,mid);
//        root.r = new Node(mid+1 ,root.end);
//        build(root.l,nums);
//        build(root.r,nums);
//        root.val = root.l.val + root.r.val;//push up
//    }
//    void setVal(int index, int val,Node root) {
//        if (index>root.end||index<root.begin)return;
//        if (root.begin == root.end) {
//            if (root.begin == index) {
//                root.val = val;
//            }
//            return;
//        }
//        setVal(index,val,root.r);
//        setVal(index,val,root.l);
//        root.val = root.l.val + root.r.val;
//    }
//    int getSum(int left, int right, Node root){
//        if (left>root.end||right<root.begin)return 0;
//        if (root.begin>=left && root.end<=right)return root.val;
//        return getSum(left,right,root.r)+getSum(left,right,root.l);
//    }
//    Node root;
//    public NumArray(int[] nums) {
//        root = new Node(0,nums.length-1);
//        build(root,nums);
//    }
//
//    public void update(int index, int val) {
//        setVal(index,val,root);
//    }
//
//    public int sumRange(int left, int right) {
//        return getSum(left,right,root);
//    }
//}
//class Solution {
//    public String discountPrices(String sentence, int discount) {
//        String[] strings = sentence.split(" ");
//        StringBuilder ret = new StringBuilder();
//        for (String s : strings) {
//            if (s.length() > 1 && s.charAt(0) == '$') {
//                boolean bol = false;
//                StringBuilder sb = new StringBuilder();
//                for (int i = 1; i < s.length(); i++) {
//                    sb.append(s.charAt(i));
//                    if (s.charAt(i) > '9' || s.charAt(i) < '0') {
//                        bol = true;
//                        break;
//                    }
//                }
//                if (bol) {
//                    ret.append(s);
//                }else{
//                    double d = Double.parseDouble(sb.toString());
//                    d -= (d * discount) / 100;
//                    ret.append("$").append(String.format("%.2f", d));
//                }
//            }else {
//                ret.append(s);
//            }
//            ret.append(" ");
//        }
//        return ret.toString().trim();
//    }
//}
