---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: data_structure/persistent_uf.hpp
    title: "\u5B8C\u5168\u6C38\u7D9A Union-Find Tree"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/persistent_array.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a),\
    \ end(a)\n#define rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)),\
    \ (a).end())\n#define SZ(x) ((int)(x).size())\n#define pb(x) push_back(x)\n#define\
    \ eb(x) emplace_back(x)\n#define vsum(x) reduce(all(x))\n#define vmax(a) *max_element(all(a))\n\
    #define vmin(a) *min_element(all(a))\n#define LB(c, x) distance((c).begin(), lower_bound(all(c),\
    \ (x)))\n#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))\n#define\
    \ mp make_pair\n#define endl '\\n'\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing ld = long double;\nusing Pi = pair<int, int>;\nusing Pl =\
    \ pair<ll, ll>;\nusing Vi = vector<int>;\nusing Vl = vector<ll>;\nusing Vc = vector<char>;\n\
    using VVi = vector<vector<int>>;\nusing VVl = vector<vector<ll>>;\nusing VVc =\
    \ vector<vector<char>>;\nconstexpr ll inf = 1000000000ll;\nconstexpr ll INF =\
    \ 4000000004000000000LL;\nconstexpr ld eps = 1e-15;\nconstexpr ld PI = 3.141592653589793;\n\
    constexpr int popcnt(ull x) { return __builtin_popcountll(x); }\ntemplate <typename\
    \ T> using mat = vector<vector<T>>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1,\
    \ -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> constexpr T mypow(T x, ll n) {\n    T ret = 1;\n    while (n) {\n       \
    \ if (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n    }\n    return ret;\n\
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
    \    };\n} iOS;\n#line 4 \"data_structure/persistent_array.hpp\"\n\ntemplate <typename\
    \ T, int SHIFT> struct persistent_array {\n    using ptr = shared_ptr<persistent_array>;\n\
    \    static constexpr int BASE = bit(SHIFT);\n    static constexpr int MASK =\
    \ BASE - 1;\n    T val;\n    array<ptr, BASE> ch;\n    persistent_array(int n\
    \ = 1, T val = T()) : val(val) {\n        for (int i : rep(BASE)) {\n        \
    \    int m = (n >> SHIFT) + ((n & MASK) > i);\n            if (m > 1 || m > 0\
    \ && i > 0) ch[i] = ptr(new persistent_array(m, val));\n        }\n    }\n   \
    \ persistent_array(T val, const array<ptr, BASE> &ch) : val(val), ch(ch) {}\n\
    \    persistent_array(T val, const array<ptr, BASE> &ch, int i, ptr chp) : val(val),\
    \ ch(ch) { this->ch[i] = chp; }\n    T get(int i) const { return i > 0 ? ch[i\
    \ & MASK]->get(i >> SHIFT) : val; }\n    ptr setp(int i, T val) const {\n    \
    \    return ptr(i > 0 ? new persistent_array(this->val, ch, i & MASK, ch[i & MASK]->setp(i\
    \ >> SHIFT, val))\n                         : new persistent_array(val, ch));\n\
    \    }\n    persistent_array set(int i, T val) const { return *setp(i, val); }\n\
    };\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T, int\
    \ SHIFT> struct persistent_array {\n    using ptr = shared_ptr<persistent_array>;\n\
    \    static constexpr int BASE = bit(SHIFT);\n    static constexpr int MASK =\
    \ BASE - 1;\n    T val;\n    array<ptr, BASE> ch;\n    persistent_array(int n\
    \ = 1, T val = T()) : val(val) {\n        for (int i : rep(BASE)) {\n        \
    \    int m = (n >> SHIFT) + ((n & MASK) > i);\n            if (m > 1 || m > 0\
    \ && i > 0) ch[i] = ptr(new persistent_array(m, val));\n        }\n    }\n   \
    \ persistent_array(T val, const array<ptr, BASE> &ch) : val(val), ch(ch) {}\n\
    \    persistent_array(T val, const array<ptr, BASE> &ch, int i, ptr chp) : val(val),\
    \ ch(ch) { this->ch[i] = chp; }\n    T get(int i) const { return i > 0 ? ch[i\
    \ & MASK]->get(i >> SHIFT) : val; }\n    ptr setp(int i, T val) const {\n    \
    \    return ptr(i > 0 ? new persistent_array(this->val, ch, i & MASK, ch[i & MASK]->setp(i\
    \ >> SHIFT, val))\n                         : new persistent_array(val, ch));\n\
    \    }\n    persistent_array set(int i, T val) const { return *setp(i, val); }\n\
    };"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/persistent_array.hpp
  requiredBy:
  - data_structure/persistent_uf.hpp
  timestamp: '2021-09-17 00:26:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  - test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
documentation_of: data_structure/persistent_array.hpp
layout: document
title: "\u5B8C\u5168\u6C38\u7D9A\u914D\u5217"
---

## 概要
- コピー可能な配列。
- `using ptr` を `shared_ptr<persistent_array>` から `persistent_array *` に変更するといくらか性能が良くなる。しかし参照の切れたメモリが開放されないので、行う処理によっては危険である。

## 詳細
- `<typename T, int SHIFT> struct persistent_array`  
    永続配列本体。

    - `typename T`  
        テンプレート引数として与える、要素の型。

    - `int SHIFT`  
        テンプレート引数として与える値。 $2^{SHIFT}$ 分木として表現する。通常の使用では $2$ 程度にするとよい。

    - `(constructor)(int n = 1, T val = T())`  
        長さ $n$ 、全要素 $val$ で初期化。

    - `T get(int i)`  
        $i$ 番目の値を取得する。 $O(\log n)$ 時間。

    - `persistent_array set(int i, T val)`  
        $i$ 番目の値だけが $val$ に置き換えられた新たな完全永続配列を返す。$O(\log n)$ 時間および空間。

## 参考
- [37zigen さんの記事](https://37zigen.com/persistent-array/)