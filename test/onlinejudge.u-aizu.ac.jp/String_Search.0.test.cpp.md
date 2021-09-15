---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: string/rolling_hash.hpp
    title: "\u30ED\u30FC\u30EA\u30F3\u30B0\u30CF\u30C3\u30B7\u30E5"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  - icon: ':x:'
    path: util/xorshift.hpp
    title: Xorshift
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp\"\
    \n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n#line 2 \"string/rolling_hash.hpp\"\n\n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\n#define uniq(a)\
    \ (a).erase(unique(all(a)), (a).end())\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing pll = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll\
    \ dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0,\
    \ 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr\
    \ ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll\
    \ cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> constexpr T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a) {\n   \
    \ os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n}\n\
    template <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n\
    \    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os <<\
    \ *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const set<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
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
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 2 \"util/xorshift.hpp\"\
    \n\n#line 2 \"template.hpp\"\nusing namespace std;\n\n#define all(a) (a).begin(),\
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
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const set<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
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
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"util/xorshift.hpp\"\
    \n\ntemplate <typename T> T xor64(T lb, T ub) {\n    static ull x = 88172645463325252ull;\n\
    \    x ^= x << 7;\n    return lb + (x ^= x >> 9) % (ub - lb);\n}\n#line 5 \"string/rolling_hash.hpp\"\
    \n\nstruct rolling_hash {\n    static constexpr ull MOD = bit(61) - 1;\n    static\
    \ vector<ull> pb;\n    vector<ull> hash;\n    static void resize_pb(int n) {\n\
    \        int sz = pb.size();\n        if (sz > n) return;\n        pb.resize(n\
    \ + 1);\n        for (int i : rep(sz - 1, n)) pb[i + 1] = mul(pb[i], pb[1]);\n\
    \    }\n    template <typename T> static T calc_mod(T val) {\n        val = (val\
    \ & MOD) + (val >> 61);\n        if (val >= MOD) val -= MOD;\n        return val;\n\
    \    }\n    static ull mul(ull a, ull b) { return calc_mod((__uint128_t)a * b);\
    \ }\n    static ull concat(ull lhs, ull rhs, int rn) {\n        resize_pb(rn);\n\
    \        return calc_mod(mul(lhs, pb[rn]) + rhs);\n    }\n    rolling_hash(const\
    \ string &src) : hash(src.size() + 1) {\n        for (int i : rep(src.size()))\
    \ hash[i + 1] = calc_mod(mul(hash[i], pb[1]) + src[i]);\n        resize_pb(src.size());\n\
    \    }\n    template <typename T> rolling_hash(const vector<T> &src) : hash(src.size()\
    \ + 1) {\n        for (int i : rep(src.size())) hash[i + 1] = calc_mod(mul(hash[i],\
    \ pb[1]) + src[i]);\n        resize_pb(src.size());\n    }\n    ull get_hash(int\
    \ l, int r) const { return calc_mod(MOD - mul(hash[l], pb[r - l]) + hash[r]);\
    \ }\n};\nvector<ull> rolling_hash::pb{1, xor64(MOD >> 1, MOD)};\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp\"\
    \n\n#line 5 \"test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp\"\nusing\
    \ namespace std;\n\nint main() {\n    string t, p;\n    cin >> t >> p;\n    rolling_hash\
    \ th(t), ph(p);\n    for (int i : rep((int)t.size() - (int)p.size() + 1)) {\n\
    \        if (th.get_hash(i, i + p.size()) == ph.get_hash(0, p.size())) cout <<\
    \ i << endl;\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/14/ALDS1_14_B\"\
    \n#include \"../../string/rolling_hash.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\nint main() {\n    string t, p;\n    cin >> t >> p;\n    rolling_hash\
    \ th(t), ph(p);\n    for (int i : rep((int)t.size() - (int)p.size() + 1)) {\n\
    \        if (th.get_hash(i, i + p.size()) == ph.get_hash(0, p.size())) cout <<\
    \ i << endl;\n    }\n}"
  dependsOn:
  - string/rolling_hash.hpp
  - template.hpp
  - util/xorshift.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-16 04:43:03+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/String_Search.0.test.cpp
---
