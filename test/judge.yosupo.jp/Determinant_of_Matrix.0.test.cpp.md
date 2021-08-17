---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/matrix.hpp
    title: math/matrix.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/matrix_det
    links:
    - https://judge.yosupo.jp/problem/matrix_det
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp\"\n\
    #define PROBLEM \"https://judge.yosupo.jp/problem/matrix_det\"\n#line 1 \"math/matrix.hpp\"\
    \n\n\n\n#line 1 \"template.hpp\"\n\n\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define all(a) (a).begin(), (a).end()\n#define bit(n) (1ull << (n))\n\
    using ll = long long;\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) {\n   \
    \ if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) {\n    if (b\
    \ < a) {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\
    template <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n\
    \    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n   \
    \ return os;\n}\nstruct range {\n    int start, stop, step;\n    struct iterator\
    \ {\n        int val, stop, step;\n        iterator(int val, int stop, int step)\
    \ : val(val), stop(stop), step(step) {}\n        iterator &operator++() {\n  \
    \          val += step;\n            if (step > 0) {\n                chmin(val,\
    \ stop);\n            } else {\n                chmax(val, stop);\n          \
    \  }\n            return *this;\n        }\n        int operator*() const { return\
    \ val; }\n        bool operator!=(const iterator &i) const { return val != i.val;\
    \ }\n    };\n    range(int end) : start(0), stop(end), step(1) {}\n    range(int\
    \ start, int stop) : start(0), stop(stop), step(1) {}\n    range(int start, int\
    \ stop, int step) : start(0), stop(stop), step(step) {}\n    iterator begin()\
    \ const { return {start, stop, step}; };\n    iterator end() const { return {stop,\
    \ stop, step}; };\n};\n\n\n#line 5 \"math/matrix.hpp\"\n\ntemplate <typename S>\
    \ struct matrix {\n    using V = typename S::val_t;\n    vector<vector<V>> val;\n\
    \    matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n    matrix(vector<vector<V>>\
    \ src) : val(src) {}\n    vector<V> &operator[](int i) { return val[i]; }\n  \
    \  const vector<V> &operator[](int i) const { return val[i]; }\n    int height()\
    \ const { return val.size(); }\n    int width() const { return val[0].size();\
    \ }\n    static matrix id(int n) {\n        matrix ret(n, n);\n        for (int\
    \ i : range(n)) ret[i][i] = S::one();\n        return ret;\n    }\n    void row_add(int\
    \ i, int j, V a) {\n        for (int k : range(width())) { val[i][k] += val[j][k]\
    \ * a; }\n    }\n    bool place_nonzero(int i, int j) {\n        for (int k :\
    \ range(i, height())) {\n            if (val[k][j] != S::zero()) {\n         \
    \       if (k > i) row_add(i, k, S::one());\n                break;\n        \
    \    }\n        }\n        return val[i][j] != S::zero();\n    }\n    matrix upper_triangular()\
    \ const {\n        matrix ret(*this);\n        for (int i = 0, j = 0; i < height()\
    \ && j < width(); j++) {\n            if (!ret.place_nonzero(i, j)) continue;\n\
    \            for (int k : range(i + 1, height())) { ret.row_add(k, i, -ret[k][j]\
    \ / ret[i][j]); }\n            i++;\n        }\n        return ret;\n    }\n \
    \   V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        for (int i : range(height())) ret *= ut[i][i];\n        return ret;\n\
    \    }\n    matrix inv() const {\n        matrix ex(height(), width() << 1);\n\
    \        for (int i : range(height())) {\n            for (int j : range(width()))\
    \ { ex[i][j] = val[i][j]; }\n        }\n        for (int i : range(height()))\
    \ ex[i][width() + i] = S::one();\n        matrix ut = ex.upper_triangular();\n\
    \        for (int i : range(height() - 1, -1, -1)) {\n            ut.row_add(i,\
    \ i, S::one() / ut[i][i] - S::one());\n            for (int j : range(i)) ut.row_add(j,\
    \ i, -ut[j][i] / ut[i][i]);\n        }\n        matrix ret(height(), width());\n\
    \        for (int i : range(height())) {\n            for (int j : range(width()))\
    \ { ret[i][j] = ut[i][width() + j]; }\n        }\n        return ret;\n    }\n\
    \    matrix pow(ll p) const {\n        matrix res = matrix::id(height()), mul(*this);\n\
    \        while (p) {\n            if (p & 1) res *= mul;\n            mul *= mul;\n\
    \            p >>= 1;\n        }\n        return res;\n    }\n    matrix &operator+=(const\
    \ matrix &a) {\n        for (int i : range(height())) {\n            for (int\
    \ j : range(width())) { val[i][j] += a[i][j]; }\n        }\n        return *this;\n\
    \    }\n    matrix &operator-=(const matrix &a) {\n        for (int i : range(height()))\
    \ {\n            for (int j : range(width())) { val[i][j] -= a[i][j]; }\n    \
    \    }\n        return *this;\n    }\n    matrix &operator*=(const matrix &a)\
    \ {\n        matrix res(height(), a.width());\n        for (int i : range(height()))\
    \ {\n            for (int j : range(a.width())) {\n                for (int k\
    \ : range(width())) { res[i][j] += val[i][k] * a[k][j]; }\n            }\n   \
    \     }\n        val.swap(res.val);\n        return *this;\n    }\n    matrix\
    \ &operator/=(const matrix &a) { return *this *= a.inv(); }\n    bool operator==(const\
    \ matrix &a) const { return val == a.val; }\n    bool operator!=(const matrix\
    \ &a) const { return rel_ops::operator!=(*this, a); }\n    matrix operator+()\
    \ const { return *this; }\n    matrix operator-() const { return matrix(height(),\
    \ width()) -= *this; }\n    matrix operator+(const matrix &a) const { return matrix(*this)\
    \ += a; }\n    matrix operator-(const matrix &a) const { return matrix(*this)\
    \ -= a; }\n    matrix operator*(const matrix &a) const { return matrix(*this)\
    \ *= a; }\n    matrix operator/(const matrix &a) const { return matrix(*this)\
    \ /= a; }\n};\n\nstruct double_field {\n    using val_t = double;\n    static\
    \ val_t zero() { return 0.0; }\n    static val_t one() { return 1.0; }\n};\n\n\
    template <> bool matrix<double_field>::place_nonzero(int i, int j) {\n    static\
    \ constexpr double EPS = 1e-12;\n    for (int k : range(i + 1, height())) {\n\
    \        if (abs(val[k][j]) > abs(val[i][j])) {\n            swap(val[i], val[k]);\n\
    \            row_add(i, i, -2.0);\n        }\n    }\n    return abs(val[i][j])\
    \ > EPS;\n}\n\n\n#line 1 \"math/modint.hpp\"\n\n\n\n#line 5 \"math/modint.hpp\"\
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
    \ modint &a) { return os << a.val; }\n};\n\n\n#line 4 \"test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    struct mint_field {\n\
    \        using val_t = mint;\n        static val_t zero() { return mint(0); }\n\
    \        static val_t one() { return mint(1); }\n    };\n    int n;\n    cin >>\
    \ n;\n    matrix<mint_field> a(n, n);\n    for (int i : range(n)) {\n        for\
    \ (int j : range(n)) { cin >> a[i][j]; }\n    }\n    cout << a.det() << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/matrix_det\"\n#include\
    \ \"../../math/matrix.hpp\"\n#include \"../../math/modint.hpp\"\n\nint main()\
    \ {\n    using mint = modint<998244353>;\n    struct mint_field {\n        using\
    \ val_t = mint;\n        static val_t zero() { return mint(0); }\n        static\
    \ val_t one() { return mint(1); }\n    };\n    int n;\n    cin >> n;\n    matrix<mint_field>\
    \ a(n, n);\n    for (int i : range(n)) {\n        for (int j : range(n)) { cin\
    \ >> a[i][j]; }\n    }\n    cout << a.det() << endl;\n}"
  dependsOn:
  - math/matrix.hpp
  - template.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  requiredBy: []
  timestamp: '2021-08-17 14:04:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
- /verify/test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp.html
title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
---
