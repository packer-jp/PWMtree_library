---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/persistent_array.hpp
    title: "\u5B8C\u5168\u6C38\u7D9A\u914D\u5217"
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/persistent_uf.hpp\"\n\n#line 2 \"template.hpp\"\
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
    \    };\n} iOS;\n#line 2 \"data_structure/persistent_array.hpp\"\n\n#line 4 \"\
    data_structure/persistent_array.hpp\"\n\ntemplate <typename T, int SHIFT> struct\
    \ persistent_array {\n    using ptr = shared_ptr<persistent_array>;\n    static\
    \ constexpr int BASE = bit(SHIFT);\n    static constexpr int MASK = BASE - 1;\n\
    \    T val;\n    array<ptr, BASE> ch;\n    persistent_array(int n = 1, T val =\
    \ T()) : val(val) {\n        for (int i : rep(BASE)) {\n            int m = (n\
    \ >> SHIFT) + ((n & MASK) > i);\n            if (m > 1 || m > 0 && i > 0) ch[i]\
    \ = ptr(new persistent_array(m, val));\n        }\n    }\n    persistent_array(T\
    \ val, const array<ptr, BASE> &ch) : val(val), ch(ch) {}\n    persistent_array(T\
    \ val, const array<ptr, BASE> &ch, int i, ptr chp) : val(val), ch(ch) { this->ch[i]\
    \ = chp; }\n    T get(int i) const { return i > 0 ? ch[i & MASK]->get(i >> SHIFT)\
    \ : val; }\n    ptr setp(int i, T val) const {\n        return ptr(i > 0 ? new\
    \ persistent_array(this->val, ch, i & MASK, ch[i & MASK]->setp(i >> SHIFT, val))\n\
    \                         : new persistent_array(val, ch));\n    }\n    persistent_array\
    \ set(int i, T val) const { return *setp(i, val); }\n};\n#line 5 \"data_structure/persistent_uf.hpp\"\
    \n\ntemplate <int SHIFT> struct persistent_uf {\n    int n;\n    persistent_array<int,\
    \ SHIFT> ps;\n    persistent_uf(int n) : n(n), ps(n, -1) {}\n    persistent_uf(int\
    \ n, persistent_array<int, SHIFT> ps) : n(n), ps(ps) {}\n    pair<int, int> find_with_size(int\
    \ i) const {\n        int psi = ps.get(i);\n        return psi < 0 ? make_pair(i,\
    \ -psi) : find_with_size(psi);\n    }\n    int find(int i) const { return find_with_size(i).first;\
    \ }\n    int size(int i) const { return find_with_size(i).second; }\n    bool\
    \ same(int i, int j) const { return find(i) == find(j); }\n    persistent_uf unite(int\
    \ i, int j) const {\n        auto [ip, si] = find_with_size(i);\n        auto\
    \ [jp, sj] = find_with_size(j);\n        if (ip == jp) return *this;\n       \
    \ if (si < sj) swap(ip, jp);\n        return persistent_uf(n, ps.set(ip, -si -\
    \ sj).set(jp, ip));\n    }\n    vector<vector<int>> groups() const {\n       \
    \ vector<vector<int>> ret(n);\n        for (int i : rep(n)) ret[find(i)].push_back(i);\n\
    \        ret.erase(remove_if(all(ret), [](const vector<int> &v) { return v.empty();\
    \ }), ret.end());\n        return ret;\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n#include \"persistent_array.hpp\"\
    \n\ntemplate <int SHIFT> struct persistent_uf {\n    int n;\n    persistent_array<int,\
    \ SHIFT> ps;\n    persistent_uf(int n) : n(n), ps(n, -1) {}\n    persistent_uf(int\
    \ n, persistent_array<int, SHIFT> ps) : n(n), ps(ps) {}\n    pair<int, int> find_with_size(int\
    \ i) const {\n        int psi = ps.get(i);\n        return psi < 0 ? make_pair(i,\
    \ -psi) : find_with_size(psi);\n    }\n    int find(int i) const { return find_with_size(i).first;\
    \ }\n    int size(int i) const { return find_with_size(i).second; }\n    bool\
    \ same(int i, int j) const { return find(i) == find(j); }\n    persistent_uf unite(int\
    \ i, int j) const {\n        auto [ip, si] = find_with_size(i);\n        auto\
    \ [jp, sj] = find_with_size(j);\n        if (ip == jp) return *this;\n       \
    \ if (si < sj) swap(ip, jp);\n        return persistent_uf(n, ps.set(ip, -si -\
    \ sj).set(jp, ip));\n    }\n    vector<vector<int>> groups() const {\n       \
    \ vector<vector<int>> ret(n);\n        for (int i : rep(n)) ret[find(i)].push_back(i);\n\
    \        ret.erase(remove_if(all(ret), [](const vector<int> &v) { return v.empty();\
    \ }), ret.end());\n        return ret;\n    }\n};"
  dependsOn:
  - template.hpp
  - data_structure/persistent_array.hpp
  isVerificationFile: false
  path: data_structure/persistent_uf.hpp
  requiredBy: []
  timestamp: '2021-09-17 00:26:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
documentation_of: data_structure/persistent_uf.hpp
layout: document
title: "\u5B8C\u5168\u6C38\u7D9A Union-Find Tree"
---

## 概要
- コピー可能な Union-Find Tree。

## 詳細
- `<int SHIFT> struct persistent_uf`  
    完全永続 Union-Find Tree 本体。

    - `int SHIFT`  
        テンプレート引数として与える値。 内部の永続配列を $2^{SHIFT}$ 分木として表現する。実験的には $2$ くらいにするのが良かったが、[熨斗袋さんのツイート](https://twitter.com/noshi91/status/1334461861127839746) によればもう少し大きくしたほうが良いらしい。実装の問題か？

    - `(constructor)(int n)`  
        $n$ 要素で初期化。

    - `int find(int i)`  
        要素 $i$ が属する集合の代表元を取得する。 $O((\log n)^2)$ 時間。

    - `int size(int i)`  
        要素 $i$ が属する集合のサイズを取得する。 $O((\log n)^2)$ 時間。

    - `bool same(int i, int j)`  
        要素 $i$ と要素 $j$ が同じ集合に含まれるかどうかを判定する。 $O((\log n)^2)$ 時間。

    - `persistent_uf unite(int i, int j)`  
        要素 $i$ を含む集合と要素 $j$ を含む集合が併合された新たな完全永続 Union-Find Tree を返す。 $O((\log n)^2)$ 時間および $O(\log n)$ 空間。

    - `vector<vector<int>> groups()`  
        「「一つの集合に属する要素番号の`vector`」の`vector`」を取得する。 $O(n \log n)$ 時間。

## 参考
- [ACL](https://atcoder.github.io/ac-library/document_ja/dsu.html)
- [Nyaan さんのライブラリ](https://nyaannyaan.github.io/library/data-structure/persistent-union-find.hpp)