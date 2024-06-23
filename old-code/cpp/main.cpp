#include <bits/stdc++.h>
#define IF_SWITCH 0
using namespace std;
extern int a;
unordered_set<int> *tu;
int main() {
#if IF_SWITCH
    a =(1,2,3);
    a=(int)6.2;
    tu = new unordered_set<int>[5];
    tu[1].insert(10);
    tu[1].insert(1);
    for (int i:tu[1] ){
        cout<<i<<endl;
    }
#endif
//    for (int i = 0; i < 10; ++i) {
//        vector<int> vec;
//        vec.push_back(i);
//        if (i==9){
//            for (const auto &item: vec){
//                cout<<item<<endl;
//            }
//        }
//
//    }
//    function func= [](int x,int y)->int{
//        return x+y;
//    };
//    cout<<func(1,3)<<endl;
//    delete tu;
//    free(tu);
//    ofstream outfile;
//    outfile.open("test.txt");
//    outfile<<"this is test"<<endl;
//    outfile.close();
//    ifstream infile;
//    infile.open("test.txt");
//    string st;
//    infile>>st;
//    cout<<"string:"<<st<<endl;
//    infile.close();
//cout<<__LINE__<<" "<<__DATE__<<" "<<__TIME__<<" "<<__FILE__<<endl;
//    unordered_map<int,int> map;
//    cout<<map.size()<<endl;
//    cout<<map[0]++<<endl;
//    cout<<map.size()<<endl;
//    cout<<map[0]<<endl;
//    int abc;
//    scanf("%d",&abc);
//    printf("%d",abc+111);
//class cmp{
//    public:
//        bool operator ()(int x,int y){
//            return x>y;
//        }
//    };
//    priority_queue<int,vector<int>,cmp> que;
//    for (int i = 0; i < 10; ++i) {
//        que.push(i);
//    }
//    while (!que.empty()){
//        cout<<que.top()<<" ";
//        que.pop();
//    }
#if IF_SWITCH
    auto b = 1;
    cout << "Hello, World!" << endl;
    cout<<::a;
    vector<int> v;
    v.push_back(1);

    for (int i = 0; i < 11; ++i) {
        //printf("%d\n",i);
        v.push_back(i);
    }

    for (int item: v){
        item=1;
        cout<<item<<endl;
    }
    for (int item: v){
        cout<<item<<endl;
    }
#endif
//    class Solution {
//    public:
//        int maxProfit(vector<int>& prices) {
//            return dfs(0,prices);
//        }
//        int dfs(int idx,vector<int>& prices){
//            int sz = prices.size();
//            if (idx>=sz||idx<=-sz)return 0;
//            int rtu = 0;
//            if (idx<0){
//                idx=-idx;
//                rtu = max(dfs(idx+2,prices)+prices[idx], dfs(-(idx+1),prices));
//                cout<<1<<endl;
//            }else{
//                rtu = max(dfs(idx+1,prices), dfs(-(idx+1),prices)-prices[idx]);
//                cout<<2<<endl;
//            }
//            return rtu;
//        }
//    };
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(0);
//    v.push_back(2);
//    cout<<Solution().maxProfit(v);
//    cout<<"hello world"<<endl;
//    int b=4;
//    int &&a = move(b);
//    cout<<b<<endl;
//map<int ,int> mp;
//    ++mp[23];
//    ++mp[23];
//    cout<<mp.size()<<endl;
//    stringstream ss("sdad");
//    ss<<"asddas"<<"a111";
//    string s;
//    ss>>s;
//    ss.clear();
//    ss<<"ss"<<"bb";
//    ss>>s;
//    cout<<s;
//string s = "13345567";
//    int a = stoi(s+"12");
//    cout<<a<<endl;
//auto func1 = [](int x,int y,int z)->void{
//        cout<<"x="<<x<<" y="<<y<<" z="<<z;
//    };
//    auto func2 = bind(func1,placeholders::_2,2,placeholders::_1);
//    func2(0,5);
//string s = "hello world";
//    vector<string> v;
//    v.push_back(move(s));
//    cout<<"str:"<<s<<endl;
//string s = "dad"s;
//tuple<float,string,long> tpl = make_tuple(1.4f,"sda",232l);
//    cout<<get<long>(tpl)<<endl;
//    cout<<get<string>(tpl)<<endl;
    return 0;
}
//class Solution {
//public:
//    int minNumber(vector<int>& nums1, vector<int>& nums2) {
//        set<int> s1;
//        for (int item: nums1)
//        {
//            s1.insert(item);
//        }
//        int mi = 1e9+7;
//        set<int> s2;
//        for (vector<int>::iterator it=nums2.begin();it!=nums2.end();it++)
//        {
//            if(s1.find(*it)!=s1.end()){
//                mi = min(mi,*it);
//            }
//            s2.insert(*it);
//        }
//        if (mi==1e9+7)
//        {
//            int ma=*(s1.begin());
//            int mi=*(s2.begin());
//            if (mi>ma)
//            {
//                int tmp = mi;
//                mi=ma;
//                ma=tmp;
//            }
//            return 10*mi+ma;
//
//        }
//        return mi;
//
//
//    }
//};
//#define N 101
//class Solution {
//public:
//    unordered_set<int> *tu;
//    int nn;
//    int arr[N][N];
//    int jy[N][N];
//    int dst1;
//    int k1;
//    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//        //build
//        nn = n;
//        dst1=dst;
//        k1=k;
//        tu = new unordered_set<int>[n];
//        for(vector<vector<int>>::iterator vi = flights.begin();vi!=flights.end();vi++){
//            tu[(*vi)[0]].insert((*vi)[1]);
//            arr[(*vi)[0]][(*vi)[1]]=(*vi)[2];
//
//        }
//        int d=dfs(src,0);
//        if(d==1<<25) d=-1;
//        return d;
//
//    }
//    int dfs(int bg,int deep)
//    {
//        if(jy[bg][deep]!=0) return jy[bg][deep];
//        if (bg == dst1)return 0;
//        if (deep == k1+1)return 1<<25;
//
//        int mi=1<<25;
//        for (int item: tu[bg])
//        {
//            mi=min(arr[bg][item]+ dfs(item,deep+1),mi) ;
//
//        }
//        jy[bg][deep]=mi;
//        return mi;
//    }
//};
///////////////////////////////////////////////////
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    int dfs(TreeNode*);
//    vector<TreeNode*> *deep;
//    unordered_set<int> set;
//    unordered_map<int,unordered_set<int> > map;
//    TreeNode* lcaDeepestLeaves(TreeNode* root) {
//
//        vector<TreeNode*> *vi=new vector<TreeNode*>;
//        (*vi).push_back(root);
//        while (!(*vi).empty())
//        {
//            vector<TreeNode*> *tmp = new vector<TreeNode*>;
//            for (TreeNode* n : (*vi)) {
//                if (n->left!=NULL){
//                    (*tmp).push_back(n->left);
//                }
//                if (n->right!=NULL){
//                    (*tmp).push_back(n->right);
//                }
//            }
//            deep=vi;
//            vi=tmp;
//            for (const auto &item: (*deep)){
//                set.insert(item->val);
//            }
//        }
//        return root;
//
//    }
//
//};
//unordered_set<int> Solution::dfs(TreeNode* root){
//    if (root == NULL)return -1;
//    if(set.find(root->val)!=set.end())
//    {
//        return root->val;
//    }
//    int r=dfs(root->right);
//    if (r!=-1){
//        map[/*世上无难事，只要肯放弃*/];
//    }
//}
//class Solution {
//public:
//    unordered_map<int,unordered_set<int> > map;
//    unordered_set<int> set;
//    unordered_set<int> *quc;
//    vector<int> nul;
//    vector<int> rtu;
//    bool dfs(int i){
//        if (set.find(i)==set.end()){
//            if(!map[i].empty()){
//                if(quc->find(i)!=quc->end())return false;
//                quc->insert(i);
//                for (const auto &item: map[i]){
//                    if (!dfs(item))return false;
//                }
//            }
//            rtu.push_back(i);
//            set.insert(i);
//        }
//        return true;
//    }
//    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//        for (const auto &item: prerequisites){
//            map[item[0]].insert(item[1]);
//        }
//        for (int i = 0; i < numCourses; ++i){
//            delete quc;
//            quc = new unordered_set<int>();
//            if(!dfs(i))return  nul;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_set<int> set;
//    int numberOfPoints(vector<vector<int>>& nums) {
//        for (const auto &item: nums){
//            for (int i = item[0]; i <= item[1]; ++i){
//                set.insert(i);
//            }
//        }
//        return set.size();
//    }
//};
//class Solution {
//public:
//    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
//        int _x = abs(1l*fx-sx);
//        int _y = abs(1l*fy-sy);
//        int mx = max(_x,_y);
//        if(mx==0) return t!=1;
//        return mx<=t;
//    }
//};
//class Solution {
//public:
//    unordered_map<int,unordered_set<int>> map;
//    unordered_map<int,unordered_set<int>*> pre;
//    unordered_set<int>*dfs(int i){
//        if(pre[i]!=NULL)return pre[i];
//        unordered_set<int>* tmp = new unordered_set<int>;
//        if(map[i].size()!=0){
//            for (const auto &item: map[i]){
//
//                tmp->insert(item);
//                unordered_set<int>*t= dfs(item);
//                tmp->insert(t->begin(), t->end());
//            }
//            for (const auto &item: *tmp){
//                cout<<i<<"     "<<item<<endl;
//            }
//        }
//        pre[i]=tmp;
//        return tmp;
//    }
//    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
//        for (int i = 0; i < 101; ++i) {
//            pre[i]=NULL;
//        }
//        for (const auto &item: prerequisites){
//            map[item[1]].insert(item[0]);
//        }
//        for (int i = 0; i < numCourses; ++i){
//            dfs(i);
//        }
//        vector<bool> rtu;
//        for (const auto &item: queries){
//            rtu.push_back(pre[item[1]]->find(item[0])!=pre[item[1]]->end());
//        }
//        cout<<pre[1]->size();
//        return rtu;
//    }
//
//
//};
//class Solution {
//public:
//    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
//        int ints[8][8];
//        for (int i = 0; i < 8; ++i) {
//            for (int j = 0; j < 8; ++j) {
//                ints[i][j]=0;
//            }
//        }
//        vector<vector<int>> rtu;
//        for (const auto &item: queens){
//            ints[item.at(0)][item.at(1)]=1;
//        }
//        int i=king[0],j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            j++;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            j--;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i++;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i--;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i--;
//            j--;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i--;
//            j++;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i++;
//            j--;
//        }
//        i=king[0];
//        j=king[1];
//        while (i<8&&i>=0&&j<8&&j>=0){
//            if(ints[i][j]==1){
//                vector<int> tmp;
//                tmp.push_back(i);
//                tmp.push_back(j);
//                rtu.push_back(tmp);
//                break;
//            }
//            i++;
//            j++;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int giveGem(vector<int>& gem, vector<vector<int>>& operations) {
//        for (const auto &item: operations){
//            int tmp=gem[item[0]]/2;
//            gem[item[0]]-=tmp;
//            gem[item[1]]+=tmp;
//        }
//        int mx=-1,mi=1<<25;
//        for (const auto &item: gem){
//            if(item>mx){
//                mx=item;
//            }
//            if(item<mi){
//                mi=item;
//            }
//
//        }
//        return mx-mi;
//    }
//};
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        if(nums.size()==1)return nums[0];
//        nums[1]= max(nums[0],nums[1]);
//        for (int i = 2; i < nums.size(); ++i){
//            nums[i]= max(nums[i]+nums[i-2],nums[i-1]);
//        }
//        return nums[nums.size()-1];
//    }
//};
//class Solution {
//public:
//    int minimumRightShifts(vector<int>& nums) {
//        int n = nums.size();
//        for (int bg = n; bg > 0; --bg){
//            bool bol=true;
//            for (int i = bg; i%n !=(bg-1) ; ++i) {
//                if (nums[i%n]>nums[(i+1)%n]){
//                    bol= false;
//                    break;
//                }
//            }
//            if(bol) return n-bg;
//        }
//        return -1;
//
//    }
//};
//class Solution {
//public:
//    int countPairs(vector<vector<int>>& coordinates, int k) {
//        int rtu=0;
//        for (int i = 0; i < coordinates.size()-1; ++i){
//            for (int j = (i + 1); j < coordinates.size(); ++j){
//                if ((coordinates[i][0]^coordinates[j][0])+(coordinates[i][1]^coordinates[j][1])==k){
//                    rtu++;
//                }
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        if(nums.size()==1)return nums[0];
//        vector<int> arr1,arr2;
//        for (int i = 0; i < nums.size(); ++i){
//            if (i!=0)arr1.push_back(nums[i]);
//            if (i!=nums.size()-1)arr2.push_back(nums[i]);
//        }
//        return max(getMaxMoney(arr1), getMaxMoney(arr2));
//    }
//    int getMaxMoney(vector<int>& nums){
//        if(nums.size()==1)return nums[0];
//        nums[1]= max(nums[0],nums[1]);
//        for (int i = 2; i < nums.size(); ++i){
//            nums[i]= max(nums[i]+nums[i-2],nums[i-1]);
//        }
//        return nums[nums.size()-1];
//    }
//};
//class Solution {
//public:
//    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
//        int rtu=0;
//        for (int i = 0; i < nums.size(); ++i){
//            if(getSumI(i)==k){
//                rtu+=nums[i];
//            }
//        }
//        return rtu;
//    }
//    int getSumI(int num){
//        int rtu=0;
//        while (num!=0){
//            rtu+=num%2;
//            num/=2;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int countWays(vector<int>& nums) {
//        std::sort(nums.begin(), nums.end());
//        int rtu=0;
//        for (int i = 1; i < nums.size(); ++i){
//            if (nums[i]>i&&i>nums[i-1]){
//                rtu++;
//            }
//        }
//        if(nums[0]>0)rtu++;
//        if (nums[nums.size()-1]<nums.size())rtu++;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long getMonyByStock(int num,vector<int>& vec,vector<int>& stk,vector<int>& cost){
//        long rtu=0;
//        int n= vec.size();
//        for (int i = 0; i < n; ++i){
//            if(1l*vec[i]*num>1l*stk[i]){
//                rtu+=(1l*vec[i]*num-stk[i])*cost[i];
//            }
//        }
//        return rtu;
//    }
//    int maxNumberOfAlloys(int n, int kk, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
//        int ma=-1;
//        for (vector<int> &item: composition){
//            vector<int> tmp = stock;
//            int mony = budget;
//            int t=0;
//            int r=5e8,l=0;
//            while (r>l){
//                int mid = (r+l+1)/2;
//                if (getMonyByStock(mid,item,tmp,cost)>(1l*mony)){
//                    r=mid-1;
//                }else{
//                    l=mid;
//                }
//            }
//
//            ma=max(ma,l);
//        }
//        return ma;
//    }
//};
//class Solution {
//public:
//    int getIndexByMin(vector<int>& vec,int num){
//        int l=0,r=vec.size()-1;
//        while (r>l){
//            int mid = (r+l)/2;
//            if (vec[mid]>=num){
//                r=mid;
//            } else{
//                l=mid+1;
//            }
//        }
//        return l;
//    }
//    int lengthOfLIS(vector<int>& nums) {
//        vector<int> rtu;
//        rtu.push_back(nums[0]);
//        for (int i = 1; i < nums.size(); ++i){
//            if (rtu[rtu.size() - 1] < nums[i]){
//                rtu.push_back(nums[i]);
//            }else{
//                rtu[getIndexByMin(rtu,nums[i])]=nums[i];
//            }
//        }
//        return rtu.size();
//    }
//
//};
//class Solution {
//public:
//    int minLengthAfterRemovals(vector<int>& nums) {
//        unordered_map<int,int> map;
//        int ma=-1;
//        for (const auto &item: nums){
//            if(map.find(item)==map.end())map[item]=0;
//            map[item]++;
//            ma=max(map[item],ma);
//        }
//        if (ma <= (nums.size()/2))return nums.size()%2;
//        return ma-(nums.size()-ma);
//    }
//};
//class Solution {
//public:
//    int minCount(vector<int>& coins) {
//        int rtu = 0;
//        for (const auto &item: coins){
//            rtu+=item/2;
//            rtu+=item%2;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int distMoney(int money, int children) {
//        if (children>money)return -1;
//        if (money>children*8)return children-1;
//        if((money-children)/7==children-1)
//        {
//            if((money-children)%7==3)return children-2;
//            return children-1;
//        }
//        return (money-children)/7;
//    }
//};
//class LockingTree {
//public:
//    unordered_map<int,unordered_set<int> > tree;
//    unordered_map<int,int> lck;
//    vector<int> parent;
//    bool get_lock_by_parent(int num){
//        while (num!=-1){
//            if(lck.find(num)!=lck.end()){
//                return false;
//            }
//            num=parent[num];
//        }
//        return true;
//    }
//    bool get_lock_by_child(int num){
//        list<int> lit;
//        lit.push_back(num);
//        while (!lit.empty()){
//            int t = lit.front();
//            if(lck.find(t)!=lck.end()){
//                return true;
//            }
//            if(tree.find(t)!=tree.end()){
//                for (const auto &item: tree[t]){
//                    lit.push_back(item);
//                }
//            }
//            lit.pop_front();
//        }
//        return false;
//    }
//    void remove_lock_from_child(int num){
//        list<int> lit;
//        lit.push_back(num);
//        while (!lit.empty()){
//            int t = lit.front();
//            if(lck.find(t)!=lck.end()){
//                lck.erase(t);
//            }
//            if(tree.find(t)!=tree.end()){
//                for (const auto &item: tree[t]){
//                    lit.push_back(item);
//                }
//            }
//            lit.pop_front();
//        }
//    }
//
//    LockingTree(vector<int>& parent) {
//        this->parent=parent;
//        for (int i = 0; i < parent.size(); ++i){
//            tree[parent[i]].insert(i);
//        }
//    }
//
//    bool lock(int num, int user) {
//        if(lck.find(num)!=lck.end())return false;
//        lck[num]=user;
//        return true;
//    }
//
//    bool unlock(int num, int user) {
//        if(lck.find(num)!=lck.end()){
//            if (lck[num]==user){
//                lck.erase(num);
//                return true;
//            }
//        }
//        return false;
//    }
//
//    bool upgrade(int num, int user) {
//        if(lck.find(num)!=lck.end())return false;
//        if(get_lock_by_parent(num)&&get_lock_by_child(num)){
//            remove_lock_from_child(num);
//        } else return false;
//        return lock(num,user);
//
//    }
//};
//class LRUCache {
//private:
//    struct node{
//        node* prior;
//        node* next;
//        int key;
//        int val;
//    };
//    node *head;
//    node *floor;
//    unordered_map<int,node> mp;
//    int max_size;
//public:
//    LRUCache(int capacity) {
//        max_size=capacity;
//        head = new node;
//        floor = new node;
//        head->next=floor;
//        floor->prior=head;
//    }
//
//    int get(int key) {
//        if(mp.find(key)==mp.end()) return -1;
//        node &tmp = mp[key];
//        //抽离
//        tmp.prior->next=tmp.next;
//        tmp.next->prior=tmp.prior;
//        //接头
//        tmp.next=head->next;
//        tmp.prior=head;
//        head->next->prior=&tmp;
//        head->next=&tmp;
//        return tmp.val;
//    }
//
//    void put(int key, int value) {
//        if(mp.find(key)!=mp.end()){
//            mp[key].val=value;
//            get(key);
//            return;
//        }
//        node *new_node = new node;
//        new_node->key=key;
//        new_node->val=value;
//        new_node->next=head->next;
//        new_node->prior=head;
//        head->next->prior=new_node;
//        head->next=new_node;
//        mp[key] = *new_node;
//
//        node *n=head->next;
//        while (n!=floor){
//            cout<<n->val<<" ";
//            n=n->next;
//        }
//        cout<<endl;
//    }
//};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//class Solution {
//public:
//    string maximumOddBinaryNumber(string s) {
//        int sum1=0;
//        for (int i = 0; i < s.size(); ++i){
//            if(s[i]=='1'){
//                ++sum1;
//            }
//        }
//        for (int i = 0; i < s.size(); ++i){
//            if(i<sum1-1){
//                s[i]='1';
//            }else{
//                s[i]='0';
//            }
//        }
//        s[s.size()-1]='1';
//        return s;
//    }
//};
//class Solution {
//public:
//    long long maximumSumOfHeights(vector<int>& maxHeights) {
//        vector<int> tmpVec = maxHeights;
//        long long rtu=-1;
//        for (int i = 0; i < maxHeights.size(); ++i){
//            tmpVec[i]=maxHeights[i];
//            long long tpr=tmpVec[i];
//            int left = i;
//            while (--left!=-1){
//                tmpVec[left]= min(tmpVec[left+1],maxHeights[left]);
//                tpr+=tmpVec[left];
//            }
//            int right = i;
//            while (++right!=tmpVec.size()){
//                tmpVec[right]= min(tmpVec[right-1],maxHeights[right]);
//                tpr+=tmpVec[right];
//            }
//            rtu = max(rtu,tpr);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long long maximumSumOfHeights(vector<int>& maxHeights) {
//        vector<long long > l;
//        vector<long long > r;
//        l.resize(maxHeights.size());
//        r.resize(maxHeights.size());
//        map<int,int> lmap;//<height,index>
//        lmap[maxHeights[0]] = 0;
//        l[0]=maxHeights[0];
//        map<int,int> rmap;
//        rmap[maxHeights[maxHeights.size()-1]]=maxHeights.size()-1;
//        r[maxHeights.size()-1] = maxHeights[maxHeights.size()-1];
//        for (int i = 1; i < maxHeights.size(); ++i){
//            map<int,int>::iterator it = lmap.upper_bound(maxHeights[i]);
//            if(it==lmap.begin()) {
//                l[i] =1l* maxHeights[i] * (i + 1);
//
//            }else if (it==lmap.end()){
//                l[i]=maxHeights[i]+l[i-1];
//            }else{
//                if(maxHeights[i]>=maxHeights[i-1]){
//                    l[i]=maxHeights[i]+l[i-1];
//                }else{
//                    it--;
//                    l[i] = l[it->second]+(i-(it->second))*maxHeights[i];
//                }
//
//            }
//            lmap[maxHeights[i]] = i;
//        }
//        for (int i = maxHeights.size()-2; i >=0 ; --i){
//            map<int,int>::iterator it = rmap.lower_bound(maxHeights[i]);
//            if(it==rmap.begin()) {
//                r[i] = maxHeights[i] * (maxHeights.size()-i);
//
//            }else if (it==rmap.end()){
//                r[i]=maxHeights[i]+r[i+1];
//            }else{
//                if(maxHeights[i]>=maxHeights[i+1]){
//                    r[i]=maxHeights[i]+r[i+1];
//                }else{
//                    it--;
//                    r[i] = r[it->second]+((it->second)-i)*maxHeights[i];
//                }
//
//            }
//            rmap[maxHeights[i]] = i;
//        }
//        long long rtu = -1;
//        cout<<"open"<<endl;
//        for (const auto &item: r)cout<<item<<" ";
//        cout<<endl;
//        for (const auto &item: l)cout<<item<<" ";
//        cout<<endl;
//        for (int i = 0; i < maxHeights.size(); ++i){
//            rtu= max(r[i]+l[i]-maxHeights[i],rtu);
//        }
//        return rtu;
//    }
//
//};
//class Solution {
//public:
//    long long maximumSumOfHeights(vector<int>& maxHeights) {
//        vector<long long > l_r(maxHeights.size());
//        vector<long long > r_l(maxHeights.size());
//        list<pair<int,int>> lt;//pair<height,index>
//        list<pair<int,int>> rt;//开两个就不用消耗clear()的时间
//        lt.push_front(make_pair(maxHeights[0],0));
//        l_r[0]=maxHeights[0];
//        for (int i = 1; i < maxHeights.size(); ++i){
//            while (!lt.empty()&&maxHeights[i]<lt.front().first)lt.pop_front();
//            if (lt.empty())
//                l_r[i]=1l*maxHeights[i]*(i+1);
//            else
//                l_r[i]=l_r[lt.front().second]+1l*(i-lt.front().second)*maxHeights[i];
//            lt.push_front(make_pair(maxHeights[i],i));
//        }
//        rt.push_front(make_pair(maxHeights[maxHeights.size()-1],maxHeights.size()-1));
//        r_l[maxHeights.size()-1]=maxHeights[maxHeights.size()-1];
//        for (int i = maxHeights.size()-2; i >= 0 ; --i){
//            while (!rt.empty()&&maxHeights[i]<rt.front().first)rt.pop_front();
//            if (rt.empty())
//                r_l[i]=1l*maxHeights[i]*(maxHeights.size()-i);
//            else
//                r_l[i]=r_l[rt.front().second]+1l*(rt.front().second-i)*maxHeights[i];
//
//            rt.push_front(make_pair(maxHeights[i],i));
//        }
//        long long rtu = -1;
//        for (int i = 0; i < maxHeights.size(); ++i){
//            rtu= max(r_l[i]+l_r[i]-maxHeights[i],rtu);
//        }
//        return rtu;
//    }
//};
//class LRUCache {
//private:
//    struct Node{
//        Node *pre;
//        Node *nxt;
//        int key;
//        int val;
//    };
//    Node *head;
//    Node *floor;
//    unordered_map<int,Node*> mp;
//    int max_size;
//public:
//    LRUCache(int capacity):max_size(capacity),head(new Node),floor(new Node){
//        head->nxt = floor;
//        floor->pre = head;
//    }
//
//    int get(int key) {
//        if(mp.find(key)==mp.end())return -1;
//        Node *tmp = mp[key];
//        tmp->pre->nxt=tmp->nxt;
//        tmp->nxt->pre=tmp->pre;
//        tmp->pre=head;
//        tmp->nxt=head->nxt;
//        head->nxt->pre=tmp;
//        head->nxt=tmp;
//        return tmp->val;
//    }
//
//    void put(int key, int value) {
//        if(mp.find(key)!=mp.end()){
//            mp[key]->val=value;
//            get(key);
//            return;
//        }
//        Node *node = new Node;
//        node->key=key;
//        node->val=value;
//        node->pre=head;
//        node->nxt=head->nxt;
//        head->nxt->pre=node;
//        head->nxt=node;
//        mp[key]=node;
//        if(mp.size()>max_size){
//            Node *tmp=floor->pre;
//            tmp->pre->nxt=tmp->nxt;
//            tmp->nxt->pre=tmp->pre;
//            mp.erase(tmp->key);
//            delete tmp;
//        }
//    }
//};
//class Solution {
//public:
//    int passThePillow(int n, int time) {
//        n--;
//        return ((time/n)%2?n-time%n:time%n)+1;
//    }
//};
//class LFUCache {
//private:
//    struct Node{
//        Node *prev = this;
//        Node *next = this;
//        int key;
//        int val;
//        int freq = 1;
//    };
//    int min_freq;
//    int capacity;
//    unordered_map<int,Node*> key_to_Node;
//    unordered_map<int,Node*> freq_to_head;
//    void removeNode(Node *node){
//        node->prev->next=node->next;
//        node->next->prev=node->prev;
//    }
//    void addNode(Node *node){
//        if(freq_to_head.find(node->freq)==freq_to_head.end()) freq_to_head[node->freq]=new Node;
//        Node* tmp = freq_to_head[node->freq];
//        node->prev=tmp;
//        node->next=tmp->next;
//        tmp->next->prev=node;
//        tmp->next=node;
//    }
//    bool removeFreqIfNull(int f){
//        Node* tmp = freq_to_head[f];
//        if(tmp->next==tmp){
//            freq_to_head.erase(f);
//            delete tmp;
//            return true;
//        }
//        return false;
//    }
//public:
//    LFUCache(int capacity) {
//        this->capacity = capacity;
//        min_freq = 0;
//    }
//
//    int get(int key) {
//        if(key_to_Node.find(key)==key_to_Node.end())return -1;
//        Node* tmp = key_to_Node[key];
//        removeNode(tmp);
//        if (removeFreqIfNull(tmp->freq))if(min_freq==tmp->freq)++min_freq;
//        ++tmp->freq;
//        addNode(tmp);
//        return tmp->val;
//    }
//
//    void put(int key, int value) {
//        if(key_to_Node.find(key)!=key_to_Node.end()){
//            Node* tmp = key_to_Node[key];
//            tmp->val=value;
//            removeNode(tmp);
//            if (removeFreqIfNull(tmp->freq))if(min_freq==tmp->freq)++min_freq;
//            ++tmp->freq;
//            addNode(tmp);
//            return;
//        }
//        if (!capacity){
//            Node* tmp = freq_to_head[min_freq];
//            tmp = tmp->prev;
//            removeNode(tmp);
//            removeFreqIfNull(tmp->freq);
//            key_to_Node.erase(tmp->key);
//            delete tmp;
//            ++capacity;
//        }
//        Node *node = new Node;
//        node->key=key;
//        node->val=value;
//        key_to_Node[key] = node;
//        addNode(node);
//        min_freq = 1;
//        --capacity;
//    }
//};
//class Solution {
//public:
//    int rob(TreeNode* root) {
//        if(!root) return 0;
//        int rtu = root->val;
//        int l=0,r=0;
//        if(root->left){
//            l = rob(root->left);
//            rtu+=rob(root->left->left)+rob(root->left->right);
//        }
//        if(root->right){
//            r = rob(root->right);
//            rtu+=rob(root->right->left)+rob(root->right->right);
//        }
//        root->val = max(rtu,l+r);
//        root->right = nullptr;
//        root->left = nullptr;
//        return root->val;
//    }
//};
//class Solution {
//public:
//    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
//        vector<int> rtu;
//        unordered_map<int,vector<int>*> mp;
//        for (auto &item: restaurants){
//            if (veganFriendly)if (!item[2])continue;
//            if (item[3]>maxPrice)continue;
//            if (item[4]>maxDistance)continue;
//            rtu.push_back(item[0]);
//            mp[item[0]] = &item;
//        }
//        std::sort(rtu.begin(), rtu.end(),[&](int x,int y){
//            if((*mp[x])[1]==(*mp[y])[1]){
//                return x>y;
//            }
//            return (*mp[x])[1]>(*mp[y])[1];
//        });
//        return rtu;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    unordered_map<TreeNode*,int> cache;
//    int rob(TreeNode* root) {
//        if (root == nullptr)return 0;
//        if(cache.find(root)!=cache.end())return cache[root];
//        int rtu = rob(root->left) + rob(root->right);
//        int tmp = root->val;
//        if (root->left != nullptr){
//            tmp+=rob(root->left->right);
//            tmp+=rob(root->left->left);
//        }
//        if (root->right != nullptr){
//            tmp+=rob(root->right->right);
//            tmp+=rob(root->right->left);
//        }
//        rtu = max(rtu,tmp);
//        cache[root] = rtu;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
//        vector<int> starts;
//        vector<int> ends;
//        map<int,int> mp;
//        for (const auto &item: flowers){
//            starts.push_back(item[0]);
//            ends.push_back(item[1]);
//        }
//        std::sort(starts.begin(), starts.end());
//        std::sort(ends.begin(), ends.end());
//        for (const auto &item: people) mp[item];
//        map<int,int>::iterator it = mp.begin();
//        int sIdx = 0;
//        int eIdx = 0;
//        for (;it!=mp.end();++it) {
//            int tmp = it->first;
//            while (sIdx < flowers.size() && tmp >= starts[sIdx]) ++sIdx;
//            while (eIdx < flowers.size() && tmp > ends[eIdx]) ++eIdx;
//            it->second = sIdx - eIdx;
//        }
//        for (int &item: people) item = mp[item];
//        return people;
//    }
//};
//class Solution {
//public:
//    int getRoomsizeByMoney(vector<int>& nums,int money){
//        int rtu = 0;
//        for (int i = 0; i < nums.size(); ++i){
//            if(nums[i] <= money){
//                ++rtu;
//                ++i;
//            }
//        }
//        return rtu;
//    }
//    int minCapability(vector<int>& nums, int k) {
//        int right = -1,left = 1e9+7;
//        for (const auto &item: nums){
//            right = max(right,item);
//            left = min(left,item);
//        }
//        while (right>left){
//            int mid = (right+left)/2;
//            if (getRoomsizeByMoney(nums,mid) >= k){
//                right = mid;
//            }else{
//                left = mid + 1;
//            }
//        }
//        return left;
//    }
//};
//class Solution {
//public:
//    int myAtoi(string s) {
//        int t = 1;
//        bool bol = false;
//        vector<int> vec;
//        for (int i = 0; i < s.size(); ++i){
//            if(s[i]=='-'){
//                if (bol)break;
//                t=-t;
//                bol = true;
//                continue;
//
//            }
//            if(s[i]=='+'){
//                if (bol)break;
//                bol = true;
//                continue;
//            }
//            if(s[i]>='0'&&s[i]<='9'){
//                vec.push_back(s[i]-48);
//                bol = true;
//            }else if(bol){
//                break;
//            }else if(s[i]!=' '){
//                break;
//            }
//        }
//        int rtu = 0;
//        for (int i = 0; i < vec.size(); ++i){
//            if ((1l+rtu+vec[i])*t>INT_MAX)return INT_MAX;
//            if ((1l+rtu+vec[i])*t<INT_MIN)return INT_MIN;
//            rtu+=vec[i];
//            if(1l*rtu*10*t>INT_MAX){
//                if (i!=vec.size()-1) {
//                    return INT_MAX;
//                }
//            }
//            if(1l*rtu*10*t<INT_MIN){
//                if (i!=vec.size()-1) {
//                    return INT_MIN;
//                }
//            }
//            if (i!=vec.size()-1) rtu*=10;
//
//        }
//        return rtu*t;
//    }
//};
//class Solution {
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        if (!n)return true;
//        if (flowerbed.size()==1)return !flowerbed[0];
//        int sum = 0;
//        if(!flowerbed[0]&&!flowerbed[1]){
//            ++sum;
//            flowerbed[0]=1;
//        }
//        if(!flowerbed[flowerbed.size()-1]&&!flowerbed[flowerbed.size()-2]){
//            ++sum;
//            flowerbed[flowerbed.size()-1]=1;
//        }
//
//        for (int i = 1; i < flowerbed.size()-1; ++i){
//            if (!flowerbed[i-1]&&!flowerbed[i+1]&&!flowerbed[i]){
//                ++sum;
//                ++i;
//            }
//        }
//        return sum>=n;
//    }
//};
//class Solution {
//public:
//    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
//        vector<int> tmp(plantTime.size());
//        iota(tmp.begin(),tmp.end(),0);
//        sort(tmp.begin(),tmp.end(),[&growTime](int x,int y){
//            return growTime[x]>growTime[y];
//        });
//        int open=plantTime[tmp[0]],end=plantTime[tmp[0]]+growTime[tmp[0]];
//        for (int i = 1; i < plantTime.size(); ++i){
//            end = max(end,open+plantTime[tmp[i]]+growTime[tmp[i]]);
//            open+=plantTime[tmp[i]];
//        }
//        return end;
//    }
//};
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int rtu = -1,mn = INT_MAX;
//        for (const auto &item: prices){
//            mn = min(mn,item);
//            rtu = max(rtu,item-mn);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long long maximumTripletValue(vector<int>& nums) {
//        long long rtu = 0;
//        vector<int> vec(nums.size());
//        int mx=nums[0],cha=0;
//        for (int i = 1; i < nums.size(); ++i){
//            cha=max(mx-nums[i],cha);
//            mx= max(mx,nums[i]);
//            vec[i]=cha;
//        }
//        for (int i = 2; i < vec.size(); ++i){
//            rtu= max(rtu,1ll*vec[i-1]*nums[i]);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    class cmp{
//    public:
//        bool operator ()(int x,int y){
//            return x<y;
//        }
//    };
//    int minSizeSubarray(vector<int>& nums, int target) {
//        unordered_set<int> st;
//        priority_queue<int,vector<int>,cmp> que;
//        for (const auto &item: nums){
//            if(st.find(item)==st.end()){
//                que.push(item);
//                st.insert(item);
//            }
//        }
//        int rtu=0;
//        while (target){
//            if (que.empty())return -1;
//            if(que.top()<=target){
//                rtu+=target/que.top();
//                target=target%que.top();
//                que.pop();
//            } else que.pop();
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int minSizeSubarray(vector<int>& nums, int target) {
//        long long sm = 0;
//        for (const auto &item: nums)sm+=item;
//        int n = (target/sm)*nums.size();
//        target%=sm;
//        int ed = nums.size()<<1,wid = 0,begin = 0,end = 0,rtu = INT_MAX;
//        while (begin<ed){
//            wid+=nums[begin%nums.size()];
//            ++begin;
//            while (wid>target){
//                wid-=nums[end%nums.size()];
//                ++end;
//            }
//            if (wid==target){
//                rtu = min(rtu,begin-end);
//            }
//        }
//        return rtu==INT_MAX?-1:rtu+n;
//    }
//};
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int k = 2;
//        vector<int> vec(k*2);
//        vec[0]=-prices[0];
//        vec[1]=0;
//        vec[2]=-prices[0];
//        vec[3]=0;
//        for (int i = 1; i < prices.size(); ++i){
//            vec[0] = max(vec[0],-prices[i]);
//            vec[1] = max(vec[1],vec[0]+prices[i]);
//            vec[2] = max(vec[2],vec[1]-prices[i]);
//            vec[3] = max(vec[3],vec[2]+prices[i]);
//        }
//        return vec[3];
//    }
//};
//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        vector<int> vec(k*2);
//        for (int i = 0; i < vec.size(); ++i){
//            if (i % 2)
//                vec[i] = 0;
//            else
//                vec[i] = -prices[0];
//        }
//        for (int i = 1; i < prices.size(); ++i){
//            for (int j = 0; j < vec.size(); ++j){
//                if (j==0){
//                    vec[j]= max(vec[j],-prices[i]);
//                    continue;
//                }
//                if (j % 2){
//                    vec[j]= max(vec[j],vec[j-1]+prices[i]);
//                }
//                else{
//                    vec[j]=max(vec[j],vec[j-1]-prices[i]);
//                }
//
//            }
//        }
//        return vec[k*2-1];
//    }
//};
//class Solution {
//public:
//    unordered_map<int,int> mp;
//    int maxProfit(vector<int>& prices) {
//        return dfs(0,prices);
//    }
//    int dfs(int idx,vector<int>& prices){
//        if(mp.find(idx)!=mp.end())return mp[idx];
//        int sz = prices.size();
//        if (idx>=sz||idx<=-sz)return 0;
//        int rtu = 0;
//        if (idx<0){
//            idx=-idx;
//            rtu = max(dfs(idx+2,prices)+prices[idx], dfs(-(idx+1),prices));
//            mp[-idx]=rtu;
//        }else{
//            rtu = max(dfs(idx+1,prices), dfs(-(idx+1),prices)-prices[idx]);
//            mp[idx]=rtu;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        int sell = 0 ,buy = -prices[0];
//        for (int i = 1; i < prices.size(); ++i){
//            sell = max(sell,buy+prices[i]-fee);
//            buy = max(buy,sell-prices[i]);
//        }
//        return sell>0?sell:0;
//    }
//};
//class StockSpanner {
//public:
//    list<pair<int,int> > lt;
//    StockSpanner() {
//        lt.push_back(make_pair(INT_MAX,1));
//    }
//
//    int next(int price) {
//        int num = 1;
//        while (price >= lt.back().first){
//            num+=lt.back().second;
//            lt.pop_back();
//        }
//        lt.push_back(make_pair(price,num));
//        return num;
//    }
//};
//class StockPrice {
//public:
//    map<int,int> kv;//<key,val>
//    map<int,int> vs;//<val,size>
//    StockPrice() {
//
//    }
//
//    void update(int timestamp, int price) {
//        if (kv.find(timestamp)!=kv.end()){
//            --vs[kv[timestamp]];
//            if (!vs[kv[timestamp]])vs.erase(kv[timestamp]);
//        }
//        kv[timestamp]=price;
//        ++vs[price];
//    }
//
//    int current() {
//        return kv.rbegin()->second;
//    }
//
//    int maximum() {
//        return vs.rbegin()->first;
//    }
//
//    int minimum() {
//        return vs.begin()->first;
//    }
//};
//
///**
// * Your StockPrice object will be instantiated and called as such:
// * StockPrice* obj = new StockPrice();
// * obj->update(timestamp,price);
// * int param_2 = obj->current();
// * int param_3 = obj->maximum();
// * int param_4 = obj->minimum();
// */
//class Solution {
//public:
//    int splitNum(int num) {
//        string st = to_string(num);
//        std::sort(st.begin(), st.end());
//        int n1=0,n2=0;
//        for (int i = 0; i < st.size(); ++i){
//            if (i%2){
//                n1*=10;
//                n1+=(st[i]-48);
//            }else{
//                n2*=10;
//                n2+=(st[i]-48);
//            }
//        }
//        return n1+n2;
//    }
//};
//class Solution {
//public:
//    int sumDistance(vector<int>& nums, string s, int d) {
//        for (int i = 0; i < nums.size(); ++i){
//            nums[i] = nums[i]+(s[i]=='L'?-d:d);
//        }
//        std::sort(nums.begin(), nums.end());
//        int mod = 1e9+7;
//        long long rtu = 0;
//        for (int i = 1; i < nums.size(); ++i){
//            rtu+=(1l*nums[i]-nums[0]);
//            cout<<rtu;
//            rtu%=mod;
//        }
//        long long sum = rtu;
//        for (int i = 1; i < nums.size(); ++i){
//            sum-=((1l*nums[i]-nums[i-1])*(1l*nums.size()-i)%mod)%mod;
//            rtu+=sum%mod;
//            rtu%=mod;
//        }
//        return rtu;
//
//    }
//};
//class Solution {
//public:
//    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
//        unordered_set<string> positive;
//        unordered_set<string> negative;
//        unordered_map<int,int> mp;
//        for (const auto &item: positive_feedback) positive.insert(item);
//        for (const auto &item: negative_feedback) negative.insert(item);
//        for (const auto &item: student_id) mp[item];
//        for (int i = 0; i < student_id.size(); ++i){
//            int idx = 0;
//            while (1){
//                int tmp = report[i].find(" ",idx);
//                string str = report[i].substr(idx,tmp-idx);
//                if (positive.find(str)!=positive.end())mp[student_id[i]]+=3;
//                if (negative.find(str)!=negative.end())mp[student_id[i]]-=1;
//                if (tmp==string::npos) break;
//                idx=tmp+1;
//            }
//        }
//        vector<pair<int,int>> vec;
//        for (const auto &item: mp){
//            vec.push_back(item);
//        }
//        std::sort(vec.begin(), vec.end(),[](pair<int,int> x,pair<int,int> y){
//            if (x.second!=y.second)return x.second>y.second;
//            return x.first<y.first;
//        });
//        vector<int> rtu;
//        for (int i = 0; i < k; ++i){
//            rtu.push_back(vec[i].first);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long long findTheArrayConcVal(vector<int>& nums) {
//        long long rtu = 0,tp;
//        stringstream ss;
//        for (int i = 0; i < nums.size()/2; ++i){
//            ss<<nums[i]<<nums[nums.size()-1-i];
//            ss>>tp;
//            rtu+=tp;
//            ss.clear();
//        }
//        if (nums.size()%2){
//            rtu+=nums[nums.size()/2];
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> avoidFlood(vector<int>& rains) {
//        unordered_map<int,int> mp;
//        set<int> st;
//        vector<int> rtu(rains.size(),-1);
//        for (int i = 0; i < rains.size(); ++i){
//            if (!rains[i]){
//                rtu[i] = 1;
//                st.insert(i);
//                continue;
//            }
//            if (mp.find(rains[i])!=mp.end()){
//                set<int>::iterator it = st.upper_bound(mp[rains[i]]);
//                if (it==st.end())return vector<int>();
//                rtu[*it] = rains[i];
//                st.erase(it);
//            }
//            mp[rains[i]] = i;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        for (int i = 1; i < nums.size(); ++i){
//            nums[i]^=nums[i-1];
//        }
//        return nums.back();
//    }
//};
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int arr[32]{};// == int arr[32] = {}
//        for (unsigned item: nums){
//            int idx = 0;
//            while (item){
//                if(item&1)++arr[idx];
//                item>>=1;
//                ++idx;
//            }
//        }
//        unsigned rtu = 0;
//        for (int i = 31; i >= 0 ; --i) {
//            if(arr[i]%3){
//                ++rtu;
//            }
//            if (i!=0)rtu<<=1;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        int tmp = 0;
//        for (const auto &item: nums)tmp^=item;
//        long lowbit = tmp&(-1l*tmp);
//        int a=0,b=0;
//        for (const auto &item: nums){
//            if (item&lowbit) a^=item;
//            else b^=item;
//        }
//        return {a,b};
//    }
//};
//class Solution {
//public:
//    int sumOfMultiples(int n) {
//        int rtu = 0;
//        for (int i = 1; i <= n; ++i)if (!(i%3&&i%5&&i%7))rtu+=i;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long long maxKelements(vector<int>& nums, int k) {
//        long long rtu = 0;
//        priority_queue<int> pque;
//        for (const auto &item: nums)pque.push(item);
//        for (int i = 0; i < k; ++i){
//            int t = pque.top();
//            rtu+=t;
//            pque.pop();
//            pque.push((1l*t+2)/3);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int tupleSameProduct(vector<int>& nums) {
//        int rtu = 0;
//        unordered_map<int,int> mp;
//        for (int i = 0; i < nums.size()-1; ++i){
//            for (int j = i+1; j < nums.size(); ++j){
//                ++mp[nums[i]*nums[j]];
//            }
//        }
//        for (const auto &item: mp){
//            if(item.second!=1){
//                rtu+=((item.second-1)*item.second)*4;
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    string categorizeBox(int length, int width, int height, int mass) {
//        long long tj = 1ll*length*width*height;
//        if (length>=1e4||width>=1e4||height>=1e4||tj>=1e9){
//            if(mass>=100){
//                return "Both";
//            }else{
//                return "Bulky";
//            }
//        } else{
//            if(mass>=100){
//                return "Heavy";
//            }else{
//                return "Neither";
//            }
//        }
//    }
//};
//class Solution {//写错的
//public:
//    unordered_map<int,unordered_set<int>> mp;
//    unordered_map<int,int> cache;
//    unordered_set<int> stop;
//    long long countPairs(int n, vector<vector<int>>& edges) {
//        for (int i = 0; i < n; ++i)mp[n];
//        for (const auto &item: edges)mp[item[0]].insert(item[1]);
//        long long rtu = 0;
//        for (int i = 0; i < n; ++i){
//            rtu+=
//        }
//    }
//    int dfs(int idx){
//        if (cache.find(idx)!=cache.end())return cache[idx];
//        if (stop.find(idx)!=stop.end())return 0;
//        int rtu = 1;
//        for (const auto &item: mp[idx])rtu += dfs(item);
//        cache[idx] = rtu;
//        stop.erase(idx);
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int get_root(int t,vector<int>& ufs){
//        list<int> st;
//        while (ufs[t]!=-1){
//            st.push_back(t);
//            t = ufs[t];
//        }
//        for (const auto &item: st) ufs[item] = t;
//        return t;
//    }
//    void union_set(int a,int b,vector<int>& ufs){
//        a = get_root(a,ufs);
//        b = get_root(b,ufs);
//        if (a!=b) ufs[a] = b;
//    }
//    long long countPairs(int n, vector<vector<int>>& edges) {
//        vector<int> ufs(n,-1);
//        unordered_map<int,int> mp;
//        for (const auto &item: edges)union_set(item[0],item[1],ufs);
//        for (int i = 0; i < n; ++i) ++mp[get_root(i,ufs)];
//        long long rtu = 0;
//        for (const auto &item: mp){
//            n -= item.second;
//            rtu += 1ll*item.second*n;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maxSatisfaction(vector<int>& satisfaction) {
//        std::sort(satisfaction.begin(), satisfaction.end());
//        vector<int> vec(satisfaction.size());
//        vec.back()=satisfaction.back();
//        int sum = satisfaction.back()*satisfaction.size();
//        for (int i = satisfaction.size()-2; i >= 0 ; --i){
//            vec[i]=satisfaction[i]+vec[i+1];
//            sum+=(i+1)*satisfaction[i];
//        }
//        for (const auto &item: vec){
//            if (item<=0){
//                sum-=item;
//            }
//        }
//        return sum;
//    }
//};
//class Solution {
//public:
//    int minimumSum(vector<int>& nums) {
//        vector<int> left(nums.size()),right(nums.size());
//        int mi = nums[0];
//        left[0] = mi;
//        for (int i = 1; i < nums.size(); ++i){
//            mi=min(mi,nums[i]);
//            left[i]=mi;
//        }
//        mi = nums.back();
//        right.back() = mi;
//        for (int i = nums.size()-2; i >= 0; --i){
//            mi=min(mi,nums[i]);
//            right[i]=mi;
//        }
//        int rtu = INT_MAX;
//        for (int i = 1; i < nums.size()-1; ++i){
//            if (nums[i]>left[i-1]&&nums[i]>right[i+1]){
//                rtu=min(rtu,nums[i]+left[i-1]+right[i+1]);
//            }
//        }
//        return rtu==INT_MAX?-1:rtu;
//    }
//};
//class Solution {
//public:
//    int minGroupsForValidAssignment(vector<int>& nums) {
//        unordered_map<int,int> mp;
//        for (const auto &item: nums)++mp[item];
//        int mi = INT_MAX;
//        vector<int> v;
//        for (const auto &item: mp) {
//            v.push_back(item.second);
//            mi = min(mi,item.second);
//        }
//        while (mi){
//            int rtu = 0;
//            for (const auto &item: v){
//                int tmp = item/(mi+1);
//                int mod = item%(mi+1);
//                if (mod) ++rtu;
//                rtu+=tmp;
//                if(mod&&tmp<mi-mod){
//                    rtu = 0;
//                    break;
//                }
//            }
//            if (rtu) return rtu;
//            --mi;
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    int countSeniors(vector<string>& details) {
//        int rtu = 0;
//        for (const auto &item: details)stoi(item.substr(11,2))>60?++rtu:1;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_map<int,unordered_map<int,int>> mp;
//    int numRollsToTarget(int n, int k, int target) {
//        const int MOD = 1e9+7;
//        if (mp.find(n)!=mp.end()) if(mp[n].find(target)!=mp[n].end()) return mp[n][target];
//        if (n==0&&target==0)return 1;
//        if (n > target) return 0;
//        if (n*k < target) return 0;
//        int rtu = 0;
//        for (int i = 1; i <= min(target,k) ; ++i){
//            rtu += numRollsToTarget(n-1,k,target-i)%MOD;
//            rtu%=MOD;
//        }
//        mp[n][target]=rtu;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int punishmentNumber(int n) {
//        int rtu = 0;
//        for (int i = 1; i <= n; ++i){
//            string t = to_string(i*i);
//            if (dfs(t,0,0,0,i)){
//                rtu+=i*i;
//            }
//        }
//        return rtu;
//    }
//    bool dfs(string& t,int sum,int num,int idx,int i){
//        if (t.size()==idx){
//            if (sum + num == i)return true;
//            return false;
//        }
//        return dfs(t,sum+10*num+t[idx]-'0',0,idx+1,i) || dfs(t,sum,10*num+t[idx]-'0',idx+1,i);
//    }
//};
//class Solution {
//public:
//    int countDigits(int num) {
//        int rtu = 0;
//        for (const auto &item: to_string(num))if (!(num%(item-'0'))) ++rtu;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
//        horizontalCuts.push_back(h);
//        horizontalCuts.push_back(0);
//        verticalCuts.push_back(w);
//        verticalCuts.push_back(0);
//        sort(horizontalCuts.begin(), horizontalCuts.end());
//        sort(verticalCuts.begin(),verticalCuts.end());
//        h = 0;
//        w = 0;
//        for (int i = 1; i < horizontalCuts.size(); ++i){
//            h=max(h,horizontalCuts[i]-horizontalCuts[i-1]);
//        }
//        for (int i = 1; i < verticalCuts.size(); ++i){
//            w=max(w,verticalCuts[i]-verticalCuts[i-1]);
//        }
//        return (1ll*h*w)%static_cast<int>(1e9+7);
//    }
//};
//class Solution {
//public:
//    long long pickGifts(vector<int>& gifts, int k) {
//        long long rtu = 0;
//        priority_queue<int> que;
//        for (const auto &item: gifts)que.push(item);
//        for (int i = 0; i < k; ++i){
//            int tmp = que.top();
//            que.pop();
//            tmp = pow(tmp,0.5);
//            que.push(tmp);
//        }
//        while (!que.empty()){
//            rtu+=que.top();
//            que.pop();
//        }
//        return rtu;
//    }
//};
//class Solution {//100104. 使二进制字符串变美丽的最少修改次数
//public:
//    int minChanges(string s) {
//        vector<int> v;
//        char t = s[0];
//        int sum = 1;
//        for (int i = 1; i < s.size(); ++i){
//            if (s[i]==t){
//                sum++;
//            }else{
//                t = s[i];
//                v.push_back(sum);
//                sum = 1;
//            }
//        }
//        v.push_back(sum);
//        bool bol = false;
//        int jl = 0;
//        int rtu = 0;
//        for (const auto &item: v){
//            if (item%2){
//                if (bol){
//                    bol = false;
//                    rtu+=jl;
//                    jl=0;
//                }else{
//                    bol = true;
//                    jl = 1;
//                }
//            }else{
//                ++jl;
//            }
//
//        }
//        return rtu;
//    }
//};
//class Solution {//100042. 和为目标值的最长子序列的长度 TLE!!!
//public:
//    unordered_map<int,unordered_map<int,int>> mp;
//    int dfs(vector<int>& nums, int target,int idx){
//        if (!target)return 0;
//        if (idx>=nums.size())return INT_MIN;
//        if(mp.find(target)!=mp.end())if(mp[target].find(idx)!=mp[target].end()) return mp[target][idx];
//        int rtu = 0;
//        if (nums[idx] > target){
//            rtu = dfs(nums,target,idx+1);
//        }else{
//            rtu = max(dfs(nums,target-nums[idx],idx+1)+1,dfs(nums,target,idx+1));
//        }
//        mp[target][idx] = rtu;
//        return rtu;
//    }
//    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//        return max(-1,dfs(nums,target,0));
//    }
//
//};
//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        int rtu = 0;
//        std::sort(citations.begin(), citations.end(),[](auto a,auto b){
//            return a>b;
//        });
//        for (int i = 0; i < citations.size(); ++i){
//            if (i+1<=citations[i])rtu=i+1;
//        }
//        return rtu;
//    }
//};
//class Solution {// 解答错误 https://leetcode.cn/problems/length-of-the-longest-subsequence-that-sums-to-target/description/
//public:
//    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//        vector<vector<int>> dp(nums.size(), vector<int> (target+1,-1));
//        dp[0][0] = 0;
//        vector<int> v;
//        v.push_back(0);
//        for (const auto &item: nums)v.push_back(item);
//        for (int i = 1; i < nums.size(); ++i){//表示现在只能选前i个
//            for (int j = 0; j <= target; ++j){
//                if (v[i]>j||dp[i-1][j-v[i]]==-1){
//                    dp[i][j] = dp[i-1][j];
//                }else{
//                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-v[i]]+1);
//                }
//            }
//        }
//        return dp[nums.size()-1][target];
//    }
//};
//class Solution {
//public:
//    int findKOr(vector<int>& nums, int k) {
//        array<int,31> arr;
//        for (auto &item: arr)item=0;
//        for (auto &item: nums){
//            int idx = 0;
//            while (item){
//                arr[idx] += item&1;
//                item/=2;
//                ++idx;
//            }
//        }
//        int rtu = 0;
//        for (int i = 0; i < arr.size(); ++i){
//            if (arr[i]>=k){
//                rtu|=1<<i;
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    long long minSum(vector<int>& nums1, vector<int>& nums2) {
//        long long s1=0,s2=0,n1=0,n2=0;
//        for (const auto &item: nums1){
//            if (item){
//                s1+=item;
//            }else{
//                ++n1;
//            }
//        }
//        for (const auto &item: nums2){
//            if (item){
//                s2+=item;
//            }else{
//                ++n2;
//            }
//        }
//        if (n1==0&&n2==0){
//            if (s1==s2)return s1;
//            return -1;
//        }
//        if (!n1){
//            if (s2+n2>s1)return -1;
//            if (n2)return s1;
//            if (s1==s1)return s1;
//            return -1;
//        }
//        if (!n2){
//            if (s1+n1>s2)return -1;
//            return s2;
//        }
//        return max(s1+n1,s2+n2);
//
//    }
//};
//class Solution { //解答错误 100107. 使数组变美的最小增量运算数
//public:
//    int get_max(int a,int b,int c,vector<int>&nums){
//        if (nums[a]>nums[b]){
//            if(nums[a]>nums[c]){
//                return a;
//            }else{
//                return c;
//            }
//        }else{
//            if(nums[b]>nums[c]){
//                return b;
//            }else{
//                return c;
//            }
//        }
//    }
//    long long minIncrementOperations(vector<int>& nums, int k) {
//        long long rtu=0;
//        set<int> st;
//        for (int i = 0; i < nums.size()-2; ++i){
//            int mx = get_max(i,i+1,i+2,nums);
//            st.insert(mx);
//        }
//        if(st.find(2)!=st.end()){
//            if(st.find(0)!=st.end()){
//                st.erase(0);
//            }
//            if(st.find(1)!=st.end()){
//                st.erase(1);
//            }
//        } else if(st.find(1)!=st.end()){
//            if(st.find(0)!=st.end()){
//                st.erase(0);
//            }
//        }
//        if(st.find(nums.size()-3)!=st.end()){
//            if(st.find(nums.size()-1)!=st.end()){
//                st.erase(nums.size()-1);
//            }
//            if(st.find(nums.size()-2)!=st.end()){
//                st.erase(nums.size()-2);
//            }
//        } else if(st.find(nums.size()-2)!=st.end()){
//            if(st.find(nums.size()-1)!=st.end()){
//                st.erase(nums.size()-1);
//            }
//        }
//        int t = -1;
//        set<int>::iterator it;
//        while((it = st.upper_bound(t))!=st.end()){
//            t=*it;
//            if(st.find(t+1)!=st.end()){
//                if(st.find(t+2)!=st.end()){
//                    st.erase(t+1);
//                }
//            }
//        }
//        for (const auto &item: st){
//            if (nums[item]<k){
//                rtu+=k-nums[item];
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int hIndex(vector<int>& citations) {
//        int right = citations.size(),left = 0,mid;
//        while (right>left){
//            mid = (right+left)/2;
//            if(citations.size()-mid<=citations[mid]){
//                right = mid;
//            }else{
//                left = mid+1;
//            }
//        }
//        return citations.size()-right;
//    }
//};
//class Solution {
//public:
//    long long minIncrementOperations(vector<int>& nums, int k) {
//        vector<long long> dp(3,0);
//        for (int i = nums.size()-1; i >= 0; --i){
//            for (int j = 2; j >= 0; --j) {
//                dp[j] = dp[0] + max(k-nums[i],0);
//                if (j<2){
//                    dp[j] = min(dp[j],dp[j+1]);
//                }
//            }
//        }
//        return dp[0];
//    }
//};
//class Solution {
//public:
//    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//        vector<vector<int>> dp(target+1,vector<int> (nums.size()+1,INT_MIN));
//        for (auto &item: dp[0]) item = 0;
//        for (int i = 0; i <= target; ++i){
//            for (int j = nums.size()-1; j >= 0 ; --j){
//                dp[i][j] = dp[i][j+1];
//                if (i >= nums[j]){
//                    dp[i][j] = max(dp[i][j],dp[i-nums[j]][j+1]+1);
//                }
//            }
//        }
//        return max(-1,dp[target][0]);
//    }
//};
//class Solution {
//public:
//    array<unordered_set<int>,10> arr;
//    int countPoints(string rings) {
//        int rtu = 0;
//        for (int i = 0; i < rings.size(); i+=2)arr[rings[i+1]-'0'].insert(rings[i]);
//        for (const auto &item: arr)item.size()==3?++rtu:0;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int findMaximumXOR(vector<int>& nums) {
//        int rtu = 0;
//        unordered_set<int> st;
//        for (int i = 30; i >= 0 ; --i) {
//            rtu <<= 1;
//            rtu |= 1;
//            bool bol = true;
//            for (const auto &item: nums){
//                int t = item >> i;
//                if (st.find(rtu^t)!=st.end()) {
//                    bol = false;
//                    break;
//                }
//                st.insert(t);
//            }
//            if (bol) --rtu;
//            st.clear();
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_map<string,int> mp;
//    vector<string> findRepeatedDnaSequences(string s) {
//        vector<string> rtu;
//        for (int i = 0; i < (int)s.size()-10; ++i) ++mp[s.substr(i,10)];
//        for (const auto &item: mp)if (item.second>=2)rtu.push_back(item.first);
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int findChampion(vector<vector<int>>& grid) {
//        for (int i = 0; i < grid.size(); ++i){
//            int bol = true;
//            for (int j = 0; j < grid.size(); ++j){
//                if(i==j)continue;
//                if(!grid[i][j]){
//                    bol = false;
//                    break;
//                }
//            }
//            if (bol){
//                return i;
//            }
//
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    unordered_map<int,int> mp;
//    int findChampion(int n, vector<vector<int>>& edges) {
//        for (const auto &item: edges)++mp[item[1]];
//        int size = 0;
//        int rtu = -1;
//        for (int i = 0; i < n; ++i){
//            if (!mp.count(i)) {
//                ++size;
//                rtu = i;
//            }
//        }
//        if (size!=1)return -1;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_map<int,unordered_set<int>> tree;
//    unordered_set<int> cache;
//    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
//        for (const auto &item: edges){
//            tree[item[0]].insert(item[1]);
//            tree[item[1]].insert(item[0]);
//        }
//        long long sum = 0;
//        for (const auto &item: values) sum+=item;
//        return sum-dfs(0,values);
//    }
//    long long dfs(int idx, vector<int>& values){
//        cache.insert(idx);
//        long long rtu = 0;
//        bool bol = true;
//        for (const auto &item: tree[idx]){
//            if (!cache.count(item)) {
//                rtu += dfs(item,values);
//                bol = false;
//            }
//        }
//        cache.erase(idx);
//        if (bol) return values[idx];
//        return min(rtu,1ll*values[idx]);
//    }
//};
//class Solution {//[3,3,5,6] 100112. 平衡子序列的最大和 解答错误
//public:
//    unordered_map<int,long long> cache;
//    long long maxBalancedSubsequenceSum(vector<int>& nums) {
//        long long rtu = LONG_LONG_MIN;
//        for (int i = 0; i < nums.size(); ++i){
//            rtu=max(rtu, dfs(i,nums));
//        }
//        return rtu;
//    }
//    long long dfs(int idx, vector<int>& nums){
//        if (cache.count(idx))return cache[idx];
//        long long rtu = nums[idx];
//        for (int i = idx+1; i < nums.size(); ++i){
//            if (nums[i]-nums[idx]>=i-idx){
//                rtu += dfs(i,nums);
//                break;
//            }
//        }
//        long long tmp = max(rtu,1ll*nums[idx]);
//        cache[idx] = tmp;
//        return tmp;
//    }
//};
//class Solution {
//public:
//    struct xnode{
//        xnode* right = nullptr;
//        xnode* left = nullptr;
//        pair<int,int> range;
//        long long val = LONG_LONG_MIN;
//    };
//    //易知 nums[ij] - ij >= nums[ij-1] - ij-1  可以推出  arr[ij] >= arr[ij-1]
//    set<int> st;
//    unordered_map<int,int> mp;
//    long long maxBalancedSubsequenceSum(vector<int>& nums) {
//        for (int i = 0; i < nums.size(); ++i) st.insert(nums[i]-i);//离散化
//        int ttt = 0;
//        for (const auto &item: st) mp[item] = ttt++;
//        xnode *r = build_node(0,st.size());
//        for (int i = 0; i < nums.size(); ++i){
//            long long t = get_range_max(0,mp[nums[i]-i],r);
//            set_node(mp[nums[i]-i],max(1ll*nums[i], t==LONG_LONG_MIN?t:max(nums[i]+t, t)),r);
//        }
//        return get_range_max(0,st.size(),r);
//    }
//    xnode* build_node(int left, int right){
//        xnode * root = new xnode;
//        int mid = (left+right)/2;
//        root->range.first = left;
//        root->range.second = right;
//        if (left != right){
//            root->left = build_node(left,mid);
//            root->right = build_node(mid+1,right);
//        }
//        return root;
//    }
//    void set_node(int idx, long long val, xnode* root){
//        if (root->range.second == root->range.first && idx == root->range.second){
//            root->val = val;
//            return;
//        }
//        if (idx>root->range.second || idx<root->range.first)return;
//        set_node(idx,val,root->left);
//        set_node(idx,val,root->right);
//        root->val = max(root->left->val, root->right->val);
//    }
//    long long get_range_max(int left, int right, xnode* root){
//        if (right < root->range.first || left > root->range.second) return LONG_LONG_MIN;
//        if (left <= root->range.first && right >= root->range.second) return root->val;
//        long long rtu = LONG_LONG_MIN;
//        rtu = max(rtu, get_range_max(left,right,root->right));
//        rtu = max(rtu, get_range_max(left,right,root->left));
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maxProduct(vector<string>& words) {
//        vector<int> v(words.size(),0);
//        for (int i = 0; i < words.size(); ++i)for (const auto &item: words[i])v[i]|=(1<<(item-'a'));
//        int rtu = 0;
//        for (int i = 0; i < v.size()-1; ++i)for (int j = i+1; j < v.size(); ++j)if(!(v[i]&v[j]))rtu = max(rtu, static_cast<int>(words[i].size()*words[j].size()));
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int vowelStrings(vector<string>& words, int left, int right) {
//        unordered_set<char> cs{'a','e','i','o','u'};
//        int rtu = 0;
//        int mn = min(right+1,(int)words.size());
//        for(int i = left; i < mn; ++i)
//            if(cs.count(words[i].front()) && cs.count(words[i].back()))
//                ++rtu;
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_map<int,unordered_set<int>> mp;
//    unordered_set<int> cache;
//    vector<int> smallestMissingValueSubtree(vector<int>& parents, vector<int>& nums) {
//        for (int i = 0; i < parents.size(); ++i) mp[parents[i]].insert(i);
//        int idx1 = -1;
//        for (int i = 0; i < nums.size(); ++i) if(nums[i]==1) idx1 = i;
//        vector<int> rtu(parents.size(),1);
//        if (idx1 == -1) return rtu;
//        int mi = 1;
//        while (idx1 != -1){
//            dfs(idx1,nums);
//            while (cache.count(mi)) ++mi;
//            rtu[idx1] = mi;
//            idx1 = parents[idx1];
//        }
//        return rtu;
//    }
//    void dfs(int root, vector<int>& nums){
//        if(cache.count(nums[root]))return;
//        cache.insert(nums[root]);
//        for (const auto &item: mp[root]) dfs(item,nums);
//    }
//};
//class Solution {
//public:
//    int findTheLongestBalancedSubstring(string s) {
//        bool bol = true;
//        int rtu = 0;
//        int si0 = 0;
//        int si1 = 0;
//        for (const auto &item: s){
//            if (item=='0'){
//                if (bol){
//                    ++si0;
//                } else{
//                    rtu = max(rtu, 2*min(si0,si1));
//                    si0 = 1;
//                    si1 = 0;
//                    bol = true;
//                }
//            }else{
//                if (bol){
//                    bol = false;
//                    ++si1;
//                }else{
//                    ++si1;
//                }
//            }
//        }
//        rtu = max(rtu, 2*min(si0,si1));
//        return rtu;
//    }
//};
//class Solution {
//public:
//    unordered_set<int> cache;
//    unordered_map<int,int> mp;
//    int rtu = -1;
//    list<int> lt;
//    unordered_map<int,unordered_set<int>> tree;
//    int maximumInvitations(vector<int>& favorite) {
//        for (int i = 0; i < favorite.size(); ++i) tree[favorite[i]].insert(i);
//        for (int i = 0; i < favorite.size(); ++i) dfs(i,favorite);
//        int sum = 0;
//        for (int &item: lt)sum+=ddfs(item,favorite[item]) + ddfs(favorite[item],item);
//        return max(rtu,sum);
//    }
//    int flag = -1;
//    int dfs(int idx, vector<int>& favorite){
//        if (mp.count(idx))return mp[idx];
//        if(cache.count(idx)) {
//            flag = idx;
//            return 0;
//        }
//        cache.insert(idx);
//        int sum = dfs(favorite[idx],favorite)+1;
//        if(idx == flag){
//            flag = -1;
//            if (sum == 2) lt.push_back(idx);
//            rtu = max (rtu,sum);
//        }
//        cache.erase(idx);
//        mp[idx] = sum;
//        return sum;
//    }
//    int ddfs(int idx, int no ){
//        int rtu = 1;
//        for (const auto &item: tree[idx]) if (item!=no) rtu = max(rtu,ddfs(item,no)+1);
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maximumMinutes(vector<vector<int>>& grid) {
//        pair<int,int> a{1e9,1e9},b{1e9,1e9};
//        if(grid[grid.size()-1][grid[0].size()-2]!=2) a = bfs(grid.size()-1,grid[0].size()-2,grid);
//        if(grid[grid.size()-2][grid[0].size()-1]!=2) b = bfs(grid.size()-2,grid[0].size()-1,grid);
//        int left0 = a.first, left_fire =a.second, up0 = b.first, up_fire = b.second;
//        if (min(left0,up0) > min(left_fire,up_fire))return -1;
//        if(min(left0,up0)==1e9)return -1;
//        if (min(left_fire,up_fire) == 1e9 && min(left0,up0) != 1e9)return 1e9;
//        int _0=0,_=0;
//        if(left0 > up0) _0=1;
//        if(left_fire > up_fire) _=1;
//        if (_0==_&&left0!=up0&&left_fire!=up_fire||left0==up0&&left_fire==up_fire){
//            if(min(left_fire,up_fire) == min(left0,up0)) return -1;
//            return min(left_fire,up_fire)-min(left0,up0)-1;
//        }
//        return min(left_fire,up_fire)-min(left0,up0);
//    }
//    pair<int,int> bfs(int x, int y, vector<vector<int>>& grid){
//        unordered_map<int, unordered_map<int,int>> cache;
//        int idx00 = 1e9,dep = 1e9;
//        list<pair<int,int>> lt;
//        bool get00 = false, fire = false;
//        lt.push_back({x, y});
//        int i = 0;
//        while (!lt.empty() && !(get00 && fire)){
//            ++i;
//            list<pair<int,int>> tmp;
//            for (const auto &item: lt){
//                if(cache[item.first][item.second]) continue;
//                ++cache[item.first][item.second];
//                if(grid[item.first][item.second] == 1){
//                    fire = true;
//                    dep = min(i,dep);
//                } else if(item.first == 0 && item.second == 0){
//                    get00 = true;
//                    idx00 = min(idx00,i);
//                }
//                if (item.first-1 >= 0 && grid[item.first-1][item.second]!=2 && !cache[item.first-1][item.second]) tmp.push_back({item.first-1,item.second});
//                if (item.first+1 < grid.size() && grid[item.first+1][item.second]!=2 && !cache[item.first+1][item.second]) tmp.push_back({item.first+1,item.second});
//                if (item.second-1 >= 0 && grid[item.first][item.second-1]!=2 && !cache[item.first][item.second-1]) tmp.push_back({item.first,item.second-1});
//                if (item.second+1 < grid[0].size() && grid[item.first][item.second+1]!=2 && !cache[item.first][item.second+1]) tmp.push_back({item.first,item.second+1});
//            }
//            lt = tmp;
//        }
//        return {idx00, dep};
//    }
//};
//class Solution {
//public:
//    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//        std::sort(potions.begin(), potions.end());
//        for (auto &item: spells)
//            item = potions.size()-(std::lower_bound(potions.begin(), potions.end(),item,[success](int x, int y){
//                return 1ll*x*y<success;
//            })-potions.begin());
//        return spells;
//    }
//};
//class Solution {
//public:
//    struct dsu{
//        vector<int> v;
//        vector<int> r;
//        dsu(int n){
//            v.resize(n, -1);
//            r.resize(n, 0);
//        }
//        int get(int idx){
//            list<int> lt;
//            while (v[idx]!=-1){
//                lt.push_back(idx);
//                idx=v[idx];
//            }
//            for (const auto &item: lt) v[item] = idx;
//            return idx;
//        }
//        void uni(int x, int y){
//            x = get(x);
//            y = get(y);
//            if (x != y){
//                if(r[x] > r[y]){
//                    v[y] = x;
//                }else{
//                    if (r[x] == r[y]) ++r[y];
//                    v[x] = y;
//                }
//            }
//        }
//    };
//    int minSwapsCouples(vector<int>& row) {
//        int n = row.size()/2;
//        dsu d(n);
//        for (int i = 0; i < row.size(); i+=2) d.uni(row[i]>>1, row[i+1]>>1);
//        unordered_set<int> st;
//        for (int i = 0; i < n; ++i) st.insert(d.get(i));
//        return n-st.size();
//    }
//};
//class RangeModule {
//private:
//    struct Node{
//        Node(int x, int y, int z):b(x),e(y),val(z){}
//        int b,e,val,lazy = -1;
//        Node* l = nullptr;
//        Node* r = nullptr;
//    };
//    Node* root = nullptr;
//    void pushdown(Node* root){
//        if (root->lazy != -1){
//            root->l->val = root->lazy;
//            root->l->lazy = root->lazy;
//            root->r->val = root->lazy;
//            root->r->lazy = root->lazy;
//            root->lazy = -1;
//        }
//    }
//    void pushup(Node* root){
//        root->val = root->l->val && root->r->val;
//    }
//    void setRange(int left, int right, Node* root){
//        if (root->b > right || root->e < left) return;
//        if (root->val) return;
//        int m = (root->b + root->e)/2;
//        if(root->b >= left && root->e <= right){
//            root->val = 1;
//            root->lazy = 1;
//        }else{
//            if (!root->l) root->l = new Node(root->b, m, root->val);
//            if (!root->r) root->r = new Node(m+1, root->e, root->val);
//            pushdown(root);
//            setRange(left, right, root->l);
//            setRange(left, right, root->r);
//            pushup(root);
//        }
//    }
//    void delRange(int left, int right, Node* root){
//        if (root->b > right || root->e < left) return;
//        int m = (root->b + root->e)/2;
//        if(root->b >= left && root->e <= right){
//            root->val = 0;
//            root->lazy = 0;
//        }else{
//            if (!root->l) root->l = new Node(root->b, m, root->val);
//            if (!root->r) root->r = new Node(m+1, root->e, root->val);
//            pushdown(root);
//            delRange(left, right, root->l);
//            delRange(left, right, root->r);
//            pushup(root);
//        }
//    }
//    bool getRange(int left, int right, Node* root){
//        if (root->b > right || root->e < left) return true;
//        int m = (root->b + root->e)/2;
//        if(root->b >= left && root->e <= right){
//            return root->val;
//        }else{
//            if (!root->l) root->l = new Node(root->b, m, root->val);
//            if (!root->r) root->r = new Node(m+1, root->e, root->val);
//            pushdown(root);
//            return getRange(left, right, root->l) && getRange(left, right, root->r);
//        }
//    }
//
//public:
//    RangeModule() {
//        root = new Node(1,1e9,0);
//    }
//
//    void addRange(int left, int right) {
//        setRange(left, right-1, root);
//    }
//
//    bool queryRange(int left, int right) {
//        return getRange(left, right-1, root);
//    }
//
//    void removeRange(int left, int right) {
//        delRange(left, right-1, root);
//    }
//};
//class NumArray {
//public:
//    struct Node{
//        Node(int x, int y):begin(x),end(y){}
//        Node* r;
//        Node* l;
//        int begin,end,val;
//    };
//    int getsum(int left, int right, Node* root) {
//        if(left > root->end || right < root->begin) return 0;
//        if(left <= root->begin && right >= root->end) return root->val;
//        return getsum(left, right ,root->r) + getsum(left, right ,root->l);
//    }
//    void setval(int index, int val, Node* root){
//        if(index > root->end || index < root->begin) return;
//        if(root->begin == root->end){
//            if(root->begin == index) root->val = val;
//            return;
//        }
//        setval(index, val, root->r);
//        setval(index, val, root->l);
//        root->val = root->r->val + root->l->val;
//    }
//    void buildtree(Node* root, vector<int>& nums){
//        if (root->begin == root->end){
//            root->val = nums[root->begin];
//            return;
//        }
//        int mid = (root->begin + root->end)/2;
//        root->r = new Node(mid+1, root->end);
//        root->l = new Node(root->begin, mid);
//        buildtree(root->r, nums);
//        buildtree(root->l, nums);
//        root->val = root->r->val + root->l->val;
//    }
//    Node* root;
//    NumArray(vector<int>& nums) {
//        root = new Node(0, nums.size()-1);
//        buildtree(root, nums);
//    }
//
//    void update(int index, int val) {
//        setval(index, val, root);
//    }
//
//    int sumRange(int left, int right) {
//        return getsum(left, right, root);
//    }
//};
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x<0)return false;
//        list<int> lt;
//        while (x){
//            lt.push_back(x%10);
//            x/=10;
//        }
//        while (lt.size()>1){
//            if(lt.front()!=lt.back())return false;
//            lt.pop_front();
//            lt.pop_back();
//        }
//        return true;
//    }
//};
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int rtu = min(height.back(),height.front())*(height.size()-1);
//        int r = height.size()-1, l = 0;
//        while(r>l){
//            rtu = max(rtu, min(height[r],height[l])*(r-l));
//            if (height[r]>height[l])++l;
//            else --r;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//        vector<vector<int>> floyd(n,vector(n,1<<25));
//        for (int i = 0; i < n; ++i){
//            floyd[i][i] = 0;
//        }
//        for (const auto &item: edges){
//            floyd[item[0]][item[1]] = item[2];
//            floyd[item[1]][item[0]] = item[2];
//        }
//        for (int i = 0; i < n; ++i){
//            for (int j = 0; j < n; ++j){
//                for (int k = 0; k < n; ++k){
//                    floyd[j][k] = min(floyd[j][k],floyd[j][i]+floyd[i][k]);
//                }
//            }
//        }
//        int rtu,mi = INT_MAX;
//        for (int i = 0; i < n; ++i){
//            int num = 0;
//            for (const auto &item: floyd[i]) if(item<=distanceThreshold) ++num;
//            if (num<=mi){
//                rtu=i;
//                mi=num;
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {// 痛苦的 2916. 子数组不同元素数目的平方和 II 还是错误的
//public:
//    struct Node{
//        int b,e,val = 0,lazy = 0;
//        Node* left;
//        Node* right;
//        Node(int _b, int _e):b(_b),e(_e){}
//    };
//    void buildtree(Node* root){
//        if (root->b==root->e)return;
//        int mid = (root->b+root->e)/2;
//        root->left = new Node(root->b, mid);
//        root->right = new Node(mid+1,root->e);
//        buildtree(root->left);
//        buildtree(root->right);
//    }
//    void pushdown(Node* root){
//        if (root->lazy){
//            root->right->lazy+=root->lazy;
//            root->left->lazy+=root->lazy;
//            root->right->val=(sqrt(root->right->val)+(root->right->e-root->right->b)*root->right->lazy)*(sqrt(root->right->val)+(root->right->e-root->right->b)*root->right->lazy);
//            root->left->val+=(sqrt(root->left->val)+(root->left->e-root->left->b)*root->left->lazy)*(sqrt(root->left->val)+(root->left->e-root->left->b)*root->left->lazy);
//            root->lazy = 0;
//        }
//    }
//    void pushup(Node* root){
//        root->val = root->right->val + root->left->val + 2*sqrt(1ll*root->right->val*root->left->val);
//    }
//    void setRange(int l, int r, Node* root){ // add 1
//        if (root->e < l || root->b > r)return;
//        if(root->b >= l && root->e <= r){
//            ++root->lazy;
//            root->val = (sqrt(root->val)+root->e-root->b)*(sqrt(root->val)+root->e-root->b);
//        }else{
//            pushdown(root);
//            setRange(l,r,root->right);
//            setRange(l,r,root->left);
//            pushup(root);
//        }
//    };
//    int getSizeByIndex(int idx, Node* root){
//
//        if (root->e < idx || root->b > idx) return 0;
//        if(root->e == root->b){
//            if (root->b == idx){
//                return root->val;
//            }
//            return 0;
//        }else{
//            pushdown(root);
//            return getSizeByIndex(idx,root->right)+getSizeByIndex(idx,root->left);
//        }
//    }
//    Node* r;
//    static constexpr int MOD = 1e9+7;
//    unordered_map<int,int> mp;
//    int sumCounts(vector<int>& nums) {
//        auto test1 = [](vector<int>& nums){
//            unordered_map<int,int> mp;
//            for (int i = 0; i < nums.size(); ++i){
//                for (int j = i; j < nums.size(); ++j){
//                    unordered_set<int> st;
//                    for (int k = j-i; k <= j; ++k) {
//                        st.insert(nums[k]);
//                    }
//                    ++mp[st.size()];
//                }
//            }
//            int sum = 0;
//            for (const auto &[k,v]: mp){
//                cout<<k<<":"<<v<<endl;
//                sum+=k*k*v;
//            }
//            cout<<"[sum]:"<<sum<<endl;
//        };
//        test1(nums);
//        r = new Node(1,1e5);
//        buildtree(r);
//        long long rtu = 0;
//        for (int i = 0; i < nums.size(); ++i){
//
//            if (mp.count(nums[i])){
////                setRange(1,mp.size(),r);
////                //setRange(i-mp[nums[i]],i-mp[nums[i]],r);
////
////                if(mp.size()!=i+1){
////                    setRange(2*mp.size()-i, mp.size(), r);
////                }
//                setRange(mp[nums[i]],i,r);
//                mp[nums[i]] = i;
//                rtu+=r->val;
//            }else{
//
////                mp[nums[i]] = i;
////                if(mp.size()!=i+1){
////                    setRange(max(1,2*static_cast<int>(mp.size())-i), mp.size(), r);
////                }
//                setRange(1,mp.size(),r);
//                mp[nums[i]] = i;
//                rtu+=r->val;
//            }
//        }
////        //long long rtu = 0;
////        for (int i = 1; i <= 1e5; ++i) {
////            cout<<getSizeByIndex(i,r)<<endl;
////            rtu += (1ll*i*i*getSizeByIndex(i,r))%MOD;
////            rtu%=MOD;
////        }
//        return rtu%MOD;
//    }
//
//};
//class Solution {
//public:
//    struct Node{
//        Node(int _b, int _e):b(_b),e(_e){}
//        int b,e,lazy = 0;
//        long long val = 0;
//        Node* r;
//        Node* l;
//    };
//    void pushdown(Node* root){
//        if (root->lazy){
//            root->r->val += (root->r->e - root->r->b + 1)*root->lazy;
//            root->l->val += (root->l->e - root->l->b + 1)*root->lazy;
//            root->r->lazy += root->lazy;
//            root->l->lazy += root->lazy;
//            root->lazy = 0;
//        }
//    }
//    void pushup(Node* root){
//        root->val = root->r->val + root->l->val;
//    }
//    void build(Node* root){
//        if (root->b != root->e){
//            int mid = (root->b + root->e)/2;
//            root->l = new Node(root->b,mid);
//            root->r = new Node(mid+1,root->e);
//            build(root->l);
//            build(root->r);
//        }
//    }
//    void setRangeAdd1(int left, int right, Node* root){
//        if (root->b > right || root->e < left)return;
//        if(root->b >= left && root->e <= right){
//            root->val += root->e - root->b + 1;
//            ++root->lazy;
//        }else{
//            pushdown(root);
//            setRangeAdd1(left,right,root->r);
//            setRangeAdd1(left,right,root->l);
//            pushup(root);
//        }
//    }
//    long long getRange(int left, int right, Node* root){
//        if (root->b > right || root->e < left) return 0;
//        if(root->b >= left && root->e <= right){
//            return root->val;
//        }else{
//            pushdown(root);
//            return getRange(left,right,root->l) + getRange(left,right,root->r);
//        }
//    }
//    int sumCounts(vector<int>& nums) {
//        const int MOD = 1e9+7;
//        Node* root;
//        root = new Node(0,nums.size()-1);
//        build(root);
//        long long tmp = 0;
//        long long rtu = 0;
//        unordered_map<int,int> mp;
//        for (int i = 0; i < nums.size(); ++i){
//            if (mp.count(nums[i])){
//                tmp += 2 * getRange(mp[nums[i]]+1,nums.size()-1,root) + i - mp[nums[i]];
//                setRangeAdd1(mp[nums[i]]+1,i,root);
//            }else{
//                tmp += 2 * getRange(0,nums.size()-1,root) + i + 1;
//                setRangeAdd1(0,i,root);
//            }
//            tmp %= MOD;
//            mp[nums[i]] = i;
//            rtu += tmp;
//            rtu %= MOD;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maximizeSum(vector<int>& nums, int k) {
//        int mx = -1;
//        for (const auto &item: nums) mx = max(mx, item);
//        return (2*mx+k-1)*k/2;
//    }
//};
//class Solution {
//public:
//    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
//        int rtu = 0;
//        int t = 0;
//        int mx = 0;
//        for (int i = 0; i < nums.size(); ++i){
//            if (nums[i]%2 == t && nums[i] <= threshold){
//                t ^= 1;
//                ++mx;
//                rtu = max(rtu,mx);
//            }else{
//                if(!(nums[i]%2) && nums[i] <= threshold){
//                    mx = 1;
//                    t = 1;
//                }else{
//                    mx = 0;
//                    t = 0;
//                }
//
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
//        vector<int> rtu(queries.size());
//        for (int i = 0; i < queries.size(); ++i) queries[i].push_back(i);
//        std::sort(queries.begin(), queries.end(), [](vector<int>& x, vector<int>& y){
//         return  y[0]<x[0];
//        });
//        struct cmp{
//            bool operator()(int a,int b) const{
//                return a>b;
//            }
//        };
//        map<int,int,cmp> mp;
//        for (int i = 0; i < nums1.size(); ++i)
//        {
//            int& t = mp[nums1[i]];
//            if(t < nums2[i])
//                t = nums2[i];
//        }
//        auto it = mp.begin();
//        vector<pair<int,int>> stk;
//        for (const auto &item: queries){
//            while (it != mp.end() && it->first >= item[0]){
//                auto [k,v] = *it;
//                while (stk.size() && stk.back().second < v+k)stk.pop_back();
//                if(stk.empty() || stk.back().first < v)stk.push_back({v,k+v});
//                ++it;
//            }
//            auto t = lower_bound(stk.begin(), stk.end(), make_pair(item[1],0),[](const pair<int, int>& v, const pair<int,int>& e){
//                return v.first < e.first;
//            });
//            rtu[item[2]] = t!=stk.end()? t->second : -1;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    struct Node{
//        Node(int _b, int _e):b(_b),e(_e){}
//        int b,e,v = -1;
//        Node* left = nullptr;
//        Node* right = nullptr;
//    };
//    int getMaxByRange(int left, int right, Node* root){
//        if (right < root->b || left > root->e) return -1;
//        if (left <= root->b && right >= root->e) return root->v;
//        else {
//            if(!root->left) return -1;
//            return max(getMaxByRange(left,right,root->left), getMaxByRange(left,right,root->right));
//        }
//    }
//    void setVal(int idx, int val, Node* root){
//        if (idx < root->b || idx > root->e) return;
//        if(root->b == root->e){
//            root->v = max(root->v, val);
//        }else{
//            int mid = (root->b + root->e)/2;
//            if (!root->left)root->left = new Node(root->b,mid);
//            if (!root->right)root->right = new Node(mid+1,root->e);
//            setVal(idx,val,root->left);
//            setVal(idx,val,root->right);
//            pushup(root);
//        }
//    }
//    void pushup(Node* root){
//        root->v = max(root->left->v, root->right->v);
//    }
//    void buildtree(Node* root){
//        if (root->b != root->e){
//            int mid = (root->b + root->e)/2;
//            root->left = new Node(root->b,mid);
//            root->right = new Node(mid+1,root->e);
//            buildtree(root->left);
//            buildtree(root->right);
//        }
//    }
//    vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
//        set<int> st;
//        for (const auto &item: nums2) st.insert(item);
//        unordered_map<int,int> hax;
//        int _ = 0;
//        for (const auto &item: st) hax[item] = ++_;
//        map<int, int> mp;
//        for (int i = 0; i < nums1.size(); ++i) {
//            int& t = mp[nums1[i]];
//            if (nums2[i] > t) t = nums2[i];
//        }
//        vector<int> rtu(queries.size());
//        _=-1;
//        struct cmp{
//            bool operator()(int a, int b) const{
//                return a>b;
//            }
//        };
//        map<int,unordered_map<int,unordered_set<int>>,cmp> mp1;
//        for (auto &item: queries) {
//            mp1[item[0]][item[1]].insert(++_);
//        }
////        std::sort(queries.begin(), queries.end(),[](auto a, auto b){
////            return a[0]>b[0];
////        });
//        Node* root = new Node(1,st.size());
////        buildtree(root);
//        auto it = mp.rbegin();
//        for (const auto &item: mp1){
//            for (const auto &item1: item.second){
//                while (it != mp.rend() && it->first >= item.first) {
//                    setVal(hax[it->second], it->first + it->second, root);
//                    ++it;
//                }
//                auto iit = st.lower_bound(item1.first);
//                if (iit == st.end()){
//                    for (const auto &item2: item1.second){
//                        rtu[item2] = -1;
//                    }
//
//                }else{
//                    for (const auto &item2: item1.second){
//                        rtu[item2] = getMaxByRange(hax[*iit],st.size(),root);
//                    }
//                }
//            }
//
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maximumSum(vector<int>& nums) {
//        unordered_map<int,int> mp;
//        int rtu = -1;
//        for (auto item: nums){
//            int n = item;
//            int bitsum = 0;
//            while (item) {
//                bitsum+=item%10;
//                item/=10;
//            }
//            if (mp.count(bitsum)) rtu = max(rtu,n+mp[bitsum]);
//            mp[bitsum] = max(mp[bitsum], n);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
//        struct cmp{
//            bool operator()(int a, int b) const{
//                return a > b;
//            }
//        };
//        map<int,int,cmp> nmp;
//        for (int i = 0; i < nums1.size(); ++i){
//            int& t = nmp[nums1[i]];
//            if (nums2[i] > t) t = nums2[i];
//        }
//        map<int,unordered_map<int,unordered_set<int>>,cmp> qmp;
//        for (int i = 0; i < queries.size(); ++i) qmp[queries[i][0]][queries[i][1]].emplace(i);
//        vector<int> rtu(queries.size());
//        auto it = nmp.begin();
//        vector<pair<int,int>> stk;
//        for (const auto &x: qmp){
//            while (it != nmp.end() && it->first >= x.first){
//                while (!stk.empty() && stk.back().second <= it->first + it->second) stk.pop_back();
//                if (stk.empty() || stk.back().first < it->second) stk.emplace_back(it->second, it->first + it->second);
//                ++it;
//            }
//            for (const auto &y: x.second){
//                auto lb = std::lower_bound(stk.begin(), stk.end(), make_pair(y.first, 0));
//                int n = lb == stk.end() ? -1 : lb->second;
//                for (const auto &idx: y.second) rtu[idx] = n;
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int findMinimumOperations(string s1, string s2, string s3) {
//        int siz = 0;
//        while (1){
//            if (siz<s1.size() && siz<s2.size() && siz<s3.size()){
//                if (s1[siz]==s2[siz] && s3[siz]==s2[siz]) ++siz;
//                else break;
//            }else break;
//
//        }
//        if (!siz){
//            return -1;
//        }
//        return s1.size() + s2.size() + s3.size() -3*siz;
//
//    }
//};
//class Solution {
//public:
//    long long minimumSteps(string s) {
//        long long rtu = 0;
//        int idx1 = s.size()-1;
//        for (int i = s.size()-1; i >= 0; --i){
//            if (s[i]=='1'){
//                rtu += idx1 - i;
//                --idx1;
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
//        int sum1 = 0, sum2 = 0, sum3 = 0, max1 = 0, max2 = 0, max3 = 0,x,y,z,t;
//        for (int i = 0; i < k-1; ++i)sum1+=nums[i];
//        for (int i = k; i < 2*k-1; ++i)sum2+=nums[i];
//        for (int i = 2*k; i < 3*k-1; ++i)sum3+=nums[i];
//        vector<int> rtu(3);
//        for (int i = 0; i <= nums.size()-3*k; ++i){
//            sum1+=nums[i+k-1];
//            sum2+=nums[i+2*k-1];
//            sum3+=nums[i+3*k-1];
//            if (sum1 > max1){
//                max1 = sum1;
//                x = i;
//            }
//            if (sum2 + max1 > max2){
//                max2 = sum2 + max1;
//                y = i+k;
//                t = x;
//            }
//            if (sum3 + max2 > max3){
//                max3 = sum3 + max2;
//                rtu[0] = t;
//                rtu[1] = y;
//                rtu[2] = i+2*k;
//            }
//            sum1-=nums[i];
//            sum2-=nums[i+k];
//            sum3-=nums[i+2*k];
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int sum = 0;
//        int rtu = nums[0];
//        for (const auto &item: nums){
//            if (sum + item > 0){
//                sum += item;
//                rtu = max(sum, rtu);
//            }else{
//                sum = 0;
//                rtu = max(item, rtu);
//            }
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int maximumXorProduct(long long a, long long b, int n) {
//        long long an = a>>n, bn = b>>n;
//        if (an > bn){
//            long long t = a;
//            a = b;
//            b = t;
//        }
//        bool bol = true;
//        for (int i = n-1; i >= 0; --i){
//            long long ni = 1ll<<i;
//            if((ni & a) == (ni & b)){
//                a|=ni;
//                b|=ni;
//            }else{
//                if (an == bn){
//                    if (bol){
//                        bol = false;
//                        b|=ni;
//                        a&=(~ni);
//                    }else{
//                        a|=ni;
//                        b&=(~ni);
//                    }
//
//                }else{
//                    a|=ni;
//                    b&=(~ni);
//                }
//            }
//        }
//        int MOD = 1e9+7;
//        return ((a%MOD) * (b%MOD))%MOD;
//    }
//};
//class Solution {
//public:
//    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
//        vector<list<pair<int,int>>> vec(heights.size());
//        vector<int> rtu(queries.size());
//        for (int i = 0; i < queries.size(); ++i){
//            if (queries[i][0] > queries[i][1]) swap(queries[i][0], queries[i][1]);
//            if (queries[i][0] == queries[i][1] || heights[queries[i][1]] > heights[queries[i][0]]) rtu[i] = queries[i][1];
//            else vec[queries[i][1]].emplace_back(heights[queries[i][0]], i);
//        }
//        vector<pair<int,int>> stk;
//        for (int i = heights.size()-1; i >= 0; --i){
//            while (!stk.empty() && heights[i] >= stk.back().first) stk.pop_back();
//            for (const auto &item: vec[i]){
//                auto it = std::lower_bound(stk.begin(), stk.end(), make_pair(item.first, 0),[](auto a, auto b){
//                    return a.first > b.first;
//                });
//                rtu[item.second] = it == stk.begin() ? -1 : (it-1)->second;
//            }
//            stk.emplace_back(heights[i], i);
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    int minDeletion(vector<int>& nums) {
//        int rtu = 0;
//        for (int i = 0; i < nums.size()-1; ++i) {
//            if (nums[i] != nums[i+1]) ++i;
//            else ++rtu;
//        }
//        return (nums.size()-rtu)%2 + rtu;
//    }
//};
//class Solution {
//public:
//    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
//        for (int i = grid.size()-2; i >= 0; --i){
//            for (int j = 0; j < grid[i].size(); ++j){
//                int tmp{INT_MAX};
//                for (int k = 0; k < grid[i + 1].size(); ++k) tmp = min (tmp, moveCost[grid[i][j]][k] + grid[i + 1][k]);
//                grid[i][j] += tmp;
//            }
//        }
//        int rtu{INT_MAX};
//        for (const auto &item: grid[0])rtu = min(rtu,item);
//        return rtu;
//    }
//};
//class Solution {
//public:
//    struct Node{
//        Node(int _b, int _e):b(_b), e(_e){}
//        int b,e,v = 0;
//        Node* left;
//        Node* right;
//    };
//    void pushup(Node* root){
//        root->v = root->right->v + root->left->v;
//    }
//    void build(Node* root){
//        if (root->b == root->e) return;
//        int mid = (root->b + root->e)/2;
//        if (mid < 0) mid += (root->b + root->e)%2; //取下整
//        root->left = new Node(root->b, mid);
//        root->right = new Node(mid+1, root->e);
//        build(root->left);
//        build(root->right);
//    }
//    void add(int idx, Node* root){
//        if (root->e < idx || root->b > idx) return;
//        if (root->b == root->e){
//            if (root->e == idx) ++root->v;
//            return;
//        }
//        add(idx,root->right);
//        add(idx,root->left);
//        pushup(root);
//    }
//    int get(int right, Node* root){
//        if (root->b > right) return 0;
//        if (root->e <= right) return root->v;
//        return get(right, root->right) + get(right, root->left);
//    }
//    int countPairs(vector<int>& nums, int target) {
//        Node* root = new Node(-50,50);
//        build(root);
//        int rtu = 0;
//        for (const auto &item: nums){
//            rtu += get(target-item-1, root);
//            add(item, root);
//        }
//        return rtu;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    int bit{};
//    int rtu{};
//    int pseudoPalindromicPaths (TreeNode* root) {
//        dfs(root);
//        return rtu;
//    }
//    void dfs(TreeNode* root){
//        bit ^= 1<<(root->val);
//        if (!root->right && !root->left) {
//            if (!bit || bit == (bit & -bit)) ++rtu;
//            bit ^= 1<<(root->val);
//            return;
//        }
//        if (root->right) dfs(root->right);
//        if (root->left) dfs(root->left);
//        bit ^= 1<<(root->val);
//    };
//};
//class Solution {
//public:
//    bool areSimilar(vector<vector<int>>& mat, int k) {
//        for (int i = 0; i < mat.size(); ++i){
//            for (int j = 0; j < mat[i].size(); ++j){
//                if (i%2){
//                    if (mat[i][j] != mat[i][(j+k)%mat[i].size()]) return false;
//                }else{
//                    if (mat[i][j] != mat[i][(50*mat[i].size()+j-k)%mat[i].size()]) return false;
//                }
//            }
//        }
//        return true;
//    }
//};
//class Solution {
//public:
//    int uniqueLetterString(string s) {
//        unordered_map<char, vector<int>> mp;
//        for (int i = 0; i < s.size(); ++i) {
//            if (!mp.count(s[i])) mp[s[i]].push_back(-1);
//            mp[s[i]].push_back(i);
//        }
//        int ret{};
//        for (auto &[k, v]: mp){
//            v.push_back(s.size());
//            for (int i = 1; i < v.size()-1; ++i) ret += (v[i] - v[i-1]) * (v[i+1] - v[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
//        map<int,list<int>> mp;
//        for (int i = 0; i < nums.size(); ++i) mp[nums[i]].emplace_back(i);
//        struct cmp{
//            bool operator ()(int a, int b) const{
//                return a<b;
//            }
//        };
//        int t = 0;
//        priority_queue<int,vector<int>,cmp> pnum;
//        priority_queue<int,vector<int>,cmp> pidx;
//        for (auto &[k,v]: mp){
//            if (k - t > limit){
//                while (!pnum.empty()){
//                    nums[pidx.top()] = pnum.top();
//                    pidx.pop();
//                    pnum.pop();
//                }
//            }
//            for (const auto &item: v){
//                pnum.push(k);
//                pidx.push(item);
//            }
//            t = k;
//        }
//        while (!pnum.empty()){
//            nums[pidx.top()] = pnum.top();
//            pidx.pop();
//            pnum.pop();
//        }
//        return nums;
//    }
//};
//class Solution {
//public:
//    bool isYuan(char c) {
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//    }
//    long long beautifulSubstrings(string s, int k) {
//        int d{2}, sum{};
//        for (; (d * d) % (4 * k); ++d);
//        unordered_map<int, unordered_map<int, int>> mp;
//        ++mp[0][0];
//        long long ret{};
//        for (int i = 0; i < s.size(); ++i){
//            sum += isYuan(s[i]) ? 1 : -1;
//            ret += mp[sum][(i+1)%d]++;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int sumSubarrayMins(vector<int>& arr) {
//        vector<long long> range(arr.size());
//        list<pair<int, int>> lst;
//        for (int i = 0; i < arr.size(); ++i){
//            while (!lst.empty() && lst.back().first >= arr[i]) lst.pop_back();
//            range[i] = lst.empty() ? -1 : lst.back().second;
//            lst.emplace_back(arr[i], i);
//        }
//        lst.clear();
//        for (int i = arr.size() - 1; i >= 0; --i){
//            while (!lst.empty() && lst.back().first > arr[i]) lst.pop_back();
//            cout<<((lst.empty() ? arr.size() : lst.back().second))<<"  "<<range[i]<<endl;
//            range[i] = 1ll * ((lst.empty() ? arr.size() : lst.back().second) - i) * (i - range[i]);
//            lst.emplace_back(arr[i], i);
//        }
//        long long rtu{};
//        const int MOD = 1e9+7;
//        for (int i = 0; i < range.size(); ++i){
//            rtu += (1ll * range[i] * arr[i])%MOD;
//            rtu %= MOD;
//        }
//        return rtu;
//    }
//};
//class Solution {
//public:
//    string entityParser(string text) {
//        unordered_map<string,string> mp{
//                {"&quot;","\""},
//                {"&apos;","\'"},
//                {"&gt;",">"},
//                {"&lt;","<"},
//                {"&frasl;","/"},
//                {"&amp;","&"},
//        };
//        string rtu{};
//        for (int i = 0; i < text.size(); ++i){
//            if (text[i] == '&'){
//                int a = text.find(";", i);
//                if (a != string::npos){
//                    string s{text.substr(i, a-i+1)};
//                    if (mp.count(s)){
//                        i = a;
//                        rtu.append(mp[s]);
//                        continue;
//                    }
//                }
//            }
//            rtu.push_back(text[i]);
//        }
//        return rtu;
//    }
//};
//class FrontMiddleBackQueue {
//private:
//    list<int> left;
//    list<int> right;
//    void balance(){
//        while (static_cast<int>(right.size()) - static_cast<int>(left.size()) > 1){
//            left.push_back(right.front());
//            right.pop_front();
//        }
//        while (left.size() > right.size()){
//            right.push_front(left.back());
//            left.pop_back();
//        }
//    }
//public:
//
//    FrontMiddleBackQueue() {}
//
//    void pushFront(int val) {
//        left.push_front(val);
//    }
//
//    void pushMiddle(int val) {
//        balance();
//        left.push_back(val);
//    }
//
//    void pushBack(int val) {
//        right.push_back(val);
//    }
//
//    int popFront() {
//        if (left.empty() && right.empty())return -1;
//        if (left.empty()) balance();
//        if (left.empty()){
//            int ret = right.front();
//            right.pop_front();
//            return ret;
//        }
//        int ret = left.front();
//        left.pop_front();
//        return ret;
//    }
//
//    int popMiddle() {
//        if (left.empty() && right.empty())return -1;
//        balance();
//        int ret;
//        if (left.size() == right.size()){
//            ret = left.back();
//            left.pop_back();
//        }else{
//            ret = right.front();
//            right.pop_front();
//        }
//        return ret;
//    }
//
//    int popBack() {
//        if (left.empty() && right.empty())return -1;
//        if (right.empty()) balance();
//        int ret = right.back();
//        right.pop_back();
//        return ret;
//    }
//};
//class SmallestInfiniteSet {
//public:
//    set<int> st;
//    SmallestInfiniteSet() {
//        for (int i = 1; i <= 1000; ++i) st.insert(i);
//    }
//
//    int popSmallest() {
//        int ret = *st.begin();
//        st.erase(st.begin());
//        return ret;
//    }
//
//    void addBack(int num) {
//        st.insert(num);
//    }
//};
//class Solution {
//public:
//    bool closeStrings(string word1, string word2) {
//        if (word1.size() != word2.size()) return false;
//        vector<int> vec1(26,0);
//        vector<int> vec2(26,0);
//        for (const auto &item: word1) ++vec1[item-'a'];
//        for (const auto &item: word2) ++vec2[item-'a'];
//        for (int i = 0; i < 26; ++i) if (vec2[i] && !vec1[i] || !vec2[i] && vec1[i]) return false;
//        std::sort(vec1.begin(), vec1.end());
//        std::sort(vec2.begin(), vec2.end());
//        for (int i = 0; i < 26; ++i) if (vec1[i] != vec2[i]) return false;
//        return true;
//    }
//};
//class Solution {
//public:
//    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
//        unordered_map<int, pair<int,int>> mp;
//        for (int i = 0; i < mat.size(); ++i){
//            for (int j = 0; j < mat[i].size(); ++j){
//                mp[mat[i][j]] = make_pair(i,j);
//            }
//        }
//        unordered_map<int,unordered_set<int>> xy,yx;
//        for (int i = 0; i < arr.size(); ++i){
//            auto p = mp[arr[i]];
//            xy[p.first].insert(p.second);
//            yx[p.second].insert(p.first);
//            if (xy[p.first].size() == mat[0].size() || yx[p.second].size() == mat.size())return i;
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    bool carPooling(vector<vector<int>>& trips, int capacity) {
//        int maxT = -1;
//        for (const auto &item: trips) maxT = max(maxT, item[2]);
//        vector<int> vec(maxT + 1, 0);
//        for (const auto &item: trips){
//            vec[item[1]] += item[0];
//            vec[item[2]] -= item[0];
//        }
//        int t = 0;
//        for (const auto &item: vec){
//            t += item;
//            if (t > capacity) return false;
//        }
//        return true;
//    }
//};
//class Solution {
//public:
//    int maxScore(vector<int>& cardPoints, int k) {
//        int sum = 0;
//        for (int i = 0; i < k; ++i) sum += cardPoints[i];
//        int ret = sum;
//        for (int i = 1; i <= k; ++i){
//            sum -= cardPoints[k - i];
//            sum += cardPoints[cardPoints.size() - i];
//            ret = max(ret, sum);
//        }
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    int t = 0;
//    TreeNode* bstToGst(TreeNode* root) {
//        if (root->right) bstToGst(root->right);
//        root->val = t += root->val;
//        if (root->left) bstToGst(root->left);
//        return root;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, list<int>> tree;
//    unordered_set<int> cache;
//    long long _ret{};
//    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
//        for (const auto &item: roads){
//            tree[item[0]].emplace_back(item[1]);
//            tree[item[1]].emplace_back(item[0]);
//        }
//        dfs(0, seats);
//        return _ret;
//    }
//    int dfs(int idx, int seats){
//        int ret{1};
//        cache.insert(idx);
//        for (const auto &item: tree[idx]){
//            if (cache.count(item)) continue;
//            ret += dfs(item, seats);
//        }
//        if (idx) _ret += (ret + seats - 1) / seats;
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<list<int>> tree;
//    unordered_map<int, int> getSizeByNode, memory[2];
//    unordered_set<int> cache;
//    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
//        tree.resize(n);
//        for (const auto &item: edges){
//            tree[item[0]].emplace_back(item[1]);
//            tree[item[1]].emplace_back(item[0]);
//        }
//        unordered_set<int> cache;
//        for (const auto &item: trips) dfs(item[0], item[1]);
//        return getMinPrice(0,price, true);
//    }
//    bool dfs(int rot, int target){
//        if (rot == target){
//            ++getSizeByNode[rot];
//            return true;
//        }
//        cache.insert(rot);
//        bool ret = false;
//        for (const auto &item: tree[rot]){
//            if (cache.count(item)) continue;
//            ret |= dfs(item, target);
//        }
//        if (ret) ++getSizeByNode[rot];
//        cache.erase(rot);
//        return ret;
//    }
//    int getMinPrice(int rot, vector<int>& price, bool b){
//        if (memory[b].count(rot)) return memory[b][rot];
//        int p = getSizeByNode[rot] * price[rot], ret = 0;
//        cache.insert(rot);
//        if (b){
//            int sum1 = 0,sum2 = 0;
//            for (const auto &item: tree[rot]){
//                if (cache.count(item)) continue;
//                sum1 += getMinPrice(item,price,true);
//                sum2 += getMinPrice(item,price, false);
//            }
//            ret = min((p/2)+sum2, p+sum1);
//        }else{
//            for (const auto &item: tree[rot]){
//                if (cache.count(item)) continue;
//                p += getMinPrice(item,price,true);
//            }
//            ret = p;
//        }
//        cache.erase(rot);
//        memory[b][rot] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, list<int>> NotVectorTree;
//    unordered_map<int, unordered_set<int>> t;
//    vector<int> cache;
//    int ret{};
//    int minReorder(int n, vector<vector<int>>& connections) {
//        cache.resize(n, 0);
//        for (const auto &item: connections){
//            NotVectorTree[item[0]].emplace_back(item[1]);
//            NotVectorTree[item[1]].emplace_back(item[0]);
//            t[item[1]].insert(item[0]);
//        }
//        dfs(0);
//        return ret;
//    }
//    void dfs(int idx){
//        cache[idx] = 1;
//        for (const auto &item: NotVectorTree[idx]){
//            if (cache[item]) continue;
//            if (!(t.count(idx) && t[idx].count(item))) ++ret;
//            dfs(item);
//        }
//    }
//};
//class Solution {
//public:
//    map<int,list<pair<int,int>>> mp;
//    unordered_map<int, long long> cache;
//    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
//        for (const auto &item: rides) mp[item[0]].emplace_back(item[1], item[2]);
//        return dfs(0);
//    }
//    long long dfs(int idx){
//        auto it = mp.lower_bound(idx);
//        if (it == mp.end()) return 0;
//        if (cache.count(it->first)) return cache[it->first];
//        long long ret = dfs(it->first + 1);
//        for (const auto &item: it->second) ret = max(item.first - it->first + item.second + dfs(item.first), ret);
//        cache[it->first] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> ns;
//    inline bool isBeautifulNumber(int n){
//        while (n){
//            ++ns[n%10];
//            n/=10;
//        }
//        for (int i = 0; i < 10; ++i) if (ns[i] && ns[i] != i) return false;
//        return true;
//    }
//    int nextBeautifulNumber(int n) {
//        ns.resize(10, 0);
//        while (++n){
//            fill(ns.begin(), ns.end(), 0);
//            if (isBeautifulNumber(n)) return n;
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    int climbStairs(int n) {
//        if (n <= 2) return n;
//        vector<int> dp(n);
//        dp[0] = 1;
//        dp[1] = 2;
//        for (int i = 2; i < n; ++i) dp[i] = dp[i-1] + dp[i-2];
//        return dp.back();
//    }
//};
//class DisjSet //这个并查集网上抄的
//{
//  private:
//    std::vector<int> parent;
//    std::vector<int> rank; // 秩
//
//  public:
//    DisjSet(int max_size) : parent(std::vector<int>(max_size)),
//                            rank(std::vector<int>(max_size, 0))
//    {
//        for (int i = 0; i < max_size; ++i)
//            parent[i] = i;
//    }
//    int find(int x)
//    {
//        return x == parent[x] ? x : (parent[x] = find(parent[x]));
//    }
//    void to_union(int x1, int x2)
//    {
//        int f1 = find(x1);
//        int f2 = find(x2);
//        if (rank[f1] > rank[f2])
//            parent[f2] = f1;
//        else
//        {
//            parent[f1] = f2;
//            if (rank[f1] == rank[f2])
//                ++rank[f2];
//        }
//    }
//    bool is_same(int e1, int e2)
//    {
//        return find(e1) == find(e2);
//    }
//};
//class Solution {
//public:
//    struct cmp{
//        bool operator()(tuple<int,int,int> t1, tuple<int,int,int> t2){
//            return get<0>(t1) > get<0>(t2);
//        }
//    };
//    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, cmp> pque;
//    int minimumEffortPath(vector<vector<int>>& heights) {
//        int n = heights[0].size(), endNode = n * (heights.size() - 1) + heights[0].size() - 1;
//        DisjSet dsu(heights.size() * heights[0].size());
//        for (int i = 0; i < heights.size(); ++i){
//            for (int j = 0; j < heights[i].size(); ++j){
//                if (i < heights.size() - 1) pque.emplace(abs(heights[i][j] - heights[i + 1][j]), i * n + j, (i + 1) * n + j);
//                if (j < heights[i].size() - 1) pque.emplace(abs(heights[i][j] - heights[i][j + 1]), i * n + j, i * n + j + 1);
//            }
//        }
//        while (!pque.empty()){
//            auto& [x, y, z] = pque.top();
//            dsu.to_union(y, z);
//            if (dsu.is_same(0, endNode)) return x;
//            pque.pop();
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    vector<int> secondGreaterElement(vector<int>& nums) {
//        list<int> stk;
//        struct cmp{
//            bool operator()(pair<int, int> x, pair<int, int> y){
//                return x.first > y.first;
//            }
//        };
//        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pque;
//        for (int i = 0; i < nums.size(); ++i){
//            while (!pque.empty() && nums[i] > pque.top().first){
//                nums[pque.top().second] = nums[i];
//                pque.pop();
//            }
//            while (!stk.empty() && nums[i] > nums[stk.back()]){
//                pque.emplace(nums[stk.back()], stk.back());
//                stk.pop_back();
//            }
//            stk.push_back(i);
//        }
//        while (!pque.empty()){
//            nums[pque.top().second] = -1;
//            pque.pop();
//        }
//        for (const auto &item: stk) nums[item] = -1;
//        return nums;
//    }
//};
//class Solution {
//public:
//    string makeSmallestPalindrome(string s) {
//        for (int i = 0; i < s.size() >> 1; ++i) {
//            if (s[i] > s[s.size() - i - 1]) s[i] = s[s.size() - i - 1];
//            else s[s.size() - i - 1] = s[i];
//        }
//        return s;
//    }
//};
//class Solution {
//public:
//    bool possibleToStamp(vector<vector<int>>& grid, int stampHeight, int stampWidth) {
//        if (grid.size() < stampHeight || grid[0].size() < stampWidth) {
//            for (const auto &temp: grid) for (const auto &i: temp) if (!i) return false;
//            return true;
//        }
//        vector<vector<int>> psum(grid.size(),vector<int> (grid[0].size())), diff(grid.size(),vector<int> (grid[0].size()));
//        for (int i = 0; i < grid.size(); ++i){
//            for (int j = 0; j < grid[i].size(); ++j){
//                psum[i][j] = grid[i][j];
//                if (i - 1 >= 0) psum[i][j] += psum[i - 1][j];
//                if (j - 1 >= 0) psum[i][j] += psum[i][j - 1];
//                if (j - 1 >= 0 && i - 1 >= 0) psum[i][j] -= psum[i - 1][j - 1];
//                diff[i][j] = grid[i][j];
//                if (i - 1 >= 0) diff[i][j] -= grid[i - 1][j];
//                if (j - 1 >= 0) diff[i][j] -= grid[i][j - 1];
//                if (j - 1 >= 0 && i - 1 >= 0) diff[i][j] += grid[i - 1][j - 1];
//            }
//        }
//        for (int i = 0; i <= grid.size() - stampHeight; ++i){
//            for (int j = 0; j <= grid[i].size() - stampWidth; ++j){
//                int tsum = psum[i + stampHeight - 1][j + stampWidth - 1];
//                if (i - 1 >= 0) tsum -= psum[i - 1][j + stampWidth - 1];
//                if (j - 1 >= 0) tsum -= psum[i + stampHeight - 1][j - 1];
//                if (j - 1 >= 0 && i - 1 >= 0) tsum += psum[i - 1][j - 1];
//                if (!tsum){
//                    ++diff[i][j];
//                    if (i + stampHeight < grid.size()) --diff[i + stampHeight][j];
//                    if (j + stampWidth < grid[i].size()) --diff[i][j + stampWidth];
//                    if (i + stampHeight < grid.size() && j + stampWidth < grid[i].size()) ++diff[i + stampHeight][j + stampWidth];
//                }
//            }
//        }
//        for (int i = 0; i < grid.size(); ++i){
//            for (int j = 0; j < grid[i].size(); ++j){
//                if (i - 1 >= 0) diff[i][j] += diff[i - 1][j];
//                if (j - 1 >= 0) diff[i][j] += diff[i][j - 1];
//                if (j - 1 >= 0 && i - 1 >= 0) diff[i][j] -= diff[i - 1][j - 1];
//                if (!diff[i][j]) return false;
//            }
//        }
//        return true;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    TreeNode* reverseOddLevels(TreeNode* root) {
//        vector<TreeNode*> vec,tmp;
//        bool bol = false;
//        vec.push_back(root);
//        while (!vec.empty()){
//            if (bol){
//                for (int i = 0; i < vec.size() >> 1; ++i){
//                    int t = vec[i]->val;
//                    vec[i]->val = vec[vec.size() - i - 1]->val;
//                    vec[vec.size() - i - 1]->val = t;
//                }
//            }
//            tmp.clear();
//            for (const auto &item: vec){
//                if (item->left) tmp.push_back(item->left);
//                if (item->right) tmp.push_back(item->right);
//            }
//            bol ^= true;
//            vec = std::move(tmp);
//        }
//        return root;
//    }
//};
//class CountIntervals {
//private:
//    struct Node{
//        int v,b,e;
//        Node* left;
//        Node* right;
//        Node(int _b, int _e):b(_b), e(_e), v(0), left(nullptr), right(nullptr){}
//    };
//    Node* root;
//    inline void pushdown(Node* n){
//        if (n->v == n->e - n->b + 1){
//            allRange(n->left);
//            allRange(n->right);
//        }
//    }
//    inline void allRange(Node* n){
//        n->v = n->e - n->b + 1;
//    }
//    inline void pushup(Node* n){
//        n->v = n->left->v + n->right->v;
//    }
//    void setRange(int left, int right, Node* n){
//        if (n->b > right || n->e < left) return;
//        if (n->b >= left && n->e <= right){
//            allRange(n);
//            return;
//        }
//        if (!n->left){
//            int m = (n->b + n->e) / 2;
//            n->left = new Node(n->b, m);
//            n->right = new Node(m+1, n->e);
//            if (n->v){
//                allRange(n->left);
//                allRange(n->right);
//            }
//        }
//        pushdown(n);
//        setRange(left, right, n->left);
//        setRange(left, right, n->right);
//        pushup(n);
//    }
//public:
//    CountIntervals() {
//        root = new Node(1,1e9);
//    }
//
//    void add(int left, int right) {
//        setRange(left, right, root);
//    }
//
//    int count() {
//        return root->v;
//    }
//};
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        for (int i = 2; i < cost.size(); ++i) cost[i] += min(cost[i - 1], cost[i - 2]);
//        return min(cost[cost.size() - 1], cost[cost.size() - 2]);
//    }
//};
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        int l = 0, r = nums.size() - 1;
//        while (r > l){
//            int m = (l + r) / 2;
//            if (nums[m] > nums[m + 1]){
//                r = m;
//            }else{
//                l = m + 1;
//            }
//        }
//        return r;
//    }
//};
//class Solution {
//public:
//    inline int getMaxIdx(vector<int>& vec){
//        int ret = 0, mx = vec[0];
//        for (int i = 1; i < vec.size(); ++i){
//            if (vec[i] > mx){
//                mx = vec[i];
//                ret = i;
//            }
//        }
//        return ret;
//    }
//    vector<int> findPeakGrid(vector<vector<int>>& mat) {
//        int l = 0, r = mat.size() - 1;
//        while (r > l){
//            int m = (l + r) / 2, idx = getMaxIdx(mat[m]);
//            if (mat[m][idx] > mat[m + 1][idx]){
//                r = m;
//            }else{
//                l = m + 1;
//            }
//        }
//        return {r, getMaxIdx(mat[r])};
//    }
//};
//class Solution {
//public:
//    bool isAcronym(vector<string>& words, string s) {
//        if (words.size() != s.size()) return false;
//        int i{};
//        for (const auto &item: s) if (item != words[i++][0]) return false;
//        return true;
//    }
//};
//class Solution {
//public:
//    long long maximumSumOfHeights(vector<int>& maxHeights) {
//        vector<long long> vec(maxHeights.size());
//        vector<int> stk;
//        long long ret = -1, tmp;
//        for (int i = 0; i < maxHeights.size(); ++i){
//            while (!stk.empty() && maxHeights[i] <= maxHeights[stk.back()]) stk.pop_back();
//            if (stk.empty()) vec[i] = 1ll * (i + 1) * maxHeights[i];
//            else vec[i] = vec[stk.back()] + 1ll * (i - stk.back()) * maxHeights[i];
//            stk.push_back(i);
//        }
//        stk.clear();
//        for (int i = maxHeights.size() - 1; i >= 0; --i){
//            while (!stk.empty() && maxHeights[i] <= maxHeights[stk.back()]) stk.pop_back();
//            if (stk.empty()) tmp = 1ll * (maxHeights.size() - i) * maxHeights[i];
//            else tmp = vec[stk.back()] + 1ll * (stk.back() - i) * maxHeights[i];
//            ret = max(tmp + vec[i] - maxHeights[i], ret);
//            vec[i] = tmp;
//            stk.push_back(i);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minimumMountainRemovals(vector<int>& nums) {
//        vector<int> vec(nums.size());
//        vec[0] = 1;
//        for (int i = 1; i < nums.size(); ++i){
//            int mx = 0;
//            for (int j = 0; j < i; ++j) if (nums[i] > nums[j]) mx = max(mx, vec[j]);
//            vec[i] = mx + 1;
//        }
//        int ret = 0;
//        vec.back() = 1;
//        for (int i = nums.size() - 2; i > 0; --i){
//            int mx = 0;
//            for (int j = i + 1; j < nums.size(); ++j) if (nums[i] > nums[j]) mx = max(mx, vec[j]);
//            if (vec[i] != 1 && mx != 0) ret = max(ret, vec[i] + mx);
//            vec[i] = mx + 1;
//        }
//        return nums.size() - ret;
//    }
//};
//class Solution {
//public:
//    int minimumMountainRemovals(vector<int>& nums) {
//        vector<int> vec(nums.size()), g;
//        for (int i = 0; i < nums.size(); ++i){
//            auto it = lower_bound(g.begin(), g.end(), nums[i]);
//            if (it == g.end()){
//                g.push_back(nums[i]);
//                vec[i] = g.size();
//            }else{
//                *it = nums[i];
//                vec[i] = it - g.begin() + 1;
//            }
//        }
//        g.clear();
//        int ret = 0;
//        for (int i = nums.size() - 1; i >= 0; --i){
//            auto it = lower_bound(g.begin(), g.end(), nums[i]);
//            int tmp = vec[i];
//            if (it == g.end()){
//                g.push_back(nums[i]);
//                vec[i] = g.size();
//            }else{
//                *it = nums[i];
//                vec[i] = it - g.begin() + 1;
//            }
//            if (vec[i] != 1 && tmp != 1) ret = max(ret, tmp + vec[i] - 1);
//        }
//        return nums.size() - ret;
//    }
//};
//class Solution {
//public:
//    int minStoneSum(vector<int>& piles, int k) {
//        priority_queue<int> pque(piles.begin(), piles.end());
//        for (int i = 0; i < k; ++i){
//            int tmp = pque.top();
//            pque.pop();
//            tmp -= tmp/2;
//            pque.push(tmp);
//        }
//        int ret = 0;
//        while (!pque.empty()){
//            ret += pque.top();
//            pque.pop();
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long minimumPerimeter(long long neededApples) {
//        int right = cbrt(neededApples), left = 0;
//        while (right > left){
//            int mid = (right + left) / 2;
//            //2n(n+1)(2n+1) 没推出来看题解的
//            if (2ll * mid * (mid + 1) * (mid * 2 + 1) >= neededApples)
//                right = mid;
//            else
//                left = mid + 1;
//        }
//        return 8 * left;
//    }
//};
//class Solution {
//public:
//    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
//        if (tomatoSlices > 4 * cheeseSlices
//        || tomatoSlices < 2 * cheeseSlices
//        || tomatoSlices % 2)
//            return {};
//        tomatoSlices = (4 * cheeseSlices - tomatoSlices) / 2;
//        return {cheeseSlices - tomatoSlices, tomatoSlices};
//    }
//};
//class Solution {
//public:
//    int isWinner(vector<int>& player1, vector<int>& player2) {
//        int s1 = 0, s2 = 0, tmp1, tmp2;
//        for (int i = 0; i < player1.size(); ++i){
//            tmp1 = player1[i];
//            tmp2 = player2[i];
//            if (s1) {
//                tmp1 *= 2;
//                --s1;
//            }
//            if (s2) {
//                tmp2 *= 2;
//                --s2;
//            }
//            if (player1[i] == 10) s1 = 2;
//            if (player2[i] == 10) s2 = 2;
//            if (i){
//                player1[i] = player1[i - 1] + tmp1;
//                player2[i] = player2[i - 1] + tmp2;
//            }
//        }
//        return player2.back() == player1.back() ? 0 : ((player2.back() > player1.back()) + 1);
//    }
//};
//class Solution {
//public:
//    long long minCost(vector<int>& nums, int x) {
//        vector<int> mins(nums.size(), INT_MAX);
//        long long ret = LONG_LONG_MAX, sum = 0, xll = x;
//        for (int i = 0; i < nums.size(); ++i,sum = 0){
//            for (int j = 0; j < nums.size(); ++j) mins[j] = min(mins[j], nums[(j + i) % nums.size()]);
//            for (const auto &item: mins) sum += item;
//            ret = min(xll * i + sum, ret);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int buyChoco(vector<int>& prices, int money) {
//        int m1 = prices[0], m2 = prices[1];
//        if (m1 > m2) swap(m1, m2);
//        for (int i = 2; i < prices.size(); ++i){
//            if (prices[i] <= m1) {
//                m2 = m1;
//                m1 = prices[i];
//            } else if (prices[i] < m2){
//                m2 = prices[i];
//            }
//        }
//        return m1 + m2 > money ? money : money - m1 - m2;
//    }
//};
//class Solution {
//public:
//    inline int get1Size(int num){
//        int ret = 0;
//        while (num) {
//            if (num & 1) ++ret;
//            num >>= 1;
//        }
//        return ret;
//    }
//    inline int lowbit(int num){
//        return num & -num;
//    }
//    vector<int> se;
//    int m, n;
//    int maxStudents(vector<vector<char>>& seats) {
//        m = seats.size();
//        n = seats[0].size();
//        se.resize(m, 0);
//        for (int i = 0; i < seats.size(); ++i){
//            for (const auto &item: seats[i]){
//                se[i] <<= 1;
//                if (item == '.') ++se[i];
//            }
//        }
//        return dfs(m - 1, se[m - 1]);
//    }
//    unordered_map<int, unordered_map<int, int>> memo;
//    int dfs(int i, int j){
//        if (memo.count(i))
//            if (memo[i].count(j))
//                return memo[i][j];
//        int ret;
//        if (!i){
//            if (!j) return 0;
//            ret = dfs(i, j & ~(lowbit(j) * 3)) + 1;
//        }else{
//            ret = dfs(i - 1, se[i - 1]);
//            for (int s = j; s; s = (s - 1) & j) {
//                if (s & (s >> 1)) continue;
//                int t = se[i - 1] & ~((s >> 1) | (s << 1));
//                ret = max(ret, dfs(i - 1, t) + get1Size(s));
//            }
//        }
//        memo[i][j] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long minCost(vector<int>& nums, int x) { //2735.收集巧克力 二分+单调队列 参考:https://leetcode.cn/problems/collecting-chocolates/solutions/2582376/er-fen-fa-hua-dong-chuang-kou-zui-xiao-z-f1o4/?envType=daily-question&envId=2023-12-28
//        int l = 0, r = nums.size() - 1;
//        while (r > l + 1){
//            int m = (l + r) / 2;
//            if (getCostByXSize(nums, m) <= getCostByXSize(nums, m + 1) + x){
//                r = m;
//            }else{
//                l = m;
//            }
//        }
//        return min(getCostByXSize(nums, l), getCostByXSize(nums, l + 1) + x) + static_cast<long long>(x) * l;
//    }
//    unordered_map<int, long long> memo;
//    long long getCostByXSize(vector<int>& nums, int xSize){
//        if (memo.count(xSize)) return memo[xSize];
//        long long ret = 0;
//        list<pair<int, int>> lst;
//        for (int i = 0; i < xSize; ++i) {
//            while (!lst.empty() && lst.back().first >= nums[i]) lst.pop_back();
//            lst.emplace_back(nums[i], i);
//        }
//        for (int i = 0; i < nums.size(); ++i){
//            while (!lst.empty() && lst.back().first >= nums[(i + xSize) % nums.size()]) lst.pop_back();
//            lst.emplace_back(nums[(i + xSize) % nums.size()], (i + xSize) % nums.size());
//            ret += lst.front().first;
//            if (lst.front().second == i) lst.pop_front();
//        }
//        memo[xSize] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    const array<string, 7> weekstrs{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//    string dayOfTheWeek(int day, int month, int year) {
//        tm dt{};
//        dt.tm_year = year - 1900;
//        dt.tm_mon = month - 1;
//        dt.tm_mday = day;
//        auto t = mktime(&dt);
//        return weekstrs[localtime(&t)->tm_wday];
//    }
//};
//class Solution {
//public:
//    bool hasTrailingZeros(vector<int>& nums) {
//        int cut = 0;
//        for (const auto &item: nums) if ((item & 1) == 0) ++cut;
//        return cut >= 2;
//    }
//};
//class Solution {
//public:
//    int maximumLength(string s) {
//        unordered_map<char, priority_queue<int>> cache;
//        char t = 0;
//        int ts;
//        for (const auto &item: s){
//            if (item != t) {
//                if (t){
//                    //cout<<t<<" "<<ts<<endl;
//                    cache[t].push(ts);
//                }
//                t = item;
//                ts = 1;
//            }else{
//                ++ts;
//            }
//        }
//        cache[t].push(ts);
//        int ret = -1;
//        for ( auto &item: cache){
//            //cout<<item.second.top()<<" "<<item.second.size()<<endl;
//            if (item.second.top() >= 3) ret = max(ret, item.second.top() - 2);
//            if (item.second.size() >= 2 && item.second.top() >= 2){
//                int top = item.second.top();
//                item.second.pop();
//                int mi = min(top - 1, item.second.top());
//                ret = max(ret, mi);
//                item.second.push(top);
//            }
//            if (item.second.size() >= 3) {
//                item.second.pop();
//                item.second.pop();
//                ret = max(ret, item.second.top());
//            }
//
//
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int dayOfYear(string date) {
//        tm dt{};
//        stringstream ss{date};
//        ss >> get_time(&dt, "%Y-%m-%d"); //In template: reference to non-static member function must be called 应该是版本原因
//        return dt.tm_yday + 1;
//    }
//};
//class Solution {
//public:
//    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
//        int ddque = 0, mx = 0, cb = 0, ret = -1, i = 0;
//        while (i < customers.size() || ddque){
//            if (i < customers.size()) ddque += customers[i];
//            ++i;
//            if (ddque >= 4){
//                ddque -= 4;
//                cb += boardingCost * 4;
//            }else{
//                cb += boardingCost * ddque;
//                ddque = 0;
//            }
//            cb -= runningCost;
//            if (cb > mx){
//                mx = cb;
//                ret = i;
//            }
//        }
//        return ret;
//    }
//};
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    unordered_map<ListNode*, int> memo;
//    int dfs(ListNode* head){
//        if (head == nullptr) return 0;
//        if (memo.count(head)) return memo[head];
//        int ret = max(head->val, dfs(head->next));
//        memo[head] = ret;
//        return ret;
//    }
//    unordered_set<ListNode*> st;
//    ListNode* removeNodes(ListNode* head) {
//        ListNode* tmp = head;
//        bool bol = false;
//        while (tmp != nullptr){
//            if (bol){
//                int nm = dfs(tmp);
//                if (nm > tmp->val) st.insert(tmp);
//            }else{
//                int nm = dfs(tmp);
//                if (nm <= tmp->val) {
//                    head = tmp;
//                    bol = true;
//                }
//            }
//            tmp = tmp->next;
//        }
//        tmp = head;
//        while (tmp != nullptr){
//            while (tmp->next != nullptr && st.count(tmp->next)) tmp->next = tmp->next->next;
//            tmp = tmp->next;
//        }
//        return head;
//    }
//};
//class Solution {
//public:
//    ListNode* removeNodes(ListNode* head) {
//        vector<ListNode*> stk;
//        while (head){
//            while (!stk.empty() && stk.back()->val < head->val) stk.pop_back();
//            stk.push_back(head);
//            head = head->next;
//        }
//        for (int i = 0; i < stk.size() - 1; ++i) stk[i]->next = stk[i + 1];
//        return stk.front();
//    }
//};
//class Solution {
//public:
//    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
//        int m = matrix.size(), n = matrix[0].size(), ret = -1;
//        vector<int> vec(m,0);
//        for (int i = 0; i < m; ++i){
//            for (int j = 0; j < n; ++j) {
//                vec[i] <<= 1;
//                if (matrix[i][j]) vec[i] |= 1;
//            }
//        }
//        for (int i = (1 << n) - 1; i >= (1 << numSelect) - 1; --i) {
//            if (__builtin_popcount(i) == numSelect){
//                int cut = 0;
//                for (const auto &item: vec) if (item == (i & item)) ++cut;
//                ret = max(ret, cut);
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> canSeePersonsCount(vector<int>& heights) {
//        vector<int> stk;
//        for (int i = heights.size() - 1; i >= 0; --i){
//            int h = heights[i];
//            heights[i] = 0;
//            while (!stk.empty() && h >= stk.back()) {
//                stk.pop_back();
//                ++heights[i];
//            }
//            if (!stk.empty()) ++heights[i];
//            stk.push_back(h);
//        }
//        return heights;
//    }
//};
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    ListNode* insertGreatestCommonDivisors(ListNode* head) {
//        ListNode* tmp = head;
//        while (tmp->next){
//            int a = tmp->val, b = tmp->next->val;
//            while (b){
//                int t = a%b;
//                a = b;
//                b = t;
//            }
//            tmp->next = new ListNode(a, tmp->next);
//            tmp = tmp->next->next;
//        }
//        return head;
//    }
//};
//class Solution {
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        array<int, 26> arr{};
//        for (const auto &item: magazine) ++arr[item - 'a'];
//        for (const auto &item: ransomNote) if (!arr[item - 'a']--) return false;
//        return true;
//    }
//};
//class Solution {
//public:
//    int numberOfBoomerangs(vector<vector<int>>& points) {
//        int ret = 0;
//        unordered_map<int, int> mp;
//        for (int i = 0; i < points.size(); ++i, mp.clear()){
//            for (int j = 0; j < points.size(); ++j) if (j != i) ++mp[(points[i][0] - points[j][0]) * (points[i][0] - points[j][0]) + (points[i][1] - points[j][1]) * (points[i][1] - points[j][1])];
//            for (const auto &item: mp) if (item.second != 1) ret += item.second * (item.second - 1);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    string ss;
//    vector<string> ds;
//    int minExtraChar(string s, vector<string>& dictionary) {
//        ss = std::move(s);
//        ds = std::move(dictionary);
//        return ss.size() - dfs(0);
//    }
//    inline bool is_eq(int bg, string& s){
//        for (const auto &item: s) if (item != ss[bg++]) return false;
//        return true;
//    }
//    unordered_map<int, int> memo;
//    int dfs(int idx){
//        if (idx >= ss.size()) return 0;
//        if (memo.count(idx)) return memo[idx];
//        int ret = dfs(idx + 1);
//        for (string &item: ds)
//            if (idx + item.size() <= ss.size() && is_eq(idx, item))
//                ret = max(ret, dfs(idx + item.size()) + (int)item.size());
//        memo[idx] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minLength(string s) {
//        vector<char> stk;
//        for (const auto &item: s){
//            if (!stk.empty()){
//                if (item == 'B' && stk.back() == 'A'){
//                    stk.pop_back();
//                    continue;
//                }
//                if (item == 'D' && stk.back() == 'C'){
//                    stk.pop_back();
//                    continue;
//                }
//            }
//            stk.push_back(item);
//        }
//        return stk.size();
//    }
//};
//class Solution {
//public:
//    int addMinimum(string word) {
//        int ret = 1;
//        for (int i = 1; i < word.size(); ++i) if (word[i] <= word[i - 1]) ++ret;
//        return 3 * ret - word.size();
//    }
//};
//class Solution {
//public:
//    unordered_map<string, int> mp;
//    int countWords(vector<string>& words1, vector<string>& words2) {
//        for (const auto &item: words1) ++mp[item];
//        for (const auto &item: words2) if (mp[item] <= 1) --mp[item];
//        int ret = 0;
//        for (const auto &item: mp) if (!item.second) ++ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    string repeatLimitedString(string s, int repeatLimit) {
//        map<char, int> mp;
//        int sz = 0;
//        for (const auto &item: s) ++mp[item];
//        s.clear();
//        while (!mp.empty()){
//            auto it = mp.rbegin();
//            if (sz == repeatLimit){
//                if (mp.size() <= 1) break;
//                ++it;
//                s.push_back(it->first);
//                --it->second;
//                if (!it->second) mp.erase(it->first);
//                sz = 0;
//            }else{
//                s.push_back(it->first);
//                --it->second;
//                ++sz;
//                if (!it->second) {
//                    mp.erase(it->first);
//                    sz = 0;
//                }
//            }
//        }
//        return s;
//    }
//};
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode* ret = head;
//        while (head){
//            while (head->next && head->val == head->next->val) head->next = head->next->next;
//            head = head->next;
//        }
//        return ret;
//    }
//};
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//class Solution {
//public:
//    unordered_map<int, int> mp;
//    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode* ret = head;
//        while (head){
//            ++mp[head->val];
//            head = head->next;
//        }
//        while (ret && mp[ret->val] != 1) ret = ret->next;
//        head = ret;
//        while (head && head->next){
//            if (mp[head->next->val] != 1) head->next = head->next->next;
//            else head = head->next;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maximumNumberOfStringPairs(vector<string>& words) {
//        unordered_set<string> st;
//        int ret = 0;
//        for (string& item: words){
//            if (st.count(item)){
//                st.erase(item);
//                ++ret;
//            }else{
//                reverse(item.begin(), item.end());
//                st.insert(item);
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long minimumRemoval(vector<int>& beans) {
//        sort(beans.begin(), beans.end());
//        vector<long long> prev_sum(beans.size());
//        prev_sum[0] = beans[0];
//        for (int i = 1; i < prev_sum.size(); ++i) prev_sum[i] = beans[i] + prev_sum[i - 1];
//        long long ret = prev_sum.back() - (long long)beans.size() * beans.front();
//        long long sum = 0;
//        for (int i = beans.size() - 1; i > 0; --i){
//            sum += beans[i];
//            ret = min(ret, prev_sum[i - 1] + sum - (long long)(beans.size() - i) * beans[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
//        vector<string> ret;
//        string t;
//        for (const auto &item: words){
//            stringstream ss;
//            ss << item;
//            while (getline(ss, t, separator))
//                if (!t.empty()) ret.push_back(t);
//        }
//        return ret;
//    }
//};
//class Trie {
//private:
//    struct Node{
//        string flag;
//        unordered_map<char, Node*> tre;
//    };
//    Node* root;
//public:
//    Trie() {
//        root = new Node;
//    }
//    void insert(string word) {
//        Node* tmp = root;
//        for (const auto &item: word){
//            if (!tmp->tre.count(item)) tmp->tre[item] = new Node;
//            tmp = tmp->tre[item];
//        }
//        tmp->flag = word;
//    }
//    bool search(string word) {
//        Node* tmp = root;
//        for (const auto &item: word){
//            if (!tmp->tre.count(item)) return false;
//            tmp = tmp->tre[item];
//        }
//        if (tmp->flag.empty()) return false;
//        return true;
//    }
//    bool startsWith(string prefix) {
//        Node* tmp = root;
//        for (const auto &item: prefix){
//            if (!tmp->tre.count(item)) return false;
//            tmp = tmp->tre[item];
//        }
//        return true;
//    }
//};
//class Solution {
//public:
//    int maximumSwap(int num) {
//        vector<pair<char, int>> stk;
//        string s = to_string(num);
//        int ret = 0;
//        for (int i = s.size() - 1; i >= 0; --i){
//            while (!stk.empty() && stk.back().first < s[i]) stk.pop_back();
//            stk.emplace_back(s[i], i);
//            swap(s[i], s[stk.front().second]);
//            ret = max(ret, stoi(s));
//            swap(s[i], s[stk.front().second]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int alternatingSubarray(vector<int>& nums) {
//        int ret = -1, sz = 1, d = 1;
//        for (int i = 1; i < nums.size(); ++i){
//            if (nums[i] - nums[i - 1] == d){
//                ++sz;
//                ret = max(ret, sz);
//                d *= -1;
//            }else if (nums[i] - nums[i - 1] == 1){
//                sz = 2;
//                ret = max(ret, 2);
//                d = -1;
//            }else{
//                sz = 1;
//                d = 1;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long maximumSumOfHeights(vector<int>& maxHeights) {
//        long long ret = -1, tmp;
//        vector<int> stk;
//        vector<long long> maxarr(maxHeights.size());
//        for (int i = 0; i < maxHeights.size(); ++i){
//            while (!stk.empty() && maxHeights[stk.back()] > maxHeights[i]) stk.pop_back();
//            if (stk.empty()) maxarr[i] = 1ll * (i + 1) * maxHeights[i];
//            else maxarr[i] = 1ll * (i - stk.back()) * maxHeights[i] + maxarr[stk.back()];
//            stk.push_back(i);
//        }
//        stk.clear();
//        for (int i = maxHeights.size() - 1; i >= 0; --i){
//            while (!stk.empty() && maxHeights[stk.back()] > maxHeights[i]) stk.pop_back();
//            tmp = maxarr[i];
//            if (stk.empty()) maxarr[i] = 1ll * (maxHeights.size() - i) * maxHeights[i];
//            else maxarr[i] = 1ll * (stk.back() - i) * maxHeights[i] + maxarr[stk.back()];
//            stk.push_back(i);
//            ret = max(ret, maxarr[i] + tmp - maxHeights[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
//        int ret = 0;
//        for (int i = 0; i < nums.size(); ++i) if (__builtin_popcount(i) == k) ret += nums[i];
//        return ret;
//    }
//};
//class Solution {
//public:
//    bool isOk(long long x, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost){
//        for (const auto &gs: composition){
//            long long money = 0;
//            for (int i = 0; i < gs.size(); ++i){
//                if (stock[i] >= x * gs[i]) continue;
//                money += (x * gs[i] - stock[i]) * cost[i];
//                if (money > budget) break;
//            }
//            if (money <= budget) return true;
//        }
//        return false;
//    }
//    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
//        int left = 0, right = 2e8;
//        while (right > left){
//            int mid = (left + right + 1) / 2;
//            if (isOk(mid, budget, composition, stock, cost))
//                left = mid;
//            else
//                right = mid - 1;
//        }
//        return right;
//    }
//};
//class Solution {
//public:
//    string r, k;
//    vector<vector<int>> memo;
//    int findRotateSteps(string ring, string key) {
//        r = std::move(ring);
//        k = std::move(key);
//        memo.resize(r.size(), vector<int>(k.size(), -1));
//        return dfs(0, 0);
//    }
//    int dfs(int idx, int dep){
//        if (dep >= k.size()) return 0;
//        if (memo[idx][dep] != -1) return memo[idx][dep];
//        int ret;
//        if (r[idx] == k[dep]){
//            ret = dfs(idx, dep + 1) + 1;
//        }else{
//            int ir = idx, il = idx;
//            while (r[ir % r.size()] != k[dep]) ++ir;
//            while (r[(il + r.size()) % r.size()] != k[dep]) --il;
//            ret = min(dfs(ir % r.size(), dep) + ir - idx, dfs((il + r.size()) % r.size(), dep) + idx - il);
//        }
//        memo[idx][dep] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minimumSeconds(vector<int>& nums) {
//        int ret = INT_MAX, n = nums.size();
//        unordered_map<int, vector<int>> mp;
//        for (int i = 0; i < n; ++i) mp[nums[i]].push_back(i);
//        for (const auto &item: mp){
//            int mi = (n - item.second.back() + item.second.front()) / 2;
//            for (int i = 1; i < item.second.size(); ++i)
//                mi = max(mi, (item.second[i] - item.second[i - 1]) / 2);
//            ret = min(ret, mi);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> distinctDifferenceArray(vector<int>& nums) {
//        vector<int> ret(nums.size());
//        unordered_set<int> st;
//        for (int i = 0; i < nums.size(); ++i){
//            st.insert(nums[i]);
//            ret[i] = st.size();
//        }
//        st.clear();
//        for (int i = nums.size() - 1; i >= 0; --i){
//            ret[i] -= st.size();
//            st.insert(nums[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    void adjust(priority_queue<int>& lpque, priority_queue<int, vector<int>, greater<>>& rpque, long long& lsum, long long& rsum){
//        while (lpque.size() > rpque.size()){
//            int tmp = lpque.top();
//            lpque.pop();
//            lsum -= tmp;
//            rpque.push(tmp);
//            rsum += tmp;
//        }
//        while (lpque.size() < rpque.size() - 1){
//            int tmp = rpque.top();
//            rpque.pop();
//            rsum -= tmp;
//            lpque.push(tmp);
//            lsum += tmp;
//        }
//    }
//    vector<int> numsGame(vector<int>& nums) {
//        const int MOD = 1e9 + 7;
//        long long lsum = 0, rsum = 0;
//        priority_queue<int> lpque;
//        priority_queue<int, vector<int>, greater<>> rpque;
//        for (int i = 0; i < nums.size(); ++i) {
//            nums[i] -= i;
//            if (rpque.empty() || nums[i] < rpque.top()){
//                lpque.push(nums[i]);
//                lsum += nums[i];
//            }else{
//                rpque.push(nums[i]);
//                rsum += nums[i];
//            }
//            adjust(lpque, rpque, lsum, rsum);
//            nums[i] = (1ll * lpque.size() * rpque.top() - lsum + rsum - 1ll * rpque.top() * rpque.size()) % MOD;
//        }
//        return nums;
//    }
//};
//class Solution {
//private:
//    struct cmp{
//        bool operator()(pair<int, int> a, pair<int, int> b){
//            return a.first + a.second < b.first + b.second;
//        }
//    };
//public:
//    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
//        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pque;
//        int a = 0, b = 0;
//        for (int i = 0; i < aliceValues.size(); ++i) pque.emplace(aliceValues[i], bobValues[i]);
//        for (int i = 1; !pque.empty(); pque.pop(), ++i) {
//            if (i % 2)
//                a += pque.top().first;
//            else
//                b += pque.top().second;
//        }
//        return a == b ? 0 : (a > b ? 1 : -1);
//    }
//};
//class Solution {
//public:
//    int stoneGameVII(vector<int>& stones) {
//        vector<vector<int>> dp(stones.size(), vector(stones.size(), 0));
//        vector<int> prev(stones.size() + 1);
//        prev[0] = 0;
//        for (int i = 0; i < stones.size(); ++i) prev[i + 1] = prev[i] + stones[i];
//        for (int i = 1; i < stones.size(); ++i)
//            for (int j = 0; j < stones.size() - i; ++j)
//                dp[j][j + i] = max(prev[j + i + 1] - prev[j + 1] - dp[j + 1][j + i], prev[j + i] - prev[j] - dp[j][j + i - 1]);
//        return dp[0][stones.size() - 1];
//    }
//};
//class Solution {
//public:
//    bool canWinNim(int n) {
//        return n % 4;
//    }
//};
//class Solution {
//public:
//    int maxResult(vector<int>& nums, int k) {
//        deque<int> dq(1, 0);
//        for (int i = 1; i < nums.size(); ++i){
//            if (dq.front() < i - k) dq.pop_front();
//            nums[i] += nums[dq.front()];
//            while (!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();
//            dq.emplace_back(i);
//        }
//        return nums.back();
//    }
//};
//class Solution {
//public:
//    int magicTower(vector<int>& nums) {
//        priority_queue<int, vector<int>, greater<>> pque;
//        int ret = 0;
//        long long hp = 1, dhp = 0;
//        for (const auto &item: nums){
//            hp += item;
//            pque.push(item);
//            if (hp <= 0){
//                ++ret;
//                dhp += pque.top();
//                hp -= pque.top();
//                pque.pop();
//            }
//        }
//        return hp + dhp > 0 ? ret : -1;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    TreeNode* replaceValueInTree(TreeNode* root) {
//        unordered_map<TreeNode*, TreeNode*> getRoot;
//        vector<TreeNode*> vec = {root};
//        while (!vec.empty()){
//            unordered_map<TreeNode*, int> qxdsum;
//            vector<TreeNode*> tmp;
//            int sum = 0;
//            for (const auto &item: vec){
//                sum += item->val;
//                qxdsum[getRoot[item]] += item->val;
//                if (item->left){
//                    getRoot[item->left] = item;
//                    tmp.push_back(item->left);
//                }
//                if (item->right){
//                    getRoot[item->right] = item;
//                    tmp.push_back(item->right);
//                }
//            }
//            for (auto &item: vec) item->val = sum - qxdsum[getRoot[item]];
//            vec = std::move(tmp);
//        }
//        return root;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    bool isCousins(TreeNode* root, int x, int y) {
//        vector<TreeNode*> vec = {root};
//        unordered_map<int, pair<int, int>> mp;
//        int dep = 0;
//        while (!vec.empty()){
//            ++dep;
//            vector<TreeNode*> tmp;
//            for (const auto &item: vec){
//                if (item->left){
//                    tmp.emplace_back(item->left);
//                    mp[item->left->val] = make_pair(item->val, dep);
//                }
//                if (item->right){
//                    tmp.emplace_back(item->right);
//                    mp[item->right->val] = make_pair(item->val, dep);
//                }
//            }
//            vec = std::move(tmp);
//        }
//        if (mp[x].first != mp[y].first && mp[x].second == mp[y].second) return true;
//        return false;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//    unordered_map<TreeNode*, TreeNode*> retree;
//    unordered_set<TreeNode*> st;
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        function<void(TreeNode*)> dfs = [&](TreeNode* r){
//            if (r->left){
//                dfs(r->left);
//                retree[r->left] = r;
//            }
//            if (r->right){
//                dfs(r->right);
//                retree[r->right] = r;
//            }
//        };
//        dfs(root);
//        while (p){
//            st.insert(p);
//            p = retree[p];
//        }
//        while (q){
//            if (st.count(q)) return q;
//            q = retree[q];
//        }
//        return root;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> ret;
//        function<void(TreeNode*)> dfs = [&](TreeNode* r){
//            if (!r) return;
//            dfs(r->left);
//            ret.push_back(r->val);
//            dfs(r->right);
//        };
//        dfs(root);
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> ret;
//        function<void(TreeNode*)> dfs = [&](TreeNode* r){
//            if (!r) return;
//            ret.emplace_back(r->val);
//            dfs(r->left);
//            dfs(r->right);
//        };
//        dfs(root);
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> ret;
//        function<void(TreeNode*)> dfs = [&](TreeNode* r){
//            if (!r) return;
//            dfs(r->left);
//            dfs(r->right);
//            ret.emplace_back(r->val);
//        };
//        dfs(root);
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<vector<int>> verticalTraversal(TreeNode* root) {
//        map<int, vector<pair<int, int>>> mp;
//        vector<vector<int>> ret;
//        function<void(TreeNode*, int, int)> dfs = [&](TreeNode* r, int d, int c){
//            if (!r) return;
//            mp[c].emplace_back(d, r->val);
//            dfs(r->left, d + 1, c - 1);
//            dfs(r->right, d + 1, c + 1);
//        };
//        dfs(root, 0 ,0);
//        for (auto &vp: mp){
//            ret.emplace_back();
//            std::sort(vp.second.begin(), vp.second.end());
//            for (const auto &it: vp.second) ret.back().emplace_back(it.second);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
//        int idx = 0, s1cut = 0, s2cut = 0, f1, f2;
//        unordered_map<int, pair<int, int>> mp;
//        while (true){
//            for (const auto &item: s1){
//                if (item == s2[idx] && ++idx == s2.size()){
//                    idx = 0;
//                    ++s2cut;
//                }
//            }
//            ++s1cut;
//            if (mp.count(idx)){
//                f1 = s1cut - mp[idx].first;
//                f2 = s2cut - mp[idx].second;
//                break;
//            }
//            mp[idx] = {s1cut, s2cut};
//        }
//        s2cut = ((n1 - mp[idx].first) / f1) * f2 + mp[idx].second;
//        s1cut = (n1 - mp[idx].first) % f1;
//        for (int i = 0; i < s1cut; ++i){
//            for (const auto &item: s1){
//                if (item == s2[idx] && ++idx == s2.size()){
//                    idx = 0;
//                    ++s2cut;
//                }
//            }
//        }
//        return s2cut / n2;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> ret;
//        vector<TreeNode*> que{root};
//        if (!root) return ret;
//        while (!que.empty()){
//            vector<TreeNode*> tque;
//            vector<int> tret;
//            for (const auto &item: que){
//                if (item->left) tque.emplace_back(item->left);
//                if (item->right) tque.emplace_back(item->right);
//                tret.emplace_back(item->val);
//            }
//            que = std::move(tque);
//            ret.emplace_back(tret);
//        }
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        vector<vector<int>> ret;
//        vector<TreeNode*> que{root};
//        if (!root) return ret;
//        while (!que.empty()){
//            vector<TreeNode*> tmp;
//            vector<int> vec;
//            for (const auto &item: que){
//                if (item->left) tmp.emplace_back(item->left);
//                if (item->right) tmp.emplace_back(item->right);
//                vec.emplace_back(item->val);
//            }
//            ret.emplace_back(std::move(vec));
//            que = std::move(tmp);
//        }
//        std::reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        vector<vector<int>> ret;
//        if (!root) return ret;
//        deque<TreeNode*> que{root};
//        bool bol = true;
//        while (!que.empty()){
//            deque<TreeNode*> tmp;
//            vector<int> vec;
//            for (const auto &item: que){
//                if (bol){
//                    if (item->left) tmp.emplace_front(item->left);
//                    if (item->right) tmp.emplace_front(item->right);
//                }else{
//                    if (item->right) tmp.emplace_front(item->right);
//                    if (item->left) tmp.emplace_front(item->left);
//                }
//                vec.emplace_back(item->val);
//            }
//            bol ^= true;
//            ret.emplace_back(std::move(vec));
//            que = std::move(tmp);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    const int MOD = 1e9 + 7;
//    int count(string num1, string num2, int min_sum, int max_sum) {
//        string fnum;
//        vector<vector<int>> memo(num2.size(), vector<int>(num2.size() * 9, -1));
//        function<int(int, int, bool)> dfs = [&](int idx, int sum, bool is_max){
//            if (sum > max_sum) return 0;
//            if (idx >= fnum.size()) return sum >= min_sum ? 1 : 0;
//            if (!is_max && memo[idx][sum] != -1) return memo[idx][sum];
//            int ret = is_max ? dfs(idx + 1, fnum[idx] + sum - '0', true) % MOD : 0;
//            int up = is_max ? fnum[idx] - '0' : 10;
//            for (int i = 0; i < up; ++i, ret %= MOD) ret += dfs(idx + 1, i + sum, false) % MOD;
//            if (!is_max) memo[idx][sum] = ret;
//            return ret;
//        };
//        fnum = num2;
//        int ret = dfs(0, 0, true);
//        int s = 0;
//        for (const auto &item: num1) s += item - '0';
//        if (s <= max_sum && s>= min_sum) ++ret;
//        fnum = num1;
//        memo.clear();
//        memo.resize(num1.size(), vector<int>(num1.size() * 9, -1));
//        return (ret - dfs(0, 0, true) + MOD) % MOD;
//    }
//};
//class Solution {
//public:
//    int minimumTime(vector<int>& nums1, vector<int>& nums2, int x) {
//        int n = nums1.size();
//        vector<int> idxs(n);
//        for (int i = 0; i < n; idxs[i] = i, ++i);
//        std::sort(idxs.begin(), idxs.end(), [&](int x, int y){
//            return nums2[x] < nums2[y];
//        });
//        vector<vector<int>> dp(n + 1, vector(n + 1, 0));
//        for (int i = 0; i < n; ++i){
//            for (int j = 1; j <= i + 1; ++j) {
//                //正序不能降为一维数组，因为要用要用dp[i][j - 1]时max里面另一个参数会用到dp[i + 1][j]而不是dp[i][j]
//                dp[i + 1][j] = max(dp[i][j], dp[i][j - 1] + nums1[idxs[i]] + nums2[idxs[i]] * j);
//            }
//        }
//        int sum = 0, s2 = 0;
//        for (int i = 0; i < n; ++i){
//            sum += nums1[i];
//            s2 += nums2[i];
//        }
//        for (int i = 0; i <= n; ++i, sum += s2) if (sum - dp[n][i] <= x) return i;
//        return -1;
//    }
//};
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//    Node() {}
//    Node(int _val) {
//        val = _val;
//    }
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//class Solution {
//public:
//    vector<int> preorder(Node* root) {
//        vector<int> ret;
//        function<void(Node*)> dfs = [&](Node* n){
//            if (!n) return;
//            ret.emplace_back(n->val);
//            for (const auto &item: n->children) dfs(item);
//        };
//        dfs(root);
//        return ret;
//    }
//};
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//    Node() {}
//    Node(int _val) {
//        val = _val;
//    }
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> levelOrder(Node* root) {
//        vector<vector<int>> ret;
//        if (!root) return ret;
//        vector<Node*> que{root};
//        while (!que.empty()){
//            vector<Node*> tmp;
//            vector<int> vec;
//            for (const auto &item: que){
//                vec.emplace_back(item->val);
//                for (const auto &cld: item->children) tmp.emplace_back(cld);
//            }
//            que = std::move(tmp);
//            ret.emplace_back(std::move(vec));
//        }
//        return ret;
//    }
//};
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//    Node() {}
//    Node(int _val) {
//        val = _val;
//    }
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//class Solution {
//public:
//    vector<int> postorder(Node* root) {
//        vector<int> ret;
//        function<void(Node*)> dfs = [&](Node* node){
//            if (!node) return;
//            for (const auto &item: node->children) dfs(item);
//            ret.push_back(node->val);
//        };
//        dfs(root);
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        unordered_map<int, int> mp;
//        for (int i = 0; i < inorder.size(); ++i) mp[inorder[i]] = i;
//        function<TreeNode*(int, int, int, int)> dfs = [&](int pl, int pr, int il, int ir){
//            if (pl > pr) return (TreeNode*)nullptr;
//            return new TreeNode(
//                    preorder[pl],
//                    dfs(pl + 1, pl + mp[preorder[pl]] - il, il, mp[preorder[pl]] - 1),
//                    dfs(pl + mp[preorder[pl]] - il + 1, pr, mp[preorder[pl]] + 1, ir)
//                    );
//        };
//        return dfs(0, preorder.size() - 1, 0, inorder.size() - 1);
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        unordered_map<int, int> mp;
//        for (int i = 0; i < inorder.size(); ++i) mp[inorder[i]] = i;
//        function<TreeNode*(int, int, int, int)> dfs = [&](int il, int ir, int pl, int pr){
//            if (il > ir) return (TreeNode*)nullptr;
//            return new TreeNode(
//                    postorder[pr],
//                    dfs(il, mp[postorder[pr]] - 1, pl, pl + mp[postorder[pr]] - il - 1),
//                    dfs(mp[postorder[pr]] + 1, ir, pl + mp[postorder[pr]] - il, pr - 1)
//                    );
//        };
//        return dfs(0, inorder.size() - 1, 0, postorder.size() - 1);
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
//        unordered_map<int, int> mp;
//        for (int i = 0; i < postorder.size(); ++i) mp[postorder[i]] = i;
//        function<TreeNode*(int, int, int, int)> dfs = [&](int prl, int prr, int pol, int por){
//            if (prl > prr) return (TreeNode*)nullptr;
//            if (prl == prr) return new TreeNode(preorder[prl]);
//            int i = mp[preorder[prl + 1]] - pol;
//            return new TreeNode(preorder[prl], dfs(prl + 1, prl + i + 1, pol, pol + i), dfs(prl + i + 2, prr, pol + i + 1, por - 1));
//        };
//        return dfs(0, preorder.size() - 1, 0 ,postorder.size() - 1);
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    long long kthLargestLevelSum(TreeNode* root, int k) {
//        vector<TreeNode*> que{root};
//        priority_queue<long long> pque;
//        long long ret;
//        while (!que.empty()){
//            ret = 0;
//            vector<TreeNode*> tque;
//            for (const auto &item: que){
//                if (item->left) tque.emplace_back(item->left);
//                if (item->right) tque.emplace_back(item->right);
//                ret += item->val;
//            }
//            pque.push(ret);
//            que = std::move(tque);
//        }
//        if (k > pque.size()) return -1;
//        for (int i = 1; i < k; ++i) pque.pop();
//        return pque.top();
//    }
//};
//class Solution {
//public:
//    int splitArray(vector<int>& nums, int k) {
//        vector<int> prevarr(nums.size() + 1);
//        for (int i = 1; i < prevarr.size(); ++i) prevarr[i] = nums[i - 1] + prevarr[i - 1];
//        vector<vector<int>> memo(nums.size() + 1, vector<int>(k + 1, -1));
//        function<int(int, int)> dp = [&](int idx, int k){
//            if (memo[idx][k] != -1) return memo[idx][k];
//            if (k == 1) return prevarr.back() - prevarr[idx];
//            int ret = INT_MAX;
//            for (int i = idx + 1; i <= nums.size() - k + 1; ++i)
//                ret = min(ret, max(prevarr[i] - prevarr[idx], dp(i, k - 1)));
//            memo[idx][k] = ret;
//            return ret;
//        };
//        return dp(0, k);
//    }
//};
//class Solution {
//public:
//    int splitArray(vector<int>& nums, int k) {
//        int l = 0, r = 0;
//        for (const auto &item: nums){
//            r += item;
//            l = max(l, item);
//        }
//        while (l < r){
//            int m = (l + r) / 2;
//            int sum = nums.front(), cut = 1;
//            for (int i = 1; i < nums.size(); ++i){
//                sum += nums[i];
//                if (sum > m){
//                    sum = nums[i];
//                    ++cut;
//                }
//            }
//            if (cut > k)
//                l = m + 1;
//            else
//                r = m;
//        }
//        return l;
//    }
//};
//class Solution {
//public:
//    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
//        vector<pair<int, int>> stk{{0, 0}};
//        unordered_map<int, unordered_set<int>> memo;
//        while (!stk.empty()){
//            int c1 = stk.back().first, c2 = stk.back().second;
//            stk.pop_back();
//            if (c1 == targetCapacity || c2 == targetCapacity || c1 + c2 == targetCapacity) return true;
//            if (memo[c1].count(c2)) continue;
//            memo[c1].insert(c2);
//            stk.emplace_back(c1, 0);
//            stk.emplace_back(0, c2);
//            stk.emplace_back(jug1Capacity, c2);
//            stk.emplace_back(c1, jug2Capacity);
//            stk.emplace_back(min(jug1Capacity, c1 + c2), c2 - min(jug1Capacity, c1 + c2) + c1);
//            stk.emplace_back(c1 - min(jug2Capacity, c2 + c1) + c2, min(jug2Capacity, c2 + c1));
//        }
//        return false;
//    }
//};
//class Solution {
//public:
//    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
//        if (jug1Capacity + jug2Capacity < targetCapacity)
//            return false;
//        if (!jug1Capacity || !jug2Capacity)
//            return !targetCapacity || jug1Capacity + jug2Capacity == targetCapacity;
//        while (jug2Capacity){
//            int tmp = jug2Capacity;
//            jug2Capacity = jug1Capacity % tmp;
//            jug1Capacity = tmp;
//        }
//        return !(targetCapacity % jug1Capacity);
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<int> vec;
//    void dfs(TreeNode* r){
//        if (r->left) dfs(r->left);
//        vec.emplace_back(r->val);
//        if (r->right) dfs(r->right);
//    };
//    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
//        dfs(root);
//        vector<vector<int>> ret;
//        for (const auto &item: queries){
//            if (item < vec.front()) ret.push_back({-1, vec.front()});
//            else if (item > vec.back()) ret.push_back({vec.back(), -1});
//            else{
//                auto it = std::lower_bound(vec.begin(), vec.end(), item);
//                if (*it == item) ret.push_back({item, item});
//                else ret.push_back({*(it - 1), *it});
//            }
//        }
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//    unordered_map<TreeNode*, TreeNode*> getfa;
//    void dfs(TreeNode* r){
//        if (r->left) {
//            getfa[r->left] = r;
//            dfs(r->left);
//        }
//        if (r->right) {
//            getfa[r->right] = r;
//            dfs(r->right);
//        }
//    }
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        dfs(root);
//        unordered_set<TreeNode*> st;
//        while (p){
//            st.insert(p);
//            p = getfa[p];
//        }
//        while (q){
//            if (st.count(q)) return q;
//            q = getfa[q];
//        }
//        return root;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    int rangeSumBST(TreeNode* root, int low, int high) {
//        function<int(TreeNode*)> dfs = [&](TreeNode* r){
//            int ret = 0;
//            if (r->val < low){
//                if (r->right) ret += dfs(r->right);
//            }else if (r->val > high){
//                if (r->left) ret += dfs(r->left);
//            }else{
//                ret = r->val;
//                if (r->left) ret += dfs(r->left);
//                if (r->right) ret += dfs(r->right);
//            }
//            return ret;
//        };
//        return dfs(root);
//    }
//};
//class Solution {
//public:
//    int minIncrements(int n, vector<int>& cost) {
//        int ret = 0;
//        for (int i = n - 1; i > 0; i -= 2){
//            ret += abs(cost[i] - cost[i - 1]);
//            cost[(i - 1) / 2] += max(cost[i], cost[i - 1]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    bool validPartition(vector<int>& nums) {
//        vector<bool> bols(nums.size() + 1, false);
//        bols.back() = true;
//        for (int i = nums.size() - 1; i >= 0; --i){
//            if (i + 1 < nums.size() && nums[i] == nums[i + 1])
//                bols[i] = bols[i + 2];
//            if (i + 2 < nums.size() && nums[i] == nums[i + 1] && nums[i] == nums[i + 2])
//                bols[i] = bols[i] || bols[i + 3];
//            if (i + 2 < nums.size() && nums[i] + 1 == nums[i + 1] && nums[i + 1] + 1 == nums[i + 2])
//                bols[i] = bols[i] || bols[i + 3];
//        }
//        return bols.front();
//    }
//};
//class Solution {
//public:
//    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
//        unordered_map<int, vector<int>> tre;
//        unordered_set<int> st;
//        for (const auto &item: edges){
//            tre[item[0]].emplace_back(item[1]);
//            tre[item[1]].emplace_back(item[0]);
//        }
//        for (const auto &item: restricted) st.insert(item);
//        int ret = 0;
//        vector<int> vec{0};
//        while (!vec.empty()){
//            int tmp = vec.back();
//            vec.pop_back();
//            if (st.count(tmp)) continue;
//            st.insert(tmp);
//            ++ret;
//            for (const auto &item: tre[tmp]) vec.emplace_back(item);
//        }
//        return ret;
//    }
//};
//class MyStack {
//public:
//    queue<int>* que;
//    MyStack() {
//        que = new queue<int>;
//    }
//    void push(int x) {
//        int i = que->size();
//        que->push(x);
//        while (i--) que->push(pop());
//    }
//    int pop() {
//        int ret = que->front();
//        que->pop();
//        return ret;
//    }
//    int top() {
//        return que->front();
//    }
//    bool empty() {
//        return que->empty();
//    }
//};
//class MyQueue {
//private:
//    inline void pushdown(){
//        if (stkout.empty()){
//            while (!stkin.empty()){
//                stkout.push(stkin.top());
//                stkin.pop();
//            }
//        }
//    }
//public:
//    stack<int> stkin, stkout;
//    MyQueue() {}
//    void push(int x) {
//        stkin.push(x);
//    }
//    int pop() {
//        pushdown();
//        int ret = stkout.top();
//        stkout.pop();
//        return ret;
//    }
//    int peek() {
//        pushdown();
//        return stkout.top();
//    }
//    bool empty() {
//        return stkin.empty() && stkout.empty();
//    }
//};
//class Solution {
//public:
//    int findKOr(vector<int>& nums, int k) {
//        vector<int> ksize (32, 0);
//        for (auto &item: nums){
//            int i = 0;
//            while (item){
//                ksize[i++] += item & 1;
//                item >>= 1;
//            }
//        }
//        int ret = 0;
//        for (int i = ksize.size() - 1; i >= 0 ; --i){
//            ret <<= 1;
//            if (ksize[i] >= k) ret |= 1;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long kSum(vector<int>& nums, int k) {
//        long long sum = 0;
//        for (auto &item: nums){
//            if (item < 0) item = -item;
//            else sum += item;
//        }
//        if (k-- == 1) return sum;
//        std::sort(nums.begin(), nums.end());
//        priority_queue<pair<long long, int>, vector<pair<long long, int>>, less<>> pque;
//        pque.emplace(sum - nums[0], 0);
//        while (--k){
//            auto [s, i] = pque.top();
//            pque.pop();
//            if (i + 1 < nums.size()){
//                pque.emplace(s + nums[i] - nums[i + 1], i + 1);
//                pque.emplace(s - nums[i + 1], i + 1);
//            }
//        }
//        return pque.top().first;
//    }
//};
//class Solution {
//public:
//    vector<vector<long long>> memo;
//    vector<vector<int>> p;
//    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
//        memo.resize(m + 1, vector(n + 1, -1ll));
//        p.resize(m + 1, vector(n + 1, 0));
//        for (const auto &item: prices) p[item[0]][item[1]] = item[2];
//        return dfs(m, n);
//    }
//    long long dfs(int h, int w){
//        if (memo[h][w] != -1) return memo[h][w];
//        long long ret = p[h][w];
//        for (int i = 1; i <= h / 2; ++i)
//            ret = max(ret, dfs(i, w) + dfs(h - i, w));
//        for (int i = 1; i <= w / 2; ++i)
//            ret = max(ret, dfs(h, i) + dfs(h, w - i));
//        memo[h][w] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxMoves(vector<vector<int>>& grid) {
//        int ret;
//        for (int i = 0; i < grid.size(); ++i) grid[i][0] = -grid[i][0];
//        for (int j = 0; j < grid[0].size() - 1; ++j, ret = j){
//            bool bol = true;
//            for (int i = 0; i < grid.size(); ++i){
//                if (grid[i][j] > 0) continue;
//                if (i - 1 >= 0 && grid[i - 1][j + 1] > -grid[i][j]) {
//                    grid[i - 1][j + 1] = -grid[i - 1][j + 1];
//                    bol = false;
//                }
//                if (grid[i][j + 1] > -grid[i][j]) {
//                    grid[i][j + 1] = -grid[i][j + 1];
//                    bol = false;
//                }
//                if (i + 1 < grid.size() && grid[i + 1][j + 1] > -grid[i][j]) {
//                    grid[i + 1][j + 1] = -grid[i + 1][j + 1];
//                    bol = false;
//                }
//            }
//            if (bol) return j;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//        if (n == 1) return {0};
//        unordered_map<int, unordered_set<int>> mp;
//        for (const auto &item: edges){
//            mp[item[0]].insert(item[1]);
//            mp[item[1]].insert(item[0]);
//        }
//        vector<int> vec, ret;
//        for (const auto &item: mp)
//            if (item.second.size() == 1)
//                vec.emplace_back(item.first);
//        while (mp.size() > 2){
//            vector<int> tmp;
//            for (const auto &dn: vec){
//                for (const auto &cn: mp[dn]){
//                    mp[cn].erase(dn);
//                    if (mp[cn].size() == 1)
//                        tmp.emplace_back(cn);
//                }
//                mp.erase(dn);
//            }
//            vec = std::move(tmp);
//        }
//        for (const auto &item: mp)
//            ret.emplace_back(item.first);
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maximumScore(vector<int>& nums, int k) {
//        int ret = 0;
//        vector<pair<int, int>> stk({{nums.size(), 0}});
//        vector<int> nextMins(nums.size());
//        for (int i = nums.size() - 1; i >= 0; --i){
//            while (stk.back().second >= nums[i]) stk.pop_back();
//            nextMins[i] = stk.back().first;
//            stk.emplace_back(i, nums[i]);
//        }
//        stk.clear();
//        stk.emplace_back(-1, 0);
//        for (int i = 0; i < nums.size(); ++i){
//            while (stk.back().second >= nums[i]) stk.pop_back();
//            if (stk.back().first < k && nextMins[i] > k)
//                ret = max(ret, (nextMins[i] - stk.back().first - 1) * nums[i]);
//            stk.emplace_back(i, nums[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    double myPow(double x, int n) {
//        return n > 0 ? fastPow(x, n) : 1.0 / fastPow(x, -(long long)n);
//    }
//    double fastPow(double x, long long n) {
//        double ret = 1;
//        while (n){
//            if (n & 1) ret *= x;
//            x *= x;
//            n >>= 1;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    double myPow(double x, int n) {
//        return n > 0 ? fastPow(x, n) : 1.0 / fastPow(x, -(long long)n);
//    }
//    double fastPow(double x, long long n) {
//        if (n == 0) return 1;
//        double ret = fastPow(x, n / 2);
//        ret *= ret;
//        if (n & 1) ret *= x;
//        return ret;
//    }
//};
//class Solution {
//public:
//    const long long MOD = 1e9 + 7;
//    long long fastPow(long long x, long long y){
//        long long ret = 1;
//        while (y){
//            if (y & 1)
//                ret = (x * ret) % MOD;
//            x = (x * x) % MOD;
//            y >>= 1;
//        }
//        return ret;
//    }
//    int minNonZeroProduct(int p) {
//        long long x = fastPow(2,p) - 1;
//        return (fastPow(x - 1, (1ll << (p - 1)) - 1) * x) % MOD;
//    }
//};
//class FrequencyTracker {
//public:
//    unordered_map<int, int> numToSize;
//    unordered_map<int, unordered_set<int>> sizeToNum;
//    FrequencyTracker() {}
//    void add(int number) {
//        if (numToSize.count(number)){
//            sizeToNum[numToSize[number]].erase(number);
//            if (sizeToNum[numToSize[number]].empty())
//                sizeToNum.erase(numToSize[number]);
//        }
//        sizeToNum[++numToSize[number]].insert(number);
//    }
//    void deleteOne(int number) {
//        if (numToSize.count(number)){
//            sizeToNum[numToSize[number]].erase(number);
//            if (sizeToNum[numToSize[number]].empty())
//                sizeToNum.erase(numToSize[number]);
//            if (--numToSize[number]) sizeToNum[numToSize[number]].insert(number);
//            else numToSize.erase(number);
//        }
//    }
//    bool hasFrequency(int frequency) {
//        return sizeToNum.count(frequency);
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> memo;
//    int coinChange(vector<int>& coins, int amount) {
//        memo.resize(coins.size(), vector(amount + 1, -1));
//        int ret = dfs(coins, 0, amount);
//        return ret > amount ? -1 : ret;
//    }
//    int dfs(vector<int>& coins, int idx, int amt){
//        if (!amt) return 0;
//        if (idx >= coins.size()) return 1<<25;
//        if (memo[idx][amt] != -1)
//            return memo[idx][amt];
//        int ret = dfs(coins, idx + 1, amt);
//        if (coins[idx] <= amt)
//            ret = min(ret, dfs(coins, idx, amt - coins[idx]) + 1);
//        memo[idx][amt] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> memo;
//    int change(int amount, vector<int>& coins) {
//        memo.resize(amount + 1, vector(coins.size(), -1));
//        return dfs(amount, 0, coins);
//    }
//    int dfs(int amount, int idx, vector<int>& coins){
//        if (!amount) return 1;
//        if (idx >= coins.size()) return 0;
//        if (memo[amount][idx] != -1)
//            return memo[amount][idx];
//        int ret = dfs(amount, idx + 1, coins);
//        if (amount >= coins[idx])
//            ret += dfs(amount - coins[idx], idx, coins);
//        memo[amount][idx] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    const int MOD = 1e9 + 7;
//    int countWays(vector<vector<int>>& ranges) {
//        std::sort(ranges.begin(), ranges.end(), greater<>());
//        int e = 1;
//        while (ranges.size() > 1) {
//            auto tmp = ranges.back();
//            ranges.pop_back();
//            if (ranges.back()[0] <= tmp[1])
//                ranges.back()[1] = max(ranges.back()[1], tmp[1]);
//            else
//                ++e;
//        }
//        long long ret = 1, n = 2;
//        while (e){
//            if (e & 1)
//                ret = (ret * n) % MOD;
//            e >>= 1;
//            n = (n * n) % MOD;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minimumSum(vector<int>& nums) {
//        vector<int> min_nexts(nums.size());
//        min_nexts[nums.size() - 1] = nums[nums.size() - 1];
//        for (int i = nums.size() - 2; i >= 0; --i)
//            min_nexts[i] = min(min_nexts[i + 1], nums[i]);
//        int min_prev = nums.front();
//        int ret = INT_MAX;
//        for (int i = 1; i < nums.size() - 1; ++i){
//            if (nums[i] > min_prev && nums[i] > min_nexts[i + 1])
//                ret = min(ret, min_prev + nums[i] + min_nexts[i + 1]);
//            min_prev = min(min_prev, nums[i]);
//        }
//        return ret == INT_MAX ? - 1 : ret;
//    }
//};
//class Solution {
//public:
//    int minimumAddedCoins(vector<int>& coins, int target) {
//        std::sort(coins.begin(), coins.end());
//        int end = 0, ans = 0;
//        for (int i = 0; end < target;){
//            if (i < coins.size() && coins[i] <= end + 1){
//                end += coins[i];
//                ++i;
//            }else{
//                end += end + 1;
//                ++ans;
//            }
//        }
//        return ans;
//    }
//};
//class Solution {
//public:
//    bool isValidSerialization(string preorder) {
//        vector<string> split;
//        vector<int> stk;
//        stringstream ss(preorder);
//        string tmp;
//        while (getline(ss, tmp, ',')) split.emplace_back(tmp);
//        if (split[0] == "#") {
//            if (split.size() == 1)
//                return true;
//            return false;
//        }
//        stk.emplace_back(2);
//        for (int i = 1; i < split.size(); ++i) {
//            if (split[i] == "#" && stk.empty())
//                return false;
//            else if (split[i] == "#"){
//                if (!--stk.back())
//                    stk.pop_back();
//            }else{
//                if (stk.empty()) return false;
//                if (!--stk.back())
//                    stk.pop_back();
//                stk.emplace_back(2);
//            }
//        }
//        return stk.empty();
//    }
//};
//class Solution {
//public:
//    string finalString(string s) {
//        deque<char> dque;
//        bool isReversed = false;
//        for (const auto &item: s){
//            if (item == 'i'){
//                isReversed = !isReversed;
//            }else{
//                if (isReversed) dque.push_front(item);
//                else dque.push_back(item);
//            }
//        }
//        s.clear();
//        while (!dque.empty()){
//            if (isReversed){
//                s.push_back(dque.back());
//                dque.pop_back();
//            }else{
//                s.push_back(dque.front());
//                dque.pop_front();
//            }
//        }
//        return s;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    vector<TreeNode*> allPossibleFBT(int n) {
//        if (!(n % 2)) return {};
//        if (n == 1) return {new TreeNode};
//        vector<TreeNode*> ret;
//        for (int i = 1; i < n - 1; i+=2) {
//            vector<TreeNode*>&& leftTree = allPossibleFBT(i);
//            vector<TreeNode*>&& rightTree = allPossibleFBT(n - i - 1);
//            for (const auto &lit: leftTree)
//                for (const auto &rit: rightTree)
//                    ret.emplace_back(new TreeNode(0, lit, rit));
//        }
//        return ret;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//class Solution {
//public:
//    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
//        vector<pair<TreeNode*, TreeNode*>> stk{{original, cloned}};
//        while (!stk.empty()){
//            auto back = stk.back();
//            if (back.first == target) return back.second;
//            stk.pop_back();
//            if (back.first->left) stk.emplace_back(back.first->left, back.second->left);
//            if (back.first->right) stk.emplace_back(back.first->right, back.second->right);
//        }
//        return nullptr;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    int ret = 0;
//    int maxAncestorDiff(TreeNode* root) {
//        if (root) dfs(root, root->val, root->val);
//        return ret;
//    }
//    void dfs(TreeNode* root, int mi, int ma){
//        mi = min(root->val, mi);
//        ma = max(root->val, ma);
//        ret = max(ret, ma - mi);
//        if (root->right) dfs(root->right, mi, ma);
//        if (root->left) dfs(root->left, mi, ma);
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> tree;
//    vector<vector<int>> ret;
//    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//        tree.resize(n);
//        ret.resize(n);
//        for (const auto &item: edges)
//            tree[item[0]].emplace_back(item[1]);
//        for (int i = 0; i < n; ++i)
//            dfs(i, i);
//        return ret;
//    }
//    void dfs(int i, int p){
//        if (i != p)
//            ret[i].emplace_back(p);
//        for (const auto &item: tree[i])
//            if (ret[item].empty() || ret[item].back() != p)
//                dfs(item, p);
//    }
//};
//class TreeAncestor {
//public:
//    vector<vector<int>> skiptree;
//    TreeAncestor(int n, vector<int>& parent) {
//        skiptree.resize(n);
//        for (int i = 1; i < parent.size(); ++i)
//            skiptree[i].emplace_back(parent[i]);
//        int m = 1, t = n;
//        while(t >>= 1) ++m;
//        for (int i = 0; i < m - 1; ++i)
//            for (int j = 0; j < n; ++j)
//                if (i < skiptree[j].size() && i < skiptree[skiptree[j][i]].size())
//                    skiptree[j].emplace_back(skiptree[skiptree[j][i]][i]);
//    }
//    int getKthAncestor(int node, int k) {
//        for (int i = 0; k; ++i, k >>= 1)
//            if (k & 1)
//                if (skiptree[node].size() > i)
//                    node = skiptree[node][i];
//                else
//                    return -1;
//        return node;
//    }
//};
//class ThroneInheritance {
//public:
//    struct Node{
//        Node(string name):name(name){};
//        string name;
//        list<Node*> childs;
//    };
//    Node* root;
//    unordered_map<string, Node*> nametonode;
//    unordered_set<string> dels;
//    ThroneInheritance(string kingName) {
//        root = new Node(kingName);
//        nametonode[kingName] = root;
//    }
//    void birth(string parentName, string childName) {
//        Node* temp = new Node(childName);
//        nametonode[childName] = temp;
//        nametonode[parentName]->childs.push_back(temp);
//    }
//    void death(string name) {
//        dels.insert(name);
//    }
//    vector<string> getInheritanceOrder() {
//        vector<string> ret;
//        vector<Node*> stk{root};
//        while (!stk.empty()){
//            Node* temp = stk.back();
//            stk.pop_back();
//            for (auto i = temp->childs.rbegin(); i != temp->childs.rend(); ++i)
//                stk.emplace_back(*i);
//            if (!dels.count(temp->name))
//                ret.emplace_back(temp->name);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minOperations(vector<int>& nums) {
//        set<int> st;
//        for (const auto &item: nums)
//            st.insert(item);
//        vector<int> dque;
//        int ret = 0, i = 0;
//        for (const auto &item: st){
//            dque.emplace_back(item);
//            while (dque.back() - dque[i] >= nums.size()) ++i;
//            ret = max(ret, (int)dque.size() - i);
//        }
//        return nums.size() - ret;
//    }
//};
//class Solution {
//public:
//    int maximumCount(vector<int>& nums) {
//        return max(
//                nums.end() - upper_bound(nums.begin(), nums.end(), 0),
//                upper_bound(nums.begin(), nums.end(), -1) - nums.begin()
//                );
//    }
//};
//class Solution {
//public:
//    string maximumBinaryString(string binary) {
//        int bg = -1, zsize = 0;
//        for (int i = 0; i < binary.size(); ++i){
//            if (binary[i] == '0'){
//                if (bg == -1) bg = i;
//                else ++zsize;
//                binary[i] = '1';
//            }
//        }
//        if (bg == -1) return binary;
//        binary[min((int)binary.size() - 1, bg + zsize)] = '0';
//        return binary;
//    }
//};
//class Solution {
//public:
//    int findChampion(vector<vector<int>>& grid) {
//        for (int i = 0; i < grid.size(); ++i){
//            int j = 0;
//            for (; j < grid.size(); ++j){
//                if (j == i) continue;
//                if (grid[j][i]){
//                    j = i;
//                    break;
//                }
//            }
//            if (j != i) return i;
//        }
//        return 0;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, int> mp;
//    int findChampion(int n, vector<vector<int>>& edges) {
//        for (const auto &item: edges) ++mp[item[1]];
//        if (mp.size() != n - 1) return -1;
//        for (int i = 0; i < n; ++i)
//            if (!mp.count(i))
//                return i;
//        return -1;
//    }
//};
//class MyHashSet {
//public:
//    int size, cap;
//    vector<pair<list<int>*, set<int>*>>* table;
//    MyHashSet() {
//        size = 0;
//        cap = 0;
//        table = new vector<pair<list<int>*, set<int>*>>;
//    }
//    void exp(int newCap){
//        this->cap = newCap;
//        vector<pair<list<int>*, set<int>*>>* delTable = table;
//        table = new vector<pair<list<int>*, set<int>*>>(newCap);
//        for (const auto &item: *delTable){
//            if (item.first)
//                for (const auto &i: *item.first)
//                    add(i);
//            if (item.second)
//                for (const auto &i: *item.second)
//                    add(i);
//        }
//        delete delTable;
//    }
//    void add(int key) {
//        if (!contains(key)){
//            ++size;
//            if (size > 0.75 * cap){
//                if (!cap) exp(16);
//                else exp(cap * 2);
//            }
//            if (table->at(key % cap).second){
//                table->at(key % cap).second->insert(key);
//            }else if(table->at(key % cap).first){
//                table->at(key % cap).first->emplace_back(key);
//                if (table->at(key % cap).first->size() > 6){
//                    table->at(key % cap).second = new set<int>;
//                    for (const auto &item: *table->at(key % cap).first)
//                        table->at(key % cap).second->insert(item);
//                    delete table->at(key % cap).first;
//                    table->at(key % cap).first = nullptr;
//                }
//            }else{
//                table->at(key % cap).first = new list<int>;
//                table->at(key % cap).first->emplace_back(key);
//            }
//        }
//    }
//    void remove(int key) {
//        if (contains(key)){
//            if (table->at(key % cap).second){
//                table->at(key % cap).second->erase(key);
//                if (table->at(key % cap).second->size() < 4){
//                    table->at(key % cap).first = new list<int>;
//                    for (const auto &item: *table->at(key % cap).second)
//                        table->at(key % cap).first->emplace_back(item);
//                    delete table->at(key % cap).second;
//                    table->at(key % cap).second = nullptr;
//                }
//            }else if(table->at(key % cap).first){
//                table->at(key % cap).first->remove(key);
//            }
//        }
//    }
//    bool contains(int key) {
//        if (!cap) return false;
//        if (table->at(key % cap).second){
//            return table->at(key % cap).second->count(key);
//        }else if(table->at(key % cap).first){
//            for (const auto &item: *table->at(key % cap).first)
//                if (item == key) return true;
//            return false;
//        }
//        return false;
//    }
//};
//class MyHashMap {
//public:
//    int size, cap;
//    vector<pair<list<pair<int, int>>*, map<int, int>*>>* table;
//    MyHashMap() {
//        size = 0;
//        cap = 0;
//        table = new vector<pair<list<pair<int, int>>*, map<int, int>*>>;
//    }
//    void exp(int newCap){
//        this->cap = newCap;
//        auto delTable = table;
//        table = new vector<pair<list<pair<int, int>>*, map<int, int>*>>(newCap);
//        for (const auto &item: *delTable){
//            if (item.first)
//                for (const auto &i: *item.first)
//                    put(i.first, i.second);
//            if (item.second)
//                for (const auto &i: *item.second)
//                    put(i.first, i.second);
//        }
//        delete delTable;
//    }
//    void put(int key, int value) {
//        bool bol = false;
//        if (get(key) == -1){
//            ++size;
//            bol = true;
//        }
//        if (size > 0.75 * cap){
//            if (!cap) exp(16);
//            else exp(cap * 2);
//        }
//        if (table->at(key % cap).second){
//            table->at(key % cap).second->emplace(key, value);
//        }else if(table->at(key % cap).first){
//            if (bol)
//                table->at(key % cap).first->emplace_back(key, value);
//            else
//                for (auto &item: *table->at(key % cap).first)
//                    if (item.first == key)
//                        item.second = value;
//            if (table->at(key % cap).first->size() > 8){
//                table->at(key % cap).second = new map<int, int>;
//                for (const auto &item: *table->at(key % cap).first)
//                    table->at(key % cap).second->insert(item);
//                delete table->at(key % cap).first;
//                table->at(key % cap).first = nullptr;
//            }
//        }else{
//            table->at(key % cap).first = new list<pair<int, int>>;
//            table->at(key % cap).first->emplace_back(key, value);
//        }
//    }
//    int get(int key) {
//        if (!cap) return -1;
//        if (table->at(key % cap).second){
//            if (table->at(key % cap).second->count(key))
//                return table->at(key % cap).second->at(key);
//            return -1;
//        }else if(table->at(key % cap).first){
//            for (const auto &item: *table->at(key % cap).first)
//                if (item.first == key) return item.second;
//            return -1;
//        }
//        return -1;
//    }
//    void remove(int key) {
//        if (get(key) != -1){
//            if (table->at(key % cap).second){
//                table->at(key % cap).second->erase(key);
//                if (table->at(key % cap).second->size() < 6){
//                    table->at(key % cap).first = new list<pair<int, int>>;
//                    for (const auto &item: *table->at(key % cap).second)
//                        table->at(key % cap).first->emplace_back(item);
//                    delete table->at(key % cap).second;
//                    table->at(key % cap).second = nullptr;
//                }
//            }else if(table->at(key % cap).first){
//                for (const auto &item: *table->at(key % cap).first)
//                    if (item.first == key){
//                        table->at(key % cap).first->remove(item);
//                        break;
//                    }
//            }
//        }
//    }
//};
//class Solution {
//public:
//    struct UnionSet{
//        vector<int> vec;
//        UnionSet(int n){
//            vec.resize(n, -1);
//        }
//        int getRoot(int n){
//            vector<int> z;
//            while (vec[n] != -1){
//                z.emplace_back(n);
//                n = vec[n];
//            }
//            for (const auto &item: z)
//                vec[item] = n;
//            return n;
//        }
//        void mange(int a, int b){
//            a = getRoot(a);
//            b = getRoot(b);
//            if (a != b)
//                vec[a] = b;
//        }
//    };
//    int minMalwareSpread(vector<vector<int>>& graph, vector<int>& initial) {
//        UnionSet unionSet(graph.size());
//        for (int i = 0; i < graph.size(); ++i){
//            for (int j = i + 1; j < graph[i].size(); ++j){
//                if (graph[i][j])
//                    unionSet.mange(i, j);
//            }
//        }
//        unordered_map<int, pair<int,int>> mp;
//        for (int i = 0; i < graph.size(); ++i)
//            ++mp[unionSet.getRoot(i)].first;
//        for (const auto &item: initial)
//            ++mp[unionSet.getRoot(item)].second;
//        std::sort(initial.begin(), initial.end());
//        int ret = initial.front(), mx = INT_MIN;
//        for (const auto &item: initial){
//            if (mp[unionSet.getRoot(item)].second == 1)
//                if (mp[unionSet.getRoot(item)].first > mx){
//                    mx = mp[unionSet.getRoot(item)].first;
//                    ret = item;
//                }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findOriginalArray(vector<int>& changed) {
//        if (changed.size() % 2) return {};
//        std::sort(changed.begin(), changed.end());
//        unordered_map<int, int> mp;
//        vector<int> ret;
//        for (const auto &item: changed){
//            if (item % 2){
//                ++mp[item];
//                continue;
//            }
//            if (mp.count(item / 2)){
//                --mp[item / 2];
//                ret.push_back(item / 2);
//                if (!mp[item / 2]) mp.erase(item / 2);
//            }else{
//                ++mp[item];
//            }
//        }
//        return mp.empty() ? ret : vector<int>();
//    }
//};

//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//class Solution {
//public:
//    const int MOD = 1e9 + 7;
//
//
//    long long fastPow(int n, int k){
//        if (!k) return 1;
//        long long ret = fastPow(n, k / 2);
//        ret = (ret * ret) % MOD;
//        if (k % 2) {
//            ret *= n;
//            ret = ret % MOD;
//        }
//        return ret;
//    }
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param head ListNode类
//     * @param colors string字符串
//     * @return int整型
//     */
//    int getMethod(ListNode* head, string colors) {
//        int cut = 0, i = 0, f = 0, d = 0;
//        while (head){
//            if (colors[i] == 'R'){
//                cut += (head->val % 2);
//            }else{
//                if (head->val % 2){
//                    ++f;
//                }else{
//                    ++d;
//                }
//            }
//            ++i;
//            head = head->next;
//        }
//        long long ret = fastPow(2, d);
//        int n = 1, m = 1, s = 1;
//        for (i = 0; i < f; ++i){
//            // c n m / n !
//            n *= f - i;
//            n %= MOD;
//            m *= i + 1;
//            m %= MOD;
//            if ((i + 1) % 2 == cut % 2){
//                s += (n/m);
//                s %= MOD;
//            }
//        }
//        return ret * s;
//
//
//        // write code here
//    }
//};
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param s string字符串
//     * @param k int整型
//     * @return int整型
//     */
//    priority_queue<int> pque;
//    int maxLen(string s, int k) {
//        int sz = 0;
//        for (const auto &item: s){
//            if (item == '0'){
//                if (sz){
//                    pque.push(sz);
//                    sz = 0;
//                }
//            }else{
//                ++sz;
//            }
//        }
//        if (sz != 0) pque.push(sz);
//        while(k-- && !pque.empty()){
//            int t = pque.top();
//            pque.pop();
//            int x = 2;
//            while ((t - x + 1)/x > pque.top()) ++x;
//
//            if (t/2) pque.push(t/2);
//            if (t - t/2) pque.push(t - t/2);
//        }
//        return pque.empty() ? 0 : pque.top();
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> ret;
//    vector<int> stk;
//    void dfs(vector<int>& candidates, int i, int tag){
//        if (!tag) {
//            ret.emplace_back(stk);
//            return;
//        }
//        if (i < candidates.size()){
//            dfs(candidates, i + 1, tag);
//            if (tag >= candidates[i]){
//                stk.emplace_back(candidates[i]);
//                dfs(candidates, i, tag - candidates[i]);
//                stk.pop_back();
//            }
//        }
//    }
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        dfs(candidates, 0, target);
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> stk;
//    vector<vector<int>> ret;
//    vector<vector<int>> combinationSum3(int k, int n) {
//        dfs(k, n, 1);
//        return ret;
//    }
//    void dfs(int k, int n, int i) {
//        if (!n && !k){
//            ret.emplace_back(stk);
//            return;
//        }
//        if (i < 10){
//            dfs(k, n, i + 1);
//            if (n >= i){
//                stk.emplace_back(i);
//                dfs(k - 1, n - i, i + 1);
//                stk.pop_back();
//            }
//
//        }
//
//    }
//};
//class Solution {
//public:
//    vector<int> memo;
//    int combinationSum4(vector<int>& nums, int target) {
//        memo.resize(target + 1, -1);
//        return dfs(nums, target);
//    }
//    int dfs(vector<int>& nums, int target) {
//        if (memo[target] != -1) return memo[target];
//        if (!target) return 1;
//        int ret = 0;
//        for (const auto &item: nums){
//            if (item <= target){
//                ret += dfs(nums, target - item);
//            }
//        }
//        memo[target] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//        int sum = 0, sq = 0;
//        for (int i = 0; i < customers.size(); ++i) {
//            sum += customers[i];
//            customers[i] *= grumpy[i];
//            sq += customers[i];
//        }
//        int wd = 0;
//        for (int i = 0; i < minutes; ++i)
//            wd += customers[i];
//        int mx = wd;
//        for (int i = minutes; i < customers.size(); ++i){
//            wd += customers[i];
//            wd -= customers[i - minutes];
//            mx = max(wd, mx);
//        }
//        return sum + mx - sq;
//    }
//};
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//class Solution {
//public:
//    unordered_map<int, vector<int>> tre;
//    int amountOfTime(TreeNode* root, int start) {
//        buildTree(root);
//        unordered_set<int> st;
//        vector<int> stk{start};
//        int d = -1;
//        while (!stk.empty()){
//            ++d;
//            vector<int> tmp;
//            for (const auto &item: stk){
//                st.insert(item);
//                for (const auto &it: tre[item]){
//                    if (!st.count(it)){
//                        tmp.emplace_back(it);
//                    }
//                }
//            }
//            stk = tmp;
//        }
//        return d;
//    }
//    void buildTree(TreeNode* node){
//        if (node->left){
//            tre[node->left->val].emplace_back(node->val);
//            tre[node->val].emplace_back(node->left->val);
//            buildTree(node->left);
//        }
//        if (node->right){
//            tre[node->right->val].emplace_back(node->val);
//            tre[node->val].emplace_back(node->right->val);
//            buildTree(node->right);
//        }
//    }
//};
//class Solution {
//public:
//    int distanceTraveled(int mainTank, int additionalTank) {
//        int len = 0;
//        while (mainTank){
//            if (mainTank >= 5){
//                mainTank -= 5;
//                len += 50;
//                if (additionalTank){
//                    --additionalTank;
//                    ++mainTank;
//                }
//            }else if (mainTank > 0){
//                len += mainTank * 10;
//                break;
//            }
//        }
//        return len;
//    }
//};
//class SnapshotArray {
//public:
//    int sid;
//    vector<map<int, int>> vec;
//    SnapshotArray(int length) {
//        sid = 0;
//        vec.resize(length);
//    }
//    void set(int index, int val) {
//        vec[index][sid] = val;
//    }
//    int snap() {
//        return sid++;
//    }
//    int get(int index, int snap_id) {
//        auto it = vec[index].upper_bound(snap_id);
//        if (it == vec[index].begin()) return 0;
//        return (--it)->second;
//    }
//};
//class Solution {
//public:
//    inline int getLen(int num){
//        int len = 0;
//        while (num){
//            ++len;
//            num/=10;
//        }
//        return len;
//    }
//    vector<int> findColumnWidth(vector<vector<int>>& grid) {
//        vector<int> ret;
//        for (int i = 0; i < grid[0].size(); ++i){
//            int maxlen = 0;
//            for (int j = 0; j < grid.size(); ++j){
//                if (!grid[j][i])
//                    maxlen = max(maxlen, 1);
//                else if (grid[j][i] > 0)
//                    maxlen = max(maxlen, getLen(grid[j][i]));
//                else
//                    maxlen = max(maxlen, getLen(-grid[j][i]) + 1);
//            }
//            ret.emplace_back(maxlen);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    map<int, int>mp;
//    string baseNeg2(int n) {
//        if (!n) return "0";
//        if (n%2){
//            ++mp[0];
//        }
//        n/=2;
//        int x = 1, y = 2;
//
//        while (n){
//            if (n % 2){
//                if (x) ++mp[x];
//                ++mp[y];
//            }
//            n/=2;
//            if (x){
//                x = 0;
//            }else{
//                y += 2;
//                x = y - 1;
//            }
//        }
//        auto it = mp.begin();
//        while (it != mp.end()){
//            if (it->second != 0 && it->second != 1){
//                if (it->second < 0){
//                    if ((-it->second) % 2){
//                        mp[it->first + 1] += ((-it->second) + 1) / 2;
//                        it->second = 1;
//                    }else{
//                        mp[it->first + 1] += (-it->second) / 2;
//                        it->second = 0;
//                    }
//                }else{
//                    mp[it->first + 1] -= it->second / 2;
//                    it->second %= 2;
//                }
//            }
//            it = mp.upper_bound(it->first);
//        }
//        int k = mp.rbegin()->first + 1;
//        string ret;
//        for (int i = 0; i < k; ++i){
//            if (mp[i])ret.push_back('1');
//            else ret.push_back('0');
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//        vector<int> vec;
//        for (int i = 1; i < mat.size(); ++i){
//            int x = i ,y = 0;
//            while (x < mat.size() && y < mat[0].size()){
//                vec.emplace_back(mat[x][y]);
//                ++x;
//                ++y;
//            }
//            int idx = 0;
//            x = i ,y = 0;
//            std::sort(vec.begin(), vec.end());
//            while (x < mat.size() && y < mat[0].size()){
//                mat[x][y] = vec[idx++];
//                ++x;
//                ++y;
//            }
//            vec.clear();
//        }
//        for (int i = 0; i < mat[0].size(); ++i){
//            int x = 0 ,y = i;
//            while (x < mat.size() && y < mat[0].size()){
//                vec.emplace_back(mat[x][y]);
//                ++x;
//                ++y;
//            }
//            int idx = 0;
//            x = 0 ,y = i;
//            std::sort(vec.begin(), vec.end());
//            while (x < mat.size() && y < mat[0].size()){
//                mat[x][y] = vec[idx++];
//                ++x;
//                ++y;
//            }
//            vec.clear();
//        }
//        return mat;
//    }
//};
//class Solution {
//public:
//    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
//        int ret = 0;
//        for (const auto &item: hours)
//            if (item >= target) ++ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long totalCost(vector<int>& costs, int k, int candidates) {
//        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pque;
//        int i = candidates, j = costs.size() - candidates - 1;
//        for (int g = 0; g < i; ++g){
//            if (g > costs.size() - g - 1) break;
//            pque.emplace(costs[g], g);
//            if (g >= costs.size() - g - 1) break;
//            pque.emplace(costs[costs.size() - g - 1], costs.size() - g - 1);
//        }
//        long long ret = 0;
//        while (k--){
//            auto tmp = pque.top();
//            pque.pop();
//            ret += tmp.first;
//            if (i > j) continue;
//            if (tmp.second > j){
//                pque.emplace(costs[j], j);
//                --j;
//            }else{
//                pque.emplace(costs[i], i);
//                ++i;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
//        vector<int> idxs(quality.size());
//        for (int i = 0; i < idxs.size(); ++i)idxs[i] = i;
//        std::sort(idxs.begin(), idxs.end(), [&](int x, int y){
//            return ((1.0*wage[x])/quality[x]) < ((1.0*wage[y])/quality[y]);
//        });
//        priority_queue<int> pque;
//        double ret = INT_MAX;
//        int sumq = 0;
//        for (const auto &item: idxs){
//            double r = (1.0 * wage[item]) / quality[item];
//            pque.push(quality[item]);
//            sumq += quality[item];
//            if (pque.size() > k){
//                sumq -= pque.top();
//                pque.pop();
//            }
//            if (pque.size() == k)
//                ret = min(ret, sumq * r);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    double average(vector<int>& salary) {
//        int ma = INT_MIN, mi = INT_MAX, sum = 0;
//        for (const auto &item: salary){
//            if (item > ma) ma = item;
//            if (item < mi) mi = item;
//            sum += item;
//        }
//        return (1.0 * sum - ma - mi) / (salary.size() - 2);
//    }
//};
//class Solution {
//public:
//    vector<int> memo;
//    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
//        memo.resize(startTime.size(), -1);
//        vector<pair<int, pair<int, int>>> vec(startTime.size());
//        for (int i = 0; i < vec.size(); ++i){
//            vec[i].first = startTime[i];
//            vec[i].second.first = endTime[i];
//            vec[i].second.second = profit[i];
//        }
//        std::sort(vec.begin(), vec.end());
//        return dfs(0, vec);
//    }
//    int dfs(int idx, vector<pair<int, pair<int, int>>>& vec){
//        if (idx >= vec.size()) return 0;
//        if (memo[idx] != -1) return memo[idx];
//        int ret = dfs(idx + 1, vec);
//        auto it = std::lower_bound(vec.begin(), vec.end(), make_pair(vec[idx].second.first, make_pair(0, 0)));
//        int nidx = it - vec.begin();
//        ret = max(ret, vec[idx].second.second + dfs(nidx, vec));
//        memo[idx] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> decrypt(vector<int>& code, int k) {
//        vector<int> ret(code.size(), 0);
//        if (!k) return ret;
//        int sum = 0;
//        for (int i = 0; i < abs(k); ++i){
//            sum += code[i];
//        }
//        if (k > 0){
//            for (int i = 0; i < code.size(); ++i){
//                ret[(i + code.size() - 1) % code.size()] = sum;
//                sum -= code[i];
//                sum += code[(i + k) % code.size()];
//            }
//        }else{
//            for (int i = 0; i < code.size(); ++i){
//                ret[(i + code.size() - k) % code.size()] = sum;
//                sum -= code[i];
//                sum += code[(i - k) % code.size()];
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<vector<vector<int>>> memo;
//    int cherryPickup(vector<vector<int>>& grid) {
//        memo.resize(2 * grid.size(), vector<vector<int>>(grid.size(), vector<int>(grid.size(), -1)));
//        int ret = dfs(2 * grid.size() - 2, grid.size() - 1, grid.size() - 1, grid);
//        return max(ret, 0);
//    }
//    int dfs(int n, int x, int y, vector<vector<int>>& grid){
//        if (!n && !x && !y) return grid[0][0];
//        if (x > n || y > n || x < 0 || y < 0 || grid[x][n - x] == -1 || grid[y][n - y] == -1) return INT_MIN;
//        if (memo[n][x][y] != -1) return memo[n][x][y];
//        int ret =  max(
//                max(dfs(n - 1, x, y, grid), dfs(n - 1, x - 1, y, grid)),
//                max(dfs(n - 1, x, y - 1, grid), dfs(n - 1, x - 1, y - 1, grid))
//                ) + (x == y ? grid[x][n - x] : grid[x][n - x] + grid[y][n - y]);
//        memo[n][x][y] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int wateringPlants(vector<int>& plants, int capacity) {
//        int cp = capacity, ret = 0;
//        for (int i = 0; i < plants.size(); ++i){
//            if (cp < plants[i]){
//                cp = capacity;
//                if (!ret) ret += 3 * i;
//                else ret += 2 * i;
//            }
//            cp -= plants[i];
//            ++ret;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<vector<vector<int>>> memo;
//    int cherryPickup(vector<vector<int>>& grid) {
//        memo.resize(grid[0].size(), vector<vector<int>>(grid[0].size(), vector<int>(grid.size(), -1)));
//        return dfs(0, grid[0].size() - 1, 0, grid);
//    }
//    int dfs(int i, int j, int d, vector<vector<int>>& grid){
//        if (min(i, j) < 0 || max(i, j) >= grid[0].size() || d >= grid.size())
//            return 0;
//        if (memo[i][j][d] != -1) return memo[i][j][d];
//        int s = grid[d][i];
//        if (i != j) s += grid[d][j];
//        int ret = 0;
//        for (int idxi = i - 1; idxi <= i + 1; ++idxi) {
//            for (int idxj = j - 1; idxj <= j + 1; ++idxj) {
//                ret = max(ret, dfs(idxi, idxj, d + 1, grid) + s);
//            }
//        }
//        memo[i][j][d] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
//        int a = capacityA, b = capacityB, ret = 0;
//        for (int i = 0; i < (plants.size() / 2) ; ++i){
//            if (a < plants[i]){
//                a = capacityA;
//                ++ret;
//            }
//            a -= plants[i];
//            if (b < plants[plants.size() - 1 - i]){
//                b = capacityB;
//                ++ret;
//            }
//            b -= plants[plants.size() - 1 - i];
//        }
//        if (plants.size() % 2)
//            if (plants[plants.size() / 2] > max(a, b))
//                ++ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int countTestedDevices(vector<int>& batteryPercentages) {
//        int ret = 0;
//        for (const auto &item: batteryPercentages){
//            if (item > ret){
//                ++ret;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//        int m, p, g, mi = 0, pi = 0, gi = 0, ret = 0;
//        for (int i = 0; i < garbage.size(); ++i){
//            m = 0;
//            p = 0;
//            g = 0;
//            for (const auto &item: garbage[i]){
//                if (item == 'M') ++m;
//                else if (item == 'P') ++p;
//                else ++g;
//            }
//            if (m){
//                ret += m;
//                while (mi < i){
//                    ret += travel[mi++];
//                }
//            }
//            if (p){
//                ret += p;
//                while (pi < i){
//                    ret += travel[pi++];
//                }
//            }
//            if (g){
//                ret += g;
//                while (gi < i){
//                    ret += travel[gi++];
//                }
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, int> memo;
//    int minDays(int n) {
//        if (n <= 1) return n;
//        if (memo.count(n)) return memo[n];
//        int ret = min(minDays(n / 2) + n % 2, minDays(n / 3) + n % 3) + 1;
//        memo[n] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    bool check(vector<vector<int>>& grid){
//        for (const auto &item: grid){
//            for (const auto &item2: item){
//                if (item2 == 1) return false;
//            }
//        }
//        return true;
//    }
//    int orangesRotting(vector<vector<int>>& grid) {
//        int time = 0;
//        while (!check(grid)){
//            vector<vector<int>> tmp = grid;
//            for (int i = 0; i < grid.size(); ++i){
//                for (int j = 0; j < grid[i].size(); ++j){
//                    if (grid[i][j] == 2){
//                        if (i - 1 >= 0 && tmp[i - 1][j] == 1){
//                            tmp[i - 1][j] = 2;
//                        }
//                        if (j - 1 >= 0 && tmp[i][j - 1] == 1){
//                            tmp[i][j - 1] = 2;
//                        }
//                        if (i + 1 < grid.size() && tmp[i + 1][j] == 1){
//                            tmp[i + 1][j] = 2;
//                        }
//                        if (j + 1 < grid[0].size() && tmp[i][j + 1] == 1){
//                            tmp[i][j + 1] = 2;
//                        }
//                    }
//                }
//            }
//            if (grid == tmp) return -1;
//            grid = move(tmp);
//            ++time;
//        }
//        return time;
//    }
//};
//class Solution {
//public:
//    int minimumRounds(vector<int>& tasks) {
//        int ret = 0;
//        unordered_map<int, int> mp;
//        for (const auto &item: tasks){
//            ++mp[item];
//        }
//        for (const auto &item: mp){
//            if (item.second == 1) return -1;
//            ret += item.second / 3;
//            if (item.second % 3){
//                ++ret;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//        vector<pair<int, int>> pd(profit.size());
//        for (int i = 0; i < pd.size(); ++i){
//            pd[i].first = profit[i];
//            pd[i].second = difficulty[i];
//        };
//        std::sort(pd.begin(), pd.end(), greater<>());
//        map<int, int> mp;
//        for (const auto &item: worker){
//            ++mp[item];
//        }
//        int ret = 0;
//        for (const auto &item: pd){
//            auto it = mp.lower_bound(item.second);
//            while (it != mp.end()){
//                ret += (it->second * item.first);
//                mp.erase(it);
//                it = mp.lower_bound(item.second);
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
//        int ret = INT_MAX, mx = 0;
//        for (const auto &item: divisors){
//            int s = 0;
//            for (const auto &n: nums){
//                if (!(n % item)) ++s;
//            }
//            if (s >= mx){
//                if (s == mx){
//                    if (ret > item)
//                        ret = item;
//                }else{
//                    mx = s;
//                    ret = item;
//                }
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int getWinner(vector<int>& arr, int k) {
//        if (k >= arr.size() - 1){
//            int mx = 0;
//            for (const auto &item: arr){
//                mx = max(mx, item);
//            }
//        }
//        int winer = arr[0], sz = 0;
//        for (int i = 1; i < arr.size(); ++i){
//            if (winer > arr[i]) ++sz;
//            else{
//                sz = 0;
//                winer = arr[i];
//            }
//            if (sz == k) return winer;
//        }
//        return winer;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, int> mp;
//    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
//        for (const auto &item: matches){
//            mp[item[0]] = mp[item[0]];
//            ++mp[item[1]];
//        }
//        vector<vector<int>> ret = vector(2, vector<int>());
//        for (const auto &item: mp){
//            if (item.second == 1){
//                ret[1].emplace_back(item.first);
//            } else if (item.second == 0){
//                ret[0].emplace_back(item.first);
//            }
//        }
//        std::sort(ret[0].begin(), ret[0].end());
//        std::sort(ret[1].begin(), ret[1].end());
//        return ret;
//    }
//};
//class Solution {
//public:
//    unordered_map<int, vector<int>> mp;
//    int longestEqualSubarray(vector<int>& nums, int k) {
//        for (int i = 0; i < nums.size(); ++i){
//            mp[nums[i]].emplace_back(i);
//        }
//        int ret = 0;
//        for (const auto &item: mp){
//            int i = 0;
//            for (int j = 0; j < item.second.size(); ++j){
//                while (item.second[j] - item.second[i] - j + i > k) ++i;
//                ret = max(ret, j - i + 1);
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> mostCompetitive(vector<int>& nums, int k) {
//        vector<int> ret;
//        for (int i = 0; i < nums.size(); ++i){
//            while (!ret.empty() && ret.back() > nums[i] && nums.size() - i + ret.size() > k) ret.pop_back();
//            if (ret.size() < k) ret.emplace_back(nums[i]);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
//        if (!indexDifference && !valueDifference)
//            return {0, 0};
//        if (nums.size() ==  1)
//            return {-1, -1};
//        pair<int, int> ma = make_pair(nums.front(), 0), mi = make_pair(nums.front(), 0);
//        for (int i = indexDifference; i < nums.size(); ++i){
//            if (abs(nums[i] - ma.first) >= valueDifference)
//                return {ma.second, i};
//            if (abs(nums[i] - mi.first) >= valueDifference)
//                return {mi.second, i};
//            if (nums[i - indexDifference + 1] > ma.first) {
//                ma.first = nums[i - indexDifference + 1];
//                ma.second = i - indexDifference + 1;
//            }
//            if (nums[i - indexDifference + 1] < mi.first) {
//                mi.first = nums[i - indexDifference + 1];
//                mi.second = i - indexDifference + 1;
//            }
//        }
//        return {-1, -1};
//    }
//};
//class Solution {
//public:
//    int kthLargestValue(vector<vector<int>>& matrix, int k) {
//        priority_queue<int> pque;
//        for (int i = 0; i < matrix.size(); ++i){
//            for (int j = 0; j < matrix[0].size(); ++j){
//                if (i - 1 < 0 && j - 1 < 0) {
//                    pque.push(matrix[i][j]);
//                    continue;
//                }
//                if (i - 1 < 0){
//                    matrix[i][j] ^= matrix[i][j - 1];
//                }else if (j - 1 < 0){
//                    matrix[i][j] ^= matrix[i - 1][j];
//                }else{
//                    matrix[i][j] ^= matrix[i][j - 1] ^ matrix[i - 1][j] ^ matrix[i - 1][j - 1];
//                }
//                pque.push(matrix[i][j]);
//            }
//        }
//        while (--k){
//            pque.pop();
//        }
//        return pque.top();
//    }
//};
//class Solution {
//public:
//    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
//        if (mean == 1 || mean == 6){
//            for (const auto &item: rolls)
//                if (item != mean)
//                    return {};
//            return vector(n, mean);
//        }
//        int sum = 0;
//        for (const auto &item: rolls)
//            sum += item - mean;
//        if (sum > (mean - 1) * n || sum < -n * (6 - mean))
//            return {};
//        if(sum > 0){
//            vector<int> ret(sum / (mean - 1), 1);
//            ret.push_back(mean - sum % (mean - 1));
//            ret.resize(n, mean);
//            return ret;
//        }else{
//            vector<int> ret((-sum) / (6 - mean), 6);
//            ret.push_back(mean + ((-sum) % (6 - mean)));
//            ret.resize(n, mean);
//            return ret;
//        }
//    }
//};
//class Solution {
//public:
//    int maximumLength(string s) {
//        unordered_map<char, vector<int>> mp;
//        char tc = s[0];
//        int sz = 1;
//        for (int i = 1; i < s.size(); ++i){
//            if(s[i] == s[i - 1]) ++sz;
//            else{
//                mp[tc].push_back(sz);
//                tc = s[i];
//                sz = 1;
//            }
//        }
//        mp[tc].push_back(sz);
//        int ret = -1;
//        for (auto &item: mp){
//            std::sort(item.second.begin(), item.second.end(), greater<>());
//            if (item.second.size() >= 3)
//                ret = max(ret, item.second[2]);
//            if (item.second.size() >= 2)
//                if (item.second[1] < item.second[0])
//                    ret = max(ret, item.second[1]);
//                else if (item.second[1] > 1)
//                    ret = max(ret, item.second[1] - 1);
//            if (item.second[0] >= 3)
//                ret = max(ret, item.second[0] - 2);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//        vector<int> vec, ret(2);
//        for (const auto &item: grid)
//            for (const auto &i: item)
//                vec.push_back(i);
//        std::sort(vec.begin(), vec.end());
//        if (vec[0] != 1)
//            ret[1] = 1;
//        if (vec.back() != grid.size() * grid.size())
//            ret[1] = grid.size() * grid.size();
//        for (int i = 1; i < vec.size(); ++i){
//            if (vec[i] == vec[i - 1])
//                ret[0] = vec[i];
//            if (vec[i] > vec[i - 1] + 1)
//                ret[1] = vec[i] - 1;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int distributeCandies(int n, int limit) {
//        int ret = 0;
//        for (int i = 0; i <= min(limit, n); ++i){
//            for (int j = 0; j <= min(n - i, limit); ++j){
//                if ((n - i - j) <= limit)
//                    ++ret;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int distributeCandies(vector<int>& candyType) {
//        unordered_set<int> st;
//        for (const auto &item: candyType)
//            st.insert(item);
//        return min(candyType.size() / 2, st.size());
//    }
//};
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        string st0 = strs[0];
//        int sidx = st0.size();
//        for (int i = 1; i < strs.size(); ++i){
//            int j = 0;
//            for (; j < strs[i].size(); ++j)
//                if (strs[i][j] != st0[j])
//                    break;
//            sidx = min(sidx, j);
//        }
//        st0.resize(sidx);
//        return st0;
//    }
//};
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        return std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//    }
//};
//class Solution {
//public:
//    vector<int> distributeCandies(int candies, int num_people) {
//        vector<int> ret(num_people);
//        int i = 0, s = 1;
//        while (candies){
//            ret[(i++) % num_people] += min(s, candies);
//            candies -= min(s++, candies);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long minimumSteps(string s) {
//        long long ret = 0;
//        int nx = s.size() - 1;
//        for (int i = s.size() - 1; i >= 0; --i){
//            if (s[i] == '1') {
//                ret += nx - i;
//                --nx;
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<vector<int>> memo;
//    int maxOperations(vector<int>& nums) {
//        if (nums.size() < 4) return 1;
//        memo.resize(nums.size(), vector(nums.size(),-1));
//        int ret = dp(1, nums.size() - 2, nums.back() + nums.front(), nums);
//        for (auto &arr: memo)
//            for (auto &item: arr) item = -1;
//        ret = max(ret, dp(0, nums.size() - 3, nums.back() + nums[nums.size() - 2], nums));
//        for (auto &arr: memo)
//            for (auto &item: arr) item = -1;
//        ret = max(ret, dp(2, nums.size() - 1, nums.front() + nums[1], nums));
//        return ret + 1;
//    }
//    int dp(int right, int left, int sum, vector<int>& nums){
//        if (memo[right][left] != -1) return memo[right][left];
//        if (left - right == 1) return nums[left] + nums[right] == sum;
//        if (left == right) return 0;
//        int ret = 0;
//        if(nums[left] + nums[right] == sum) ret = max(ret, dp(right + 1, left - 1, sum, nums) + 1);
//        if(nums[left] + nums[left - 1] == sum) ret = max(ret, dp(right, left - 2, sum, nums) + 1);
//        if(nums[right] + nums[right + 1] == sum) ret = max(ret, dp(right + 2, left, sum, nums) + 1);
//        memo[right][left] = ret;
//        return ret;
//    }
//};
//class Solution {
//public:
//    int numRescueBoats(vector<int>& people, int limit) {
//        map<int, int> mp;
//        for (const auto &item: people)
//            ++mp[item];
//        int ret = 0;
//        while (!mp.empty()){
//            auto bg = mp.begin();
//            auto it = mp.upper_bound(limit - bg->first);
//            if (it == bg){
//                if (!--(bg->second)){
//                    mp.erase(bg);
//                }
//            }else{
//                --it;
//                if (it == bg){
//                    if (bg->second > 2){
//                        bg->second -= 2;
//                    }else{
//                        mp.erase(bg);
//                    }
//                }else{
//                    if (!--(bg->second)){
//                        mp.erase(bg);
//                    }
//                    if (!--(it->second)){
//                        mp.erase(it);
//                    }
//                }
//            }
//            ++ret;
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int countBattleships(vector<vector<char>>& board) {
//        int ret = 0;
//        for (int i = 0; i < board.size(); ++i){
//            bool bol = true;
//            for (int j = 0; j < board[0].size(); ++j){
//                if (board[i][j] == 'X'){
//                    if (bol && (i - 1 < 0 || board[i - 1][j] != 'X') && (j - 1 < 0 || board[i][j - 1] != 'X')) ++ret;
//                    bol = false;
//                }else{
//                    bol = true;
//                }
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    long long findMaximumElegance(vector<vector<int>>& items, int k) {
//        long long total_profit = 0;
//        unordered_set<int> st;
//        vector<int> stk;
//        std::sort(items.begin(), items.end(), greater<>());
//        for (int i = 0; i < k; ++i){
//            total_profit += items[i][0];
//            if (st.count(items[i][1]))
//                stk.emplace_back(items[i][0]);
//            else
//                st.insert(items[i][1]);
//        }
//        long long ret = total_profit + 1l * st.size() * st.size();
//        for (int i = k; i < items.size(); ++i){
//            if (!(st.count(items[i][1]) || stk.empty())){
//                st.insert(items[i][1]);
//                total_profit = total_profit + items[i][0] - stk.back();
//                stk.pop_back();
//                ret = max(ret, (long long)(total_profit + 1l * st.size() * st.size()));
//            }
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    vector<long long> memo;
//    long long maxScore(vector<int>& nums, int x) {
//        memo.resize(2, 0);
//        memo[nums[0] % 2] = nums[0];
//        memo[(nums[0] + 1) % 2] = nums[0] - x;
//        for (int i = 1; i < nums.size(); ++i)
//            memo[nums[i] % 2] = max(memo[nums[i] % 2], memo[(nums[i] + 1) % 2] - x) + nums[i];
//        return max(memo[0], memo[1]);
//    }
//};
//class Solution {
//public:
//    int maximumBeauty(vector<int>& nums, int k) {
//        int ret = 0, i = 0;
//        std::sort(nums.begin(), nums.end());
//        for (int j = 0; j < nums.size(); ++j){
//            while (nums[j] - nums[i] > 2 * k) ++i;
//            ret = max(ret, j - i + 1);
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int countBeautifulPairs(vector<int>& nums) {
//        int cut = 0;
//        array<int, 10> arr{};
//        for (const auto &item: nums)
//            ++arr[item % 10];
//        for (auto item: nums){
//            --arr[item % 10];
//            while (item >= 10)item/=10;
//            for (int i = 0; i < 10; ++i) {
//                if (gcd(item, i) == 1)
//                    cut += arr[i];
//            }
//        }
//        return cut;
//    }
//};
//class Solution {
//public:
//    int temperatureTrend(vector<int>& temperatureA, vector<int>& temperatureB) {
//        int ret = 0, wsz = 0;
//        for (int i = 1; i < temperatureA.size(); ++i){
//            if ((temperatureA[i] > temperatureA[i - 1] && temperatureB[i] > temperatureB[i - 1]) ||
//            (temperatureA[i] < temperatureA[i - 1] && temperatureB[i] < temperatureB[i - 1]) ||
//            (temperatureA[i] == temperatureA[i - 1] && temperatureB[i] == temperatureB[i - 1]))
//                ++wsz;
//            else wsz = 0;
//            ret = max(ret, wsz);
//        }
//        return ret;
//    }
//};
