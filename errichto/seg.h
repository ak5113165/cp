//CF: Ankit Singh

#include<bits/stdc++.h>
using namespace std;
struct item{
    int val1, pos;   // val1 is acutal value of node val2 is count.
};
struct segtree{
    int n;
    vector<item> t;
    void init(int sz){
        n=sz;
        t.resize(4*n+5);
    }
    item merge(item a, item b){  // check this func, this is for min and its count on segment.
        if(a.pos==0){
        	return {(a.val1 | b.val1), 1};
        }else{
        	return {(a.val1 xor b.val1), 0};
        }
    }
    item neutral={0,0};  // check here
    item single(int v){
        return {v,0};      // check here
    };
    void build(int v,int tl, int tr,vector<int>& arr){
        if(tl==tr){
            t[v]=single(arr[tl]);
            return;
        }
        ll tm=(tr+tl)/2;
        build(2*v,tl, tm,arr);
        build(2*v+1,tm+1, tr, arr);
        t[v]=merge(t[2*v],t[2*v+1]);
    }
    void build(vector<int>&arr){
        n=arr.size();
        init(n);
        build(1,0,n-1,arr);
    }
    void update(int v,int tl, int tr,int id, int val){
        if(id<tl||id>tr)
            return;
        if(tl==tr){
            t[v]=single(val);
            return;
        }  
        int tm=(tl+tr)/2;
        update(2*v,tl, tm, id, val);
        update(2*v+1,tm+1, tr, id, val);
        t[v]=merge(t[2*v],t[2*v+1]);
    }
    void update(int id, int val){
        update(1,0,n-1,id, val);
    }
    item query(int v, int tl, int tr, int l , int r){
        if(tl>=l&&tr<=r)
            return t[v];
        if(tl>r||tr<l)
            return neutral;
        int tm=(tl+tr)/2;
        return merge(query(2*v,tl, tm, l, r),query(2*v+1, tm+1, tr, l, r));
    }
    item query(int l, int r){
        return query(1,0,n-1, l, r);
    }
};
//input array is not initialized, it can be 0 index based.


void test_case()
{
	int n,m; cin>>n>>m;
	n = (int)pow(2,n);
	vi a; readvec(a,n);
	segtree st;
	st.build(a);
	// dbsegtree3(st,n,val1);
	while(m--){
		int p,b; cin>>p>>b;
		st.update(p-1,b);
		cout<<st.query(0,n-1).val1<<endl;
	}
}
int32_t main() {
	//clock_t begin = clock();
	fast();
	ll tt = 1;
	// cin >> tt;
	while (tt--) {
		test_case();
	}
	//clock_t end = clock();
	//cout << endl << "Executed in : " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
	return 0;
}






