---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':question:'
    path: math/modint.hpp
    title: math/modint.hpp
  - icon: ':question:'
    path: math/modint.hpp
    title: math/modint.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/convolution_mod
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Convolution.0.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/convolution_mod\"\n#line 1 \"math/convolution.hpp\"\
    \n\n\n\n#line 1 \"template.hpp\"\n\n\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\n#define all(a)\
    \ (a).begin(), (a).end()\n#define bit(n) (1ull << (n))\nusing ll = long long;\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a * a; }\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n\
    \        a = b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename\
    \ T, typename U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a =\
    \ b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n \
    \   for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n\n#line\
    \ 1 \"math/modint.hpp\"\n\n\n\n#line 5 \"math/modint.hpp\"\n\ntemplate <ll MOD\
    \ = 1000000007> struct modint {\n    ll val;\n    modint(ll val = 0) : val(val\
    \ >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return\
    \ MOD; }\n    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0,\
    \ t;\n        while (b > 0) {\n            t = a / b;\n            swap(a -= t\
    \ * b, b);\n            swap(u -= t * v, v);\n        }\n        return modint(u);\n\
    \    }\n    modint pow(ll p) const {\n        modint res = 1, mul = val;\n   \
    \     while (p) {\n            if (p & 1) res *= mul;\n            mul *= mul;\n\
    \            p >>= 1;\n        }\n        return res;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
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
    \ modint &a) { return os << a.val; }\n};\n\n\n#line 6 \"math/convolution.hpp\"\
    \n\ntemplate <typename mint> void ntt(vector<mint> &a, mint wn) {\n    ll n =\
    \ a.size(), m = n >> 1;\n    vector<mint> b(n);\n    for (ll i = 1; i < n; i <<=\
    \ 1, wn *= wn, swap(a, b)) {\n        mint wj = 1;\n        for (ll j = 0; j <\
    \ m; j += i, wj *= wn) {\n            rep(k, i) {\n                b[(j << 1)\
    \ + k + 0] = (a[j + k] + a[j + k + m]);\n                b[(j << 1) + k + i] =\
    \ (a[j + k] - a[j + k + m]) * wj;\n            }\n        }\n    }\n}\n\ntemplate\
    \ <typename mint> vector<mint> convolution_friendly(vector<mint> a, vector<mint>\
    \ b) {\n    ll n_ = a.size() + b.size() - 1, n;\n    for (n = 1; n < n_; n <<=\
    \ 1) {}\n    a.resize(n), b.resize(n);\n    ll mod = mint::mod();\n    mint root\
    \ = 2;\n    while (root.pow((mod - 1) >> 1) == 1) root += 1;\n    mint wn = root.pow((mod\
    \ - 1) / n);\n    ntt(a, wn), ntt(b, wn);\n    rep(i, n) a[i] *= b[i];\n    ntt(a,\
    \ wn.inv());\n    mint ninv = mint(n).inv();\n    a.resize(n_);\n    rep(i, n_)\
    \ a[i] *= ninv;\n    return a;\n}\n\n\n#line 4 \"test/judge.yosupo.jp/Convolution.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    ll n, m;\n    cin >>\
    \ n >> m;\n    vector<mint> a(n), b(m);\n    rep(i, n) cin >> a[i];\n    rep(i,\
    \ m) cin >> b[i];\n    vector<mint> c = convolution_friendly<mint, 3>(a, b);\n\
    \    for (mint ci : c) { cout << ci << '\\n'; }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n#include\
    \ \"../../math/convolution.hpp\"\n#include \"../../math/modint.hpp\"\n\nint main()\
    \ {\n    using mint = modint<998244353>;\n    ll n, m;\n    cin >> n >> m;\n \
    \   vector<mint> a(n), b(m);\n    rep(i, n) cin >> a[i];\n    rep(i, m) cin >>\
    \ b[i];\n    vector<mint> c = convolution_friendly<mint, 3>(a, b);\n    for (mint\
    \ ci : c) { cout << ci << '\\n'; }\n}"
  dependsOn:
  - math/convolution.hpp
  - template.hpp
  - math/modint.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Convolution.0.test.cpp
  requiredBy: []
  timestamp: '2021-08-15 12:37:06+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Convolution.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Convolution.0.test.cpp
- /verify/test/judge.yosupo.jp/Convolution.0.test.cpp.html
title: test/judge.yosupo.jp/Convolution.0.test.cpp
---
