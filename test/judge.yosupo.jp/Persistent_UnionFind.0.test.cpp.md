---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/persistent_array.hpp
    title: "\u5B8C\u5168\u6C38\u7D9A\u914D\u5217"
  - icon: ':heavy_check_mark:'
    path: data_structure/persistent_uf.hpp
    title: "\u5B8C\u5168\u6C38\u7D9A Union-Find Tree"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/persistent_unionfind
    links:
    - https://judge.yosupo.jp/problem/persistent_unionfind
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp\"\n\
    #define PROBLEM \"https://judge.yosupo.jp/problem/persistent_unionfind\"\n#line\
    \ 2 \"data_structure/persistent_uf.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\n\
    constexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a)\
    \ { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b\
    \ - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a,\
    \ b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename T>\
    \ constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> bool chmin(T &a, const U &b) { return a > b ? a = b,\
    \ true : false; }\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep\
    \ {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        ll operator*() const { return v; }\n        bool\
    \ operator!=(itr i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll\
    \ l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const\
    \ { return l; };\n    itr end() const { return r; };\n};\nstruct per {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { --v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l),\
    \ r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1;\
    \ };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static\
    \ constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 2 \"data_structure/persistent_array.hpp\"\
    \n\n#line 4 \"data_structure/persistent_array.hpp\"\n\ntemplate <typename T, int\
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
    };\n#line 5 \"data_structure/persistent_uf.hpp\"\n\ntemplate <int SHIFT> struct\
    \ persistent_uf {\n    int n;\n    persistent_array<int, SHIFT> ps;\n    persistent_uf(int\
    \ n) : n(n), ps(n, -1) {}\n    persistent_uf(int n, persistent_array<int, SHIFT>\
    \ ps) : n(n), ps(ps) {}\n    pair<int, int> find_with_size(int i) const {\n  \
    \      int psi = ps.get(i);\n        return psi < 0 ? make_pair(i, -psi) : find_with_size(psi);\n\
    \    }\n    int find(int i) const { return find_with_size(i).first; }\n    int\
    \ size(int i) const { return find_with_size(i).second; }\n    bool same(int i,\
    \ int j) const { return find(i) == find(j); }\n    persistent_uf unite(int i,\
    \ int j) const {\n        auto [ip, si] = find_with_size(i);\n        auto [jp,\
    \ sj] = find_with_size(j);\n        if (ip == jp) return *this;\n        if (si\
    \ < sj) swap(ip, jp);\n        return persistent_uf(n, ps.set(ip, -si - sj).set(jp,\
    \ ip));\n    }\n    vector<vector<int>> groups() const {\n        vector<vector<int>>\
    \ ret(n);\n        for (int i : rep(n)) ret[find(i)].push_back(i);\n        ret.erase(remove_if(all(ret),\
    \ [](const vector<int> &v) { return v.empty(); }), ret.end());\n        return\
    \ ret;\n    }\n};\n#line 3 \"test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp\"\
    \n\nint main() {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \    ll n, q;\n    cin >> n >> q;\n    vector<persistent_uf<4>> his;\n    his.emplace_back(n);\n\
    \    for (ll i : rep(q)) {\n        ll c, k, u, v;\n        cin >> c >> k >> u\
    \ >> v, ++k;\n        if (c == 0) { his.emplace_back(his[k].unite(u, v)); }\n\
    \        if (c == 1) {\n            cout << his[k].same(u, v) << '\\n';\n    \
    \        his.emplace_back(1);\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/persistent_unionfind\"\n\
    #include \"../../data_structure/persistent_uf.hpp\"\n\nint main() {\n    cin.tie(nullptr);\n\
    \    ios_base::sync_with_stdio(false);\n    ll n, q;\n    cin >> n >> q;\n   \
    \ vector<persistent_uf<4>> his;\n    his.emplace_back(n);\n    for (ll i : rep(q))\
    \ {\n        ll c, k, u, v;\n        cin >> c >> k >> u >> v, ++k;\n        if\
    \ (c == 0) { his.emplace_back(his[k].unite(u, v)); }\n        if (c == 1) {\n\
    \            cout << his[k].same(u, v) << '\\n';\n            his.emplace_back(1);\n\
    \        }\n    }\n}"
  dependsOn:
  - data_structure/persistent_uf.hpp
  - template.hpp
  - data_structure/persistent_array.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-12 15:48:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
- /verify/test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp.html
title: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
---
