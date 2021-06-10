---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/matrix.hpp
    title: math/matrix.hpp
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: math/modint.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/matrix_det
    links:
    - https://judge.yosupo.jp/problem/matrix_det
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp\"\n\
    #define PROBLEM \"https://judge.yosupo.jp/problem/matrix_det\"\n#line 1 \"math/matrix.hpp\"\
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
    \ 5 \"math/matrix.hpp\"\n\ntemplate <typename S> struct matrix {\n    using V\
    \ = typename S::val_t;\n    vector<vector<V>> val;\n    matrix(int n, int m) :\
    \ matrix(vector(n, vector(m, S::zero()))) {}\n    matrix(vector<vector<V>> src)\
    \ : val(src) {}\n    vector<V> &operator[](int i) { return val[i]; }\n    int\
    \ height() const { return val.size(); }\n    int width() const { return val[0].size();\
    \ }\n    static matrix id(int n) {\n        matrix ret(n, n);\n        rep(i,\
    \ n) ret[i][i] = S::one();\n        return ret;\n    }\n    void row_add(int i,\
    \ int j, V a) {\n        rep(k, width()) { val[i][k] += val[j][k] * a; }\n   \
    \ }\n    bool place_nonzero(int i, int j) {\n        for (int k = i; k < height();\
    \ k++) {\n            if (val[k][j] != S::zero()) {\n                if (k > i)\
    \ row_add(i, k, S::one());\n                break;\n            }\n        }\n\
    \        return val[i][j] != S::zero();\n    }\n    matrix upper_triangular()\
    \ const {\n        matrix ret(val);\n        for (int i = 0, j = 0; i < height()\
    \ && j < width(); j++) {\n            if (!ret.place_nonzero(i, j)) continue;\n\
    \            for (int k = i + 1; k < height(); k++) { ret.row_add(k, i, -ret[k][j]\
    \ / ret[i][j]); }\n            i++;\n        }\n        return ret;\n    }\n \
    \   V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        rep(i, height()) ret *= ut[i][i];\n        return ret;\n    }\n    matrix\
    \ inv() const {\n        matrix ex(height(), width() << 1);\n        rep(i, height())\
    \ {\n            rep(j, width()) { ex[i][j] = val[i][j]; }\n        }\n      \
    \  rep(i, height()) ex[i][width() + i] = S::one();\n        matrix ut = ex.upper_triangular();\n\
    \        for (int i = height() - 1; i >= 0; i--) {\n            ut.row_add(i,\
    \ i, S::one() / ut[i][i] - S::one());\n            rep(j, i) ut.row_add(j, i,\
    \ -ut[j][i] / ut[i][i]);\n        }\n        matrix ret(height(), width());\n\
    \        rep(i, height()) {\n            rep(j, width()) { ret[i][j] = ut[i][width()\
    \ + j]; }\n        }\n        return ret;\n    }\n    matrix &operator+=(const\
    \ matrix &a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j]\
    \ += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator-=(const\
    \ matrix &a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j]\
    \ -= a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator*=(const\
    \ matrix &a) {\n        matrix res(height(), a.width());\n        rep(i, height())\
    \ {\n            rep(j, a.width()) {\n                rep(k, width()) { res[i][j]\
    \ += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(const matrix &a) { return\
    \ *this *= a.inv(); }\n    matrix &operator^=(ll p) {\n        matrix res = matrix::id(height());\n\
    \        while (p) {\n            if (p & 1) res *= *this;\n            *this\
    \ *= *this;\n            p >>= 1;\n        }\n        val.swap(res.val);\n   \
    \     return *this;\n    }\n    bool operator==(const matrix &a) const { return\
    \ val == a.val; }\n    bool operator!=(const matrix &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    matrix operator+() const { return *this; }\n    matrix operator-()\
    \ const { return matrix(height(), width()) -= *this; }\n    matrix operator+(const\
    \ matrix &a) const { return matrix(*this) += a; }\n    matrix operator-(const\
    \ matrix &a) const { return matrix(*this) -= a; }\n    matrix operator*(const\
    \ matrix &a) const { return matrix(*this) *= a; }\n    matrix operator/(const\
    \ matrix &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n\
    \    using val_t = double;\n    static val_t zero() { return 0.0; }\n    static\
    \ val_t one() { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k = i +\
    \ 1; k < height(); k++) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n  \
    \          val[i].swap(val[k]);\n            row_add(i, i, -2.0);\n        }\n\
    \    }\n    return abs(val[i][j]) > EPS;\n};\n\n\n#line 1 \"math/modint.hpp\"\n\
    \n\n\n#line 5 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007> struct modint\
    \ {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val)\
    \ % MOD) % MOD) {}\n    modint inv() const {\n        ll a = val, b = MOD, u =\
    \ 1, v = 0, t;\n        while (b > 0) {\n            t = a / b;\n            swap(a\
    \ -= t * b, b);\n            swap(u -= t * v, v);\n        }\n        return modint(u);\n\
    \    }\n    modint &operator+=(const modint &a) {\n        if ((val += a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator-=(const\
    \ modint &a) {\n        if ((val += MOD - a.val) >= MOD) val -= MOD;\n       \
    \ return *this;\n    }\n    modint &operator*=(const modint &a) {\n        (val\
    \ *= a.val) %= MOD;\n        return *this;\n    }\n    modint &operator/=(const\
    \ modint &a) { return *this *= a.inv(); }\n    modint &operator^=(ll p) {\n  \
    \      modint res = 1;\n        while (p) {\n            if (p & 1) res *= *this;\n\
    \            *this *= *this;\n            p >>= 1;\n        }\n        val = res.val;\n\
    \        return *this;\n    }\n    bool operator==(const modint &a) const { return\
    \ val == a.val; }\n    bool operator!=(const modint &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    modint operator+() const { return *this; }\n    modint operator-()\
    \ const { return modint(-val); }\n    modint operator+(const modint &a) const\
    \ { return modint(*this) += a; }\n    modint operator-(const modint &a) const\
    \ { return modint(*this) -= a; }\n    modint operator*(const modint &a) const\
    \ { return modint(*this) *= a; }\n    modint operator/(const modint &a) const\
    \ { return modint(*this) /= a; }\n    friend istream &operator>>(istream &is,\
    \ modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n\n\n#line 4 \"test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    struct mint_field {\n\
    \        using val_t = mint;\n        static val_t zero() { return mint(0); }\n\
    \        static val_t one() { return mint(1); }\n    };\n    ll n;\n    cin >>\
    \ n;\n    matrix<mint_field> a(n, n);\n    rep(i, n) {\n        rep(j, n) { cin\
    \ >> a[i][j]; }\n    }\n    cout << a.det() << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/matrix_det\"\n#include\
    \ \"../../math/matrix.hpp\"\n#include \"../../math/modint.hpp\"\n\nint main()\
    \ {\n    using mint = modint<998244353>;\n    struct mint_field {\n        using\
    \ val_t = mint;\n        static val_t zero() { return mint(0); }\n        static\
    \ val_t one() { return mint(1); }\n    };\n    ll n;\n    cin >> n;\n    matrix<mint_field>\
    \ a(n, n);\n    rep(i, n) {\n        rep(j, n) { cin >> a[i][j]; }\n    }\n  \
    \  cout << a.det() << endl;\n}"
  dependsOn:
  - math/matrix.hpp
  - template.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  requiredBy: []
  timestamp: '2021-06-10 13:39:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
- /verify/test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp.html
title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
---
