#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(a) for(int i = 0; i < a; i++)
#define loopv(i,a) for (int i = 0; i < a; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

struct segtree {
    int size;
    vector<int> tree;

    void build(vector<int> &a) {
        size = 1;
        while (size < a.size()) size *= 2;
        tree.assign(2*size, 0);
        build(a, 0, 0, size);
    }

    void build(vector<int> &a, int x, int lx, int rx) {
        if (rx == lx + 1) {
            if (lx < a.size()) {
                tree[x] = a[lx];
            }
        } else {
            int m = (lx + rx) / 2;
            build(a, 2*x+1, lx, m);
            build(a, 2*x+2, m, rx);
            tree[x] = max(tree[2*x+1], tree[2*x+2]);
        }
    }

    void set(int idx, int v) {
        set(idx, v, 0, 0, size);
    }

    void set(int idx, int v, int x, int lx, int rx) {
        if (rx == lx+1) {
            tree[x] = v;
        } else {
            int m = (lx + rx) / 2;
            if (idx < m)
                set(idx, v, 2*x+1, lx, m);
            else
                set(idx, v, 2*x+2, m, rx);
            tree[x] = max(tree[2*x+1], tree[2*x+2]);
        }
    }

    int find(int v) {
        return find(v, 0, 0, size);
    }

    int find(int v, int x, int lx, int rx) {
        if (tree[x] < v) return -1;
        if (rx == lx + 1) return lx;
        int m = (lx + rx) / 2;
        int res = find(v, 2*x+1, lx, m);
        if (res == -1)
            res = find(v, 2*x+2, m, rx);
        return res;
    }
};

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    loop(n) cin >> a[i];

    segtree st;
    st.build(a);

    int cmd, i, v;
    while (m--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> i >> v;
            st.set(i, v);
        } else {
            cin >> v;
            cout << st.find(v) << endl;
        }
    }

    return 0;
}