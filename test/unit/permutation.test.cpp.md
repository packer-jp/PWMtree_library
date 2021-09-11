---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/permutation.hpp
    title: "\u9806\u5217"
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
  bundledCode: "#line 1 \"test/unit/permutation.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja\"\
    \n#line 2 \"math/permutation.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long\
    \ long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll\
    \ = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr\
    \ ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr\
    \ ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll\
    \ cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr T\
    \ sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
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
    \ operator!=(const itr &i) const { return v != i.v; }\n    };\n    ll l, r;\n\
    \    rep(ll r) : l(min(0ll, r)), r(r) {}\n    rep(ll l, ll r) : l(min(l, r)),\
    \ r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        ll v;\n        itr(ll v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        ll operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    ll l, r;\n    per(ll r) : l(min(0ll, r)), r(r) {}\n    per(ll\
    \ l, ll r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"math/permutation.hpp\"\
    \n\nstruct permutation {\n    vector<int> data;\n    permutation(int n) : data(n)\
    \ { iota(all(data), 0); }\n    permutation(const vector<int> &src) : data(src)\
    \ {}\n    int size() const { return data.size(); }\n    static permutation id(int\
    \ n) {\n        vector<int> ret(n);\n        iota(all(ret), 0);\n        return\
    \ ret;\n    }\n    bool next() { return next_permutation(all(data)); }\n    bool\
    \ prev() { return prev_permutation(all(data)); }\n    int operator[](int i) const\
    \ { return data[i]; }\n    permutation &operator*=(const permutation &a) {\n \
    \       vector<int> tmp(data);\n        for (int i : rep(size())) data[i] = tmp[a[i]];\n\
    \        return *this;\n    }\n    permutation &operator/=(const permutation &a)\
    \ { return *this *= a.inv(); }\n    friend bool operator==(const permutation &a,\
    \ const permutation &b) { return a.data == b.data; }\n    friend bool operator!=(const\
    \ permutation &a, const permutation &b) { return rel_ops::operator!=(a, b); }\n\
    \    friend permutation operator*(permutation a, const permutation &b) { return\
    \ a *= b; }\n    friend permutation operator/(permutation a, const permutation\
    \ &b) { return a /= b; }\n    permutation inv() const {\n        vector<int> ret(size());\n\
    \        for (int i : rep(size())) ret[data[i]] = i;\n        return ret;\n  \
    \  }\n    permutation pow(ll k) const {\n        vector<int> ret(size());\n  \
    \      vector<bool> used(size());\n        for (int i : rep(size())) {\n     \
    \       if (used[i]) { continue; }\n            vector<int> cyc;\n           \
    \ int cur = i;\n            do {\n                used[cur] = true;\n        \
    \        cyc.push_back(cur);\n                cur = data[cur];\n            }\
    \ while (cur != i);\n            for (int j : rep(cyc.size())) ret[cyc[j]] = cyc[(j\
    \ + k) % cyc.size()];\n        }\n        return ret;\n    }\n    friend ostream\
    \ &operator<<(std::ostream &os, const permutation &a) {\n        os << \"(\";\n\
    \        for (int i : rep(a.size())) { os << a[i] << (i + 1 != a.size() ? \",\
    \ \" : \"\"); }\n        os << \")\";\n        return os;\n    }\n};\n#line 3\
    \ \"test/unit/permutation.test.cpp\"\n\n#line 5 \"test/unit/permutation.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    vector<int> e = {0, 1, 2, 3, 4};\n\
    \    vector<int> a = {3, 2, 1, 4, 0};\n    vector<int> b = {1, 2, 0, 3, 4};\n\
    \    vector<int> ab = {2, 1, 3, 4, 0};\n    vector<int> a9 = {0, 2, 1, 3, 4};\n\
    \    vector<int> b6 = {0, 1, 2, 3, 4};\n\n    assert(permutation(5) == permutation(e));\n\
    \    assert(permutation(a) * permutation(b) == permutation(ab));\n    assert(permutation(ab)\
    \ / permutation(b) == permutation(a));\n    assert(permutation(a).pow(0) == permutation(e));\n\
    \    assert(permutation(a).pow(9) == permutation(a9));\n    assert(permutation(b).pow(6)\
    \ == permutation(b6));\n\n    cout << \"Hello World\" << endl;\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja\"\
    \n#include \"../../math/permutation.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nint main() {\n    vector<int> e = {0, 1, 2, 3, 4};\n    vector<int>\
    \ a = {3, 2, 1, 4, 0};\n    vector<int> b = {1, 2, 0, 3, 4};\n    vector<int>\
    \ ab = {2, 1, 3, 4, 0};\n    vector<int> a9 = {0, 2, 1, 3, 4};\n    vector<int>\
    \ b6 = {0, 1, 2, 3, 4};\n\n    assert(permutation(5) == permutation(e));\n   \
    \ assert(permutation(a) * permutation(b) == permutation(ab));\n    assert(permutation(ab)\
    \ / permutation(b) == permutation(a));\n    assert(permutation(a).pow(0) == permutation(e));\n\
    \    assert(permutation(a).pow(9) == permutation(a9));\n    assert(permutation(b).pow(6)\
    \ == permutation(b6));\n\n    cout << \"Hello World\" << endl;\n}"
  dependsOn:
  - math/permutation.hpp
  - template.hpp
  isVerificationFile: true
  path: test/unit/permutation.test.cpp
  requiredBy: []
  timestamp: '2021-09-11 00:10:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/unit/permutation.test.cpp
layout: document
redirect_from:
- /verify/test/unit/permutation.test.cpp
- /verify/test/unit/permutation.test.cpp.html
title: test/unit/permutation.test.cpp
---
