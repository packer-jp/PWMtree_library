---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':question:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: math/fps.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/modint.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\n\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (int i\
    \ = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define bit(n)\
    \ (1ull << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"math/modint.hpp\"\n\ntemplate <ll MOD\
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
    \ modint &a) { return os << a.val; }\n};\n\n\n"
  code: "#ifndef PWMTREE_MODINT_HPP\n#define PWMTREE_MODINT_HPP 1\n\n#include \"../template.hpp\"\
    \n\ntemplate <ll MOD = 1000000007> struct modint {\n    ll val;\n    modint(ll\
    \ val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static\
    \ ll mod() { return MOD; }\n    modint inv() const {\n        ll a = val, b =\
    \ MOD, u = 1, v = 0, t;\n        while (b > 0) {\n            t = a / b;\n   \
    \         swap(a -= t * b, b);\n            swap(u -= t * v, v);\n        }\n\
    \        return modint(u);\n    }\n    modint pow(ll p) const {\n        modint\
    \ res = 1, mul = val;\n        while (p) {\n            if (p & 1) res *= mul;\n\
    \            mul *= mul;\n            p >>= 1;\n        }\n        return res;\n\
    \    }\n    modint &operator+=(const modint &a) {\n        if ((val += a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator-=(const\
    \ modint &a) {\n        if ((val += MOD - a.val) >= MOD) val -= MOD;\n       \
    \ return *this;\n    }\n    modint &operator*=(const modint &a) {\n        (val\
    \ *= a.val) %= MOD;\n        return *this;\n    }\n    modint &operator/=(const\
    \ modint &a) { return *this *= a.inv(); }\n    bool operator==(const modint &a)\
    \ const { return val == a.val; }\n    bool operator!=(const modint &a) const {\
    \ return rel_ops::operator!=(*this, a); }\n    modint operator+() const { return\
    \ *this; }\n    modint operator-() const { return modint(-val); }\n    friend\
    \ modint operator+(const modint &a, const modint &b) { return modint(a) += b;\
    \ }\n    friend modint operator-(const modint &a, const modint &b) { return modint(a)\
    \ -= b; }\n    friend modint operator*(const modint &a, const modint &b) { return\
    \ modint(a) *= b; }\n    friend modint operator/(const modint &a, const modint\
    \ &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream &is,\
    \ modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n\n#endif"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy:
  - math/convolution.hpp
  - math/fps.hpp
  timestamp: '2021-08-15 12:37:06+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
documentation_of: math/modint.hpp
layout: document
redirect_from:
- /library/math/modint.hpp
- /library/math/modint.hpp.html
title: math/modint.hpp
---
