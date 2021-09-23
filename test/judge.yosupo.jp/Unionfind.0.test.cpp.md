---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/uf.hpp
    title: Union-Find Tree
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Unionfind.0.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/unionfind\"\n#line 2 \"data_structure/uf.hpp\"\
    \n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a), rend(a)\n#define\
    \ uniq(a) (a).erase(unique(all(a)), (a).end())\n#define SZ(x) ((int)(x).size())\n\
    #define pb(x) push_back(x)\n#define eb(x) emplace_back(x)\n#define vsum(x) reduce(all(x))\n\
    #define vmax(a) *max_element(all(a))\n#define vmin(a) *min_element(all(a))\n#define\
    \ LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))\n#define UB(c, x) distance((c).begin(),\
    \ upper_bound(all(c), (x)))\n#define mp make_pair\n#define endl '\\n'\nusing ll\
    \ = long long;\nusing ull = unsigned long long;\nusing ld = long double;\nusing\
    \ Pi = pair<int, int>;\nusing Pl = pair<ll, ll>;\nusing Vi = vector<int>;\nusing\
    \ Vl = vector<ll>;\nusing Vc = vector<char>;\nusing VVi = vector<vector<int>>;\n\
    using VVl = vector<vector<ll>>;\nusing VVc = vector<vector<char>>;\nconstexpr\
    \ ll inf = 1000000000ll;\nconstexpr ll INF = 4000000004000000000LL;\nconstexpr\
    \ ld eps = 1e-15;\nconstexpr ld PI = 3.141592653589793;\nconstexpr int popcnt(ull\
    \ x) { return __builtin_popcountll(x); }\ntemplate <typename T> using mat = vector<vector<T>>;\n\
    constexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1,\
    \ 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a <\
    \ 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b);\
    \ }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int\
    \ n) { return 1ull << n; }\ntemplate <typename T> constexpr T mypow(T x, ll n)\
    \ {\n    T ret = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x\
    \ *= x;\n        n >>= 1;\n    }\n    return ret;\n}\nconstexpr ll modpow(ll x,\
    \ ll n, ll mod) {\n    ll ret = 1;\n    while (n) {\n        if (n & 1) ret *=\
    \ x;\n        x *= x;\n        n >>= 1;\n        x %= mod;\n        ret %= mod;\n\
    \    }\n    return ret;\n}\ntemplate <typename T> T xor64(T lb, T ub) {\n    static\
    \ ull x = 88172645463325252ull;\n    x ^= x << 7;\n    return lb + (x ^= x >>\
    \ 9) % (ub - lb);\n}\nconstexpr ll safemod(ll x, ll mod) { return (x % mod + mod)\
    \ % mod; }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a) {\n   \
    \ os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n}\n\
    template <typename T, typename U, typename V> ostream &operator<<(ostream &os,\
    \ const tuple<T, U, V> &a) {\n    os << \"(\" << get<0>(a) << \", \" << get<1>(a)\
    \ << \", \" << get<2>(a) << \")\";\n    return os;\n}\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto\
    \ itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const set<T> &a) {\n    os << \"(\";\n    for\
    \ (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const multiset<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate\
    \ <typename T, typename U> ostream &operator<<(ostream &os, const map<T, U> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> void print(const T &a) { cout << a << endl; }\n\
    template <typename T> void print(const vector<T> &v) {\n    for (auto &e : v)\
    \ cout << e << \" \";\n    cout << endl;\n}\ntemplate <typename T> void scan(vector<T>\
    \ &a) {\n    for (auto &i : a) cin >> i;\n}\nstruct timer {\n    clock_t start_time;\n\
    \    void start() { start_time = clock(); }\n    int lap() {\n        // return\
    \ x ms.\n        return (clock() - start_time) * 1000 / CLOCKS_PER_SEC;\n    }\n\
    };\ntemplate <typename T = int> struct Edge {\n    int from, to;\n    T cost;\n\
    \    int idx;\n\n    Edge() = default;\n\n    Edge(int from, int to, T cost =\
    \ 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}\n\n    operator\
    \ int() const { return to; }\n};\ntemplate <typename T = int> struct Graph {\n\
    \    vector<vector<Edge<T>>> g;\n    int es;\n\n    Graph() = default;\n\n   \
    \ explicit Graph(int n) : g(n), es(0) {}\n\n    size_t size() const { return g.size();\
    \ }\n\n    void add_directed_edge(int from, int to, T cost = 1) { g[from].emplace_back(from,\
    \ to, cost, es++); }\n\n    void add_edge(int from, int to, T cost = 1) {\n  \
    \      g[from].emplace_back(from, to, cost, es);\n        g[to].emplace_back(to,\
    \ from, cost, es++);\n    }\n\n    void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n        for (int i = 0; i < M; i++) {\n \
    \           int a, b;\n            cin >> a >> b;\n            a += padding;\n\
    \            b += padding;\n            T c = T(1);\n            if (weighted)\
    \ cin >> c;\n            if (directed)\n                add_directed_edge(a, b,\
    \ c);\n            else\n                add_edge(a, b, c);\n        }\n    }\n\
    };\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll l, ll r) : l(l),\
    \ r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const { return l; };\n\
    \    itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n    \
    \    ll v;\n        itr(ll v) : v(v) {}\n        void operator++() { --v; }\n\
    \        ll operator*() const { return v; }\n        bool operator!=(itr i) const\
    \ { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l), r(r) {}\n\
    \    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"data_structure/uf.hpp\"\
    \n\nstruct uf {\n    int n;\n    vector<int> ps;\n    uf(int n) : n(n), ps(n,\
    \ -1) {}\n    int find(int i) {\n        if (ps[i] < 0) return i;\n        return\
    \ ps[i] = find(ps[i]);\n    }\n    int size(int i) { return -ps[find(i)]; }\n\
    \    void unite(int i, int j) {\n        if ((i = find(i)) == (j = find(j))) return;\n\
    \        if (-ps[i] < -ps[j]) swap(i, j);\n        ps[i] += ps[j];\n        ps[j]\
    \ = i;\n    }\n    bool same(int i, int j) { return find(i) == find(j); }\n  \
    \  vector<vector<int>> groups() {\n        vector<vector<int>> ret(n);\n     \
    \   for (int i : rep(n)) ret[find(i)].push_back(i);\n        ret.erase(remove_if(all(ret),\
    \ [](const vector<int> &v) { return v.empty(); }), ret.end());\n        return\
    \ ret;\n    }\n};\n#line 3 \"test/judge.yosupo.jp/Unionfind.0.test.cpp\"\n\nint\
    \ main() {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n   \
    \ ll n, q;\n    cin >> n >> q;\n    uf uf(n);\n    while (q--) {\n        ll t,\
    \ u, v;\n        cin >> t >> u >> v;\n        if (t == 0) uf.unite(u, v);\n  \
    \      if (t == 1) cout << uf.same(u, v) << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include \"\
    ../../data_structure/uf.hpp\"\n\nint main() {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \    ll n, q;\n    cin >> n >> q;\n    uf uf(n);\n    while (q--) {\n        ll\
    \ t, u, v;\n        cin >> t >> u >> v;\n        if (t == 0) uf.unite(u, v);\n\
    \        if (t == 1) cout << uf.same(u, v) << endl;\n    }\n}"
  dependsOn:
  - data_structure/uf.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Unionfind.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-17 00:26:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Unionfind.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Unionfind.0.test.cpp
- /verify/test/judge.yosupo.jp/Unionfind.0.test.cpp.html
title: test/judge.yosupo.jp/Unionfind.0.test.cpp
---
