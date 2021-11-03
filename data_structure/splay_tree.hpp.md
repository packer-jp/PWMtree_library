---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/splay_tree.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a),\
    \ end(a)\n#define rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)),\
    \ (a).end())\n#define SZ(x) int((x).size())\n#define pb(x) push_back(x)\n#define\
    \ eb(x) emplace_back(x)\n#define vsum(x) reduce(all(x))\n#define vmax(a) *max_element(all(a))\n\
    #define vmin(a) *min_element(all(a))\n#define LB(c, x) distance((c).begin(), lower_bound(all(c),\
    \ (x)))\n#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))\n#define\
    \ mp make_pair\n#define endl '\\n'\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing ld = long double;\nusing Pi = pair<int, int>;\nusing Pl =\
    \ pair<ll, ll>;\nusing Vi = vector<int>;\nusing Vl = vector<ll>;\nusing Vc = vector<char>;\n\
    using VVi = vector<vector<int>>;\nusing VVl = vector<vector<ll>>;\nusing VVc =\
    \ vector<vector<char>>;\ntemplate <typename T, typename U> using P = pair<T, U>;\n\
    template <typename T> using V = vector<T>;\ntemplate <typename T> using VV = V<V<T>>;\n\
    constexpr ll inf = 1000000000ll;\nconstexpr ll INF = 4000000004000000000LL;\n\
    constexpr ld eps = 1e-15;\nconstexpr ld PI = 3.141592653589793;\nconstexpr int\
    \ popcnt(ull x) { return __builtin_popcountll(x); }\ntemplate <typename T> using\
    \ mat = vector<vector<T>>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\n\
    constexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a)\
    \ { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b\
    \ - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a,\
    \ b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename T>\
    \ constexpr T mypow(T x, ll n) {\n    T ret = 1;\n    while (n) {\n        if\
    \ (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n    }\n    return ret;\n\
    }\nconstexpr ll modpow(ll x, ll n, ll mod) {\n    ll ret = 1;\n    while (n) {\n\
    \        if (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n        x %=\
    \ mod;\n        ret %= mod;\n    }\n    return ret;\n}\ntemplate <typename T>\
    \ T xor64(T lb, T ub) {\n    static ull x = 88172645463325252ull;\n    x ^= x\
    \ << 7;\n    return lb + (x ^= x >> 9) % (ub - lb);\n}\nconstexpr ll safemod(ll\
    \ x, ll mod) { return (x % mod + mod) % mod; }\ntemplate <typename T> constexpr\
    \ T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> bool chmin(T &a, const U &b) { return a > b ? a = b,\
    \ true : false; }\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const pair<T, U> &a) {\n    os << \"(\" << a.first << \", \" << a.second\
    \ << \")\";\n    return os;\n}\ntemplate <typename T, typename U, typename V>\
    \ ostream &operator<<(ostream &os, const tuple<T, U, V> &a) {\n    os << \"(\"\
    \ << get<0>(a) << \", \" << get<1>(a) << \", \" << get<2>(a) << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ set<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\ntemplate <typename T> void print(const T\
    \ &a) { cout << a << endl; }\ntemplate <typename T> void print(const vector<T>\
    \ &v) {\n    for (auto &e : v) cout << e << \" \";\n    cout << endl;\n}\ntemplate\
    \ <typename T> void scan(vector<T> &a) {\n    for (auto &i : a) cin >> i;\n}\n\
    struct timer {\n    clock_t start_time;\n    void start() { start_time = clock();\
    \ }\n    int lap() {\n        // return x ms.\n        return (clock() - start_time)\
    \ * 1000 / CLOCKS_PER_SEC;\n    }\n};\ntemplate <typename T = int> struct Edge\
    \ {\n    int from, to;\n    T cost;\n    int idx;\n\n    Edge() = default;\n\n\
    \    Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost),\
    \ idx(idx) {}\n\n    operator int() const { return to; }\n};\ntemplate <typename\
    \ T = int> struct Graph {\n    vector<vector<Edge<T>>> g;\n    int es;\n\n   \
    \ Graph() = default;\n\n    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t\
    \ size() const { return g.size(); }\n\n    void add_directed_edge(int from, int\
    \ to, T cost = 1) { g[from].emplace_back(from, to, cost, es++); }\n\n    void\
    \ add_edge(int from, int to, T cost = 1) {\n        g[from].emplace_back(from,\
    \ to, cost, es);\n        g[to].emplace_back(to, from, cost, es++);\n    }\n\n\
    \    void read(int M, int padding = -1, bool weighted = false, bool directed =\
    \ false) {\n        for (int i = 0; i < M; i++) {\n            int a, b;\n   \
    \         cin >> a >> b;\n            a += padding;\n            b += padding;\n\
    \            T c = T(1);\n            if (weighted) cin >> c;\n            if\
    \ (directed)\n                add_directed_edge(a, b, c);\n            else\n\
    \                add_edge(a, b, c);\n        }\n    }\n};\n#ifdef ONLINE_JUDGE\n\
    #define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename\
    \ Head, typename... Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr\
    \ << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n\
    #define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(itr i) const { return v < *i; }\n    };\n    ll\
    \ l, r;\n    rep(ll l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n \
    \   itr begin() const { return l; };\n    itr end() const { return r; };\n};\n\
    struct per {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n \
    \       void operator++() { --v; }\n        ll operator*() const { return v; }\n\
    \        bool operator!=(itr i) const { return v > *i; }\n    };\n    ll l, r;\n\
    \    per(ll l, ll r) : l(l), r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\nstruct\
    \ io_setup {\n    static constexpr int PREC = 20;\n    io_setup() {\n        cout\
    \ << fixed << setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n\
    \    };\n} iOS;\n#line 4 \"data_structure/splay_tree.hpp\"\n\ntemplate <typename\
    \ T> struct splay_tree {\n    struct node {\n        node *left, *right, *par;\n\
    \        int size;\n        T val;\n        node(T val) : left(nullptr), right(nullptr),\
    \ par(nullptr), size(1), val(val) {}\n        void rotate() {\n            node\
    \ *p, *pp, *c;\n            p = par, pp = p->par;\n            if (p->left ==\
    \ this) {\n                c = right, right = p, p->left = c;\n            } else\
    \ {\n                c = left, left = p, p->right = c;\n            }\n      \
    \      if (pp) {\n                if (pp->left == p) {\n                    pp->left\
    \ = this;\n                } else {\n                    pp->right = this;\n \
    \               }\n            }\n            if (c) c->par = p;\n           \
    \ par = pp, p->par = this;\n            p->update();\n            update();\n\
    \        }\n        int state() {\n            if (!par) { return 0; }\n     \
    \       if (par->left == this) {\n                return 1;\n            } else\
    \ {\n                return -1;\n            }\n        }\n        void splay()\
    \ {\n            while (state() != 0) {\n                if (par->state() == 0)\
    \ {\n                    rotate();\n                } else if (state() == par->state())\
    \ {\n                    par->rotate(), rotate();\n                } else {\n\
    \                    rotate(), rotate();\n                }\n            }\n \
    \       }\n        void update() {\n            size = 1;\n            if (left)\
    \ size += left->size;\n            if (right) size += right->size;\n        }\n\
    \    };\n    node *root;\n    splay_tree(node *root = nullptr) : root(root) {}\n\
    \    int size() { return root ? root->size : 0; }\n    node *get_node(int i) {\n\
    \        node *cur = root;\n        while (true) {\n            int size_l = cur->left\
    \ ? cur->left->size : 0;\n            if (i < size_l) cur = cur->left;\n     \
    \       if (i == size_l) {\n                cur->splay();\n                return\
    \ root = cur;\n            }\n            if (i > size_l) cur = cur->right, i\
    \ -= size_l + 1;\n        }\n    }\n    T &operator[](int i) { return get_node(i)->val;\
    \ }\n    template <typename F> int lower_bound(F f) {\n        if (!root) return\
    \ 0;\n        node *cur = root;\n        int ret = -1;\n        while (true) {\n\
    \            if (cur->state() < 1) {\n                ret += cur->left ? cur->left->size\
    \ + 1 : 1;\n            } else {\n                ret -= cur->right ? cur->right->size\
    \ + 1 : 1;\n            }\n            if (f(cur->val)) {\n                if\
    \ (cur->left) {\n                    cur = cur->left;\n                } else\
    \ {\n                    cur->splay(), root = cur;\n                    return\
    \ ret;\n                }\n            } else {\n                if (cur->right)\
    \ {\n                    cur = cur->right;\n                } else {\n       \
    \             cur->splay(), root = cur;\n                    return ret + 1;\n\
    \                }\n            }\n        }\n    }\n    splay_tree split(int\
    \ size_left) {\n        if (size_left == 0) {\n            node *root_r = root;\n\
    \            root = nullptr;\n            return root_r;\n        }\n        if\
    \ (size_left == root->size) return nullptr;\n        node *root_r = get_node(size_left);\n\
    \        root = root_r->left;\n        root_r->left = nullptr, root->par = nullptr;\n\
    \        root_r->update();\n        return root_r;\n    }\n    void merge(splay_tree\
    \ right) {\n        if (!root) {\n            root = right.root;\n           \
    \ return;\n        }\n        if (!right.root) return;\n        get_node(root->size\
    \ - 1);\n        root->right = right.root, right.root->par = root;\n        root->update();\n\
    \    }\n    void insert(int i, T val) {\n        splay_tree vt = new node(val),\
    \ right = split(i);\n        merge(vt), merge(right);\n    }\n    void erase(int\
    \ i) {\n        splay_tree vt = split(i);\n        splay_tree right = vt.split(1);\n\
    \        delete vt.root;\n        merge(right);\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T> struct\
    \ splay_tree {\n    struct node {\n        node *left, *right, *par;\n       \
    \ int size;\n        T val;\n        node(T val) : left(nullptr), right(nullptr),\
    \ par(nullptr), size(1), val(val) {}\n        void rotate() {\n            node\
    \ *p, *pp, *c;\n            p = par, pp = p->par;\n            if (p->left ==\
    \ this) {\n                c = right, right = p, p->left = c;\n            } else\
    \ {\n                c = left, left = p, p->right = c;\n            }\n      \
    \      if (pp) {\n                if (pp->left == p) {\n                    pp->left\
    \ = this;\n                } else {\n                    pp->right = this;\n \
    \               }\n            }\n            if (c) c->par = p;\n           \
    \ par = pp, p->par = this;\n            p->update();\n            update();\n\
    \        }\n        int state() {\n            if (!par) { return 0; }\n     \
    \       if (par->left == this) {\n                return 1;\n            } else\
    \ {\n                return -1;\n            }\n        }\n        void splay()\
    \ {\n            while (state() != 0) {\n                if (par->state() == 0)\
    \ {\n                    rotate();\n                } else if (state() == par->state())\
    \ {\n                    par->rotate(), rotate();\n                } else {\n\
    \                    rotate(), rotate();\n                }\n            }\n \
    \       }\n        void update() {\n            size = 1;\n            if (left)\
    \ size += left->size;\n            if (right) size += right->size;\n        }\n\
    \    };\n    node *root;\n    splay_tree(node *root = nullptr) : root(root) {}\n\
    \    int size() { return root ? root->size : 0; }\n    node *get_node(int i) {\n\
    \        node *cur = root;\n        while (true) {\n            int size_l = cur->left\
    \ ? cur->left->size : 0;\n            if (i < size_l) cur = cur->left;\n     \
    \       if (i == size_l) {\n                cur->splay();\n                return\
    \ root = cur;\n            }\n            if (i > size_l) cur = cur->right, i\
    \ -= size_l + 1;\n        }\n    }\n    T &operator[](int i) { return get_node(i)->val;\
    \ }\n    template <typename F> int lower_bound(F f) {\n        if (!root) return\
    \ 0;\n        node *cur = root;\n        int ret = -1;\n        while (true) {\n\
    \            if (cur->state() < 1) {\n                ret += cur->left ? cur->left->size\
    \ + 1 : 1;\n            } else {\n                ret -= cur->right ? cur->right->size\
    \ + 1 : 1;\n            }\n            if (f(cur->val)) {\n                if\
    \ (cur->left) {\n                    cur = cur->left;\n                } else\
    \ {\n                    cur->splay(), root = cur;\n                    return\
    \ ret;\n                }\n            } else {\n                if (cur->right)\
    \ {\n                    cur = cur->right;\n                } else {\n       \
    \             cur->splay(), root = cur;\n                    return ret + 1;\n\
    \                }\n            }\n        }\n    }\n    splay_tree split(int\
    \ size_left) {\n        if (size_left == 0) {\n            node *root_r = root;\n\
    \            root = nullptr;\n            return root_r;\n        }\n        if\
    \ (size_left == root->size) return nullptr;\n        node *root_r = get_node(size_left);\n\
    \        root = root_r->left;\n        root_r->left = nullptr, root->par = nullptr;\n\
    \        root_r->update();\n        return root_r;\n    }\n    void merge(splay_tree\
    \ right) {\n        if (!root) {\n            root = right.root;\n           \
    \ return;\n        }\n        if (!right.root) return;\n        get_node(root->size\
    \ - 1);\n        root->right = right.root, right.root->par = root;\n        root->update();\n\
    \    }\n    void insert(int i, T val) {\n        splay_tree vt = new node(val),\
    \ right = split(i);\n        merge(vt), merge(right);\n    }\n    void erase(int\
    \ i) {\n        splay_tree vt = split(i);\n        splay_tree right = vt.split(1);\n\
    \        delete vt.root;\n        merge(right);\n    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/splay_tree.hpp
  requiredBy: []
  timestamp: '2021-11-03 10:53:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
documentation_of: data_structure/splay_tree.hpp
layout: document
title: Splay Tree
---

## 概要
- 平衡二分木の一種で、挿入、削除、分割、連結などが高速に行える列として用いる。

## 詳細
- `<typename T> struct splay_tree`  
    Splay Tree 本体。

    - `typename T`  
        テンプレート引数として与える、要素の型。

    - `int size()`  
        要素数 $n$ を取得する。

    - `T &operator[](int i)`  
        $i$ 番目の要素を取得する。 ならし $O(\log n)$ 時間。

    - `<typename F> int lower_bound(F f)`  
        述語 $f$ について、
        - $f([i])$
        - $i = 0 \lor \lnot f([i - 1])$

        を共に満たす $i$ をいずれか一つ返す。 ならし $O(\log n)$ 時間。

    - `splay_tree split(int size_left)`  
        先頭 $size\,left$ 要素だけを残してそれ以降を切り離し、新たな `splay_tree` として取得する。 ならし $O(\log n)$ 時間。

    - `void merge(splay_tree right)`  
        $right$ を右側に連結する。 $right$ はそれ以降単体で使用してはならない。 ならし $O(\log n)$ 時間。

    - `void insert(int i, T val)`  
        先頭から $i$ 番目となるよう $val$ を挿入する。 ならし $O(\log n)$ 時間。

    - `void erase(int i)`  
        要素 $i$ を削除する。 ならし $O(\log n)$ 時間。

## 備考
- ちゃんとデストラクタを書きたい

## 参考
- [かつっぱさんの動画](https://www.youtube.com/watch?v=M6LcINhgXeM&t=0s)