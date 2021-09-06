---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: "NTT/\u7573\u307F\u8FBC\u307F"
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: modint
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
    PROBLEM: https://judge.yosupo.jp/problem/convolution_mod
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Convolution.0.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/convolution_mod\"\n#line 2 \"math/convolution.hpp\"\
    \n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n#define all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing vll = vector<ll>;\nconstexpr ull bit(int n) { return 1ull\
    \ << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll\
    \ fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll\
    \ a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) { return ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename\
    \ T, typename U> bool chmin(T &a, const U &b) { return ((a > b) ? (a = b, true)\
    \ : (false)); }\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep\
    \ {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\n#line 2 \"math/modint.hpp\"\n\n#line\
    \ 4 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007> struct modint {\n  \
    \  ll val;\n    modint(ll val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val)\
    \ % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n    modint inv() const\
    \ {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n        while (b > 0) {\n\
    \            t = a / b;\n            swap(a -= t * b, b);\n            swap(u\
    \ -= t * v, v);\n        }\n        return modint(u);\n    }\n    modint pow(ll\
    \ k) const {\n        modint ret = 1, mul = val;\n        while (k) {\n      \
    \      if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>= 1;\n\
    \        }\n        return ret;\n    }\n    modint &operator+=(const modint &a)\
    \ {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return *this;\n \
    \   }\n    modint &operator-=(const modint &a) {\n        if ((val += MOD - a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    bool\
    \ operator==(const modint &a) const { return val == a.val; }\n    bool operator!=(const\
    \ modint &a) const { return rel_ops::operator!=(*this, a); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend modint operator+(const modint &a, const modint &b) { return modint(a)\
    \ += b; }\n    friend modint operator-(const modint &a, const modint &b) { return\
    \ modint(a) -= b; }\n    friend modint operator*(const modint &a, const modint\
    \ &b) { return modint(a) *= b; }\n    friend modint operator/(const modint &a,\
    \ const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n#line 5 \"math/convolution.hpp\"\n\n\
    template <typename mint> void ntt(vector<mint> &a, bool inv = false) {\n    int\
    \ n = a.size(), m = n >> 1;\n    mint root = 2;\n    while (root.pow((mint::mod()\
    \ - 1) >> 1) == 1) root += 1;\n    mint wn = root.pow((mint::mod() - 1) / n);\n\
    \    if (inv) wn = wn.inv();\n    vector<mint> b(n);\n    for (int i = 1; i <\
    \ n; i <<= 1, wn *= wn, swap(a, b)) {\n        mint wj = 1;\n        for (int\
    \ j = 0; j < m; j += i, wj *= wn) {\n            for (int k : rep(i)) {\n    \
    \            b[(j << 1) + k + 0] = (a[j + k] + a[j + k + m]);\n              \
    \  b[(j << 1) + k + i] = (a[j + k] - a[j + k + m]) * wj;\n            }\n    \
    \    }\n    }\n    if (inv) {\n        mint ninv = mint(n).inv();\n        for\
    \ (int i : rep(n)) a[i] *= ninv;\n    }\n}\ntemplate <typename mint> void intt(vector<mint>\
    \ &a) { ntt(a, true); }\n\ntemplate <typename mint> vector<mint> convolution_naive(vector<mint>\
    \ a, vector<mint> b) {\n    int na = a.size(), nb = b.size();\n    vector<mint>\
    \ c(na + nb - 1);\n    if (na < nb) swap(a, b), swap(na, nb);\n    for (int i\
    \ : rep(na)) {\n        for (int j : rep(nb)) { c[i + j] += a[i] * b[j]; }\n \
    \   }\n    return c;\n}\n\ntemplate <typename mint> vector<mint> convolution_ntt(vector<mint>\
    \ a, vector<mint> b) {\n    int n_ = a.size() + b.size() - 1, n;\n    for (n =\
    \ 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    ntt(a), ntt(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    intt(a);\n    a.resize(n_);\n   \
    \ return a;\n}\n\ntemplate <typename mint> vector<mint> convolution(const vector<mint>\
    \ &a, const vector<mint> &b) {\n    if (min(a.size(), b.size()) <= 60) {\n   \
    \     return convolution_naive(a, b);\n    } else {\n        return convolution_ntt(a,\
    \ b);\n    }\n}\n#line 4 \"test/judge.yosupo.jp/Convolution.0.test.cpp\"\n\nint\
    \ main() {\n    using mint = modint<998244353>;\n    ll n, m;\n    cin >> n >>\
    \ m;\n    vector<mint> a(n), b(m);\n    for (ll i : rep(n)) cin >> a[i];\n   \
    \ for (ll i : rep(m)) cin >> b[i];\n    vector<mint> c = convolution<mint>(a,\
    \ b);\n    for (mint ci : c) { cout << ci << \" \"; }\n    cout << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n#include\
    \ \"../../math/convolution.hpp\"\n#include \"../../math/modint.hpp\"\n\nint main()\
    \ {\n    using mint = modint<998244353>;\n    ll n, m;\n    cin >> n >> m;\n \
    \   vector<mint> a(n), b(m);\n    for (ll i : rep(n)) cin >> a[i];\n    for (ll\
    \ i : rep(m)) cin >> b[i];\n    vector<mint> c = convolution<mint>(a, b);\n  \
    \  for (mint ci : c) { cout << ci << \" \"; }\n    cout << endl;\n}"
  dependsOn:
  - math/convolution.hpp
  - template.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Convolution.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-04 20:56:23+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Convolution.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Convolution.0.test.cpp
- /verify/test/judge.yosupo.jp/Convolution.0.test.cpp.html
title: test/judge.yosupo.jp/Convolution.0.test.cpp
---
