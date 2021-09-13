---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Unionfind.0.test.cpp
    title: test/judge.yosupo.jp/Unionfind.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/uf.hpp\"\n\n#line 2 \"template.hpp\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\nusing ll =\
    \ long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing\
    \ vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr\
    \ ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return\
    \ (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b)\
    \ < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr\
    \ ull bit(int n) { return 1ull << n; }\ntemplate <typename T> constexpr T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) { return a < b ? a = b, true : false; }\ntemplate <typename T, typename\
    \ U> bool chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a)\
    \ {\n    os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n\
    }\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \")\");\n    return os;\n}\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const set<T> &a) {\n    os <<\
    \ \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr <<\
    \ (next(itr) != a.end() ? \", \" : \")\");\n    return os;\n}\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const multiset<T> &a) {\n    os << \"(\"\
    ;\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \")\");\n    return os;\n}\ntemplate <typename T, typename\
    \ U> ostream &operator<<(ostream &os, const map<T, U> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \")\");\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define\
    \ dump(...) (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename\
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
    \    };\n} iOS;\n#line 4 \"data_structure/uf.hpp\"\n\nstruct uf {\n    int n;\n\
    \    vector<int> ps;\n    uf(int n) : n(n), ps(n, -1) {}\n    int find(int i)\
    \ {\n        if (ps[i] < 0) return i;\n        return ps[i] = find(ps[i]);\n \
    \   }\n    int size(int i) { return -ps[find(i)]; }\n    void unite(int i, int\
    \ j) {\n        if ((i = find(i)) == (j = find(j))) return;\n        if (-ps[i]\
    \ < -ps[j]) swap(i, j);\n        ps[i] += ps[j];\n        ps[j] = i;\n    }\n\
    \    bool same(int i, int j) { return find(i) == find(j); }\n    vector<vector<int>>\
    \ groups() {\n        vector<vector<int>> ret(n);\n        for (int i : rep(n))\
    \ ret[find(i)].push_back(i);\n        ret.erase(remove_if(all(ret), [](const vector<int>\
    \ &v) { return v.empty(); }), ret.end());\n        return ret;\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\nstruct uf {\n    int n;\n\
    \    vector<int> ps;\n    uf(int n) : n(n), ps(n, -1) {}\n    int find(int i)\
    \ {\n        if (ps[i] < 0) return i;\n        return ps[i] = find(ps[i]);\n \
    \   }\n    int size(int i) { return -ps[find(i)]; }\n    void unite(int i, int\
    \ j) {\n        if ((i = find(i)) == (j = find(j))) return;\n        if (-ps[i]\
    \ < -ps[j]) swap(i, j);\n        ps[i] += ps[j];\n        ps[j] = i;\n    }\n\
    \    bool same(int i, int j) { return find(i) == find(j); }\n    vector<vector<int>>\
    \ groups() {\n        vector<vector<int>> ret(n);\n        for (int i : rep(n))\
    \ ret[find(i)].push_back(i);\n        ret.erase(remove_if(all(ret), [](const vector<int>\
    \ &v) { return v.empty(); }), ret.end());\n        return ret;\n    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/uf.hpp
  requiredBy: []
  timestamp: '2021-09-13 22:50:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Unionfind.0.test.cpp
documentation_of: data_structure/uf.hpp
layout: document
title: Union-Find Tree
---

## 参考
- [ACL](https://atcoder.github.io/ac-library/document_ja/dsu.html)