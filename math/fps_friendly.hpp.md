---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: math/modint.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/fps_friendly.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\
    \n\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for\
    \ (int i = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define\
    \ bit(n) (1ull << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n\n#line 1 \"math/convolution.hpp\"\n\n\n\n#line\
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
    \ }\n    modint operator+(const modint &a) const { return modint(*this) += a;\
    \ }\n    modint operator-(const modint &a) const { return modint(*this) -= a;\
    \ }\n    modint operator*(const modint &a) const { return modint(*this) *= a;\
    \ }\n    modint operator/(const modint &a) const { return modint(*this) /= a;\
    \ }\n    friend istream &operator>>(istream &is, modint &a) {\n        ll val;\n\
    \        is >> val;\n        a = modint(val);\n        return is;\n    }\n   \
    \ friend ostream &operator<<(ostream &os, const modint &a) { return os << a.val;\
    \ }\n};\n\n\n#line 6 \"math/convolution.hpp\"\n\ntemplate <typename mint> void\
    \ fft(vector<mint> &a, mint wn) {\n    ll n = a.size(), m = n >> 1;\n    vector<mint>\
    \ b(n);\n    for (ll i = 1; i < n; i <<= 1, wn *= wn, swap(a, b)) {\n        mint\
    \ wj = 1;\n        for (ll j = 0; j < m; j += i, wj *= wn) {\n            rep(k,\
    \ i) {\n                b[(j << 1) + k + 0] = (a[j + k] + a[j + k + m]);\n   \
    \             b[(j << 1) + k + i] = (a[j + k] - a[j + k + m]) * wj;\n        \
    \    }\n        }\n    }\n}\n\ntemplate <typename mint, ll ROOT> vector<mint>\
    \ convolution_friendly(vector<mint> a, vector<mint> b) {\n    ll n_ = a.size()\
    \ + b.size() - 1, n;\n    for (n = 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n\
    \    mint wn = mint(ROOT).pow((mint::mod() - 1) / n);\n    fft(a, wn), fft(b,\
    \ wn);\n    rep(i, n) a[i] *= b[i];\n    fft(a, wn.inv());\n    mint ninv = mint(n).inv();\n\
    \    a.resize(n_);\n    rep(i, n_) a[i] *= ninv;\n    return a;\n}\n\n\n#line\
    \ 1 \"math/fps.hpp\"\n\n\n\n#line 7 \"math/fps.hpp\"\n\ntemplate <typename mint>\
    \ struct fps : vector<mint> {\n    using vector<mint>::vector;\n    using vector<mint>::operator=;\n\
    \    fps &operator+=(const fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n\
    \        rep(i, a.size())(*this)[i] += a[i];\n        return *this;\n    }\n \
    \   fps &operator+=(const mint &a) {\n        if (this->empty()) this->resize(1);\n\
    \        (*this)[0] += a;\n        return *this;\n    }\n    fps &operator-=(const\
    \ fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n  \
    \      rep(i, a.size())(*this)[i] -= a[i];\n        return *this;\n    }\n   \
    \ fps &operator-=(const mint &a) {\n        if (this->empty()) this->resize(1);\n\
    \        (*this)[0] -= a;\n        return *this;\n    }\n    fps &operator*=(const\
    \ mint &a) {\n        rep(i, this->size())(*this)[i] *= a;\n        return *this;\n\
    \    }\n    friend fps operator+(const fps &a, const fps &b) { return fps(a) +=\
    \ b; }\n    friend fps operator+(const fps &a, const mint &b) { return fps(a)\
    \ += b; }\n    friend fps operator+(const mint &a, const fps &b) { return fps(b)\
    \ += a; }\n    friend fps operator-(const fps &a, const fps &b) { return fps(a)\
    \ -= b; }\n    friend fps operator-(const fps &a, const mint &b) { return fps(a)\
    \ -= b; }\n    friend fps operator-(const mint &a, const fps &b) { return fps(b)\
    \ -= a; }\n    friend fps operator*(const fps &a, const mint &b) { return fps(a)\
    \ *= b; }\n    friend fps operator*(const mint &a, const fps &b) { return fps(b)\
    \ *= a; }\n};\n\n\n#line 8 \"math/fps_friendly.hpp\"\n\ntemplate <typename mint,\
    \ ll ROOT> struct fps_friendly : fps<mint> {\n    using fps<mint>::fps;\n    using\
    \ fps<mint>::operator=;\n    fps_friendly &operator*=(const fps_friendly &a) {\n\
    \        *this = convolution_friendly<mint, ROOT>(*this, a);\n        return *this;\n\
    \    }\n    friend fps_friendly operator*(const fps_friendly &a, const fps_friendly\
    \ &b) { return fps_friendly(a) *= b; }\n    fps_friendly inv(ll d) {\n       \
    \ fps_friendly ret{(*this)[0].inv()};\n        while (ret.size() < d) {\n    \
    \        ll m = ret.size();\n            ret = 2 * ret - *this * ret * ret;\n\
    \            ret.resize(2 * m);\n        }\n        ret.resize(d);\n        return\
    \ ret;\n    }\n};\n\n\n"
  code: "#ifndef PWMTREE_FPS_FRIENDLY_HPP\n#define PWMTREE_FPS_FRIENDLY_HPP 1\n\n\
    #include \"../template.hpp\"\n#include \"convolution.hpp\"\n#include \"fps.hpp\"\
    \n#include \"modint.hpp\"\n\ntemplate <typename mint, ll ROOT> struct fps_friendly\
    \ : fps<mint> {\n    using fps<mint>::fps;\n    using fps<mint>::operator=;\n\
    \    fps_friendly &operator*=(const fps_friendly &a) {\n        *this = convolution_friendly<mint,\
    \ ROOT>(*this, a);\n        return *this;\n    }\n    friend fps_friendly operator*(const\
    \ fps_friendly &a, const fps_friendly &b) { return fps_friendly(a) *= b; }\n \
    \   fps_friendly inv(ll d) {\n        fps_friendly ret{(*this)[0].inv()};\n  \
    \      while (ret.size() < d) {\n            ll m = ret.size();\n            ret\
    \ = 2 * ret - *this * ret * ret;\n            ret.resize(2 * m);\n        }\n\
    \        ret.resize(d);\n        return ret;\n    }\n};\n\n#endif"
  dependsOn:
  - template.hpp
  - math/convolution.hpp
  - math/modint.hpp
  - math/fps.hpp
  isVerificationFile: false
  path: math/fps_friendly.hpp
  requiredBy: []
  timestamp: '2021-08-14 12:15:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
documentation_of: math/fps_friendly.hpp
layout: document
redirect_from:
- /library/math/fps_friendly.hpp
- /library/math/fps_friendly.hpp.html
title: math/fps_friendly.hpp
---
